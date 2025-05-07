#ifndef JD_H
#define JD_H

#define _GNU_SOURCE
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char *string;

static size_t allocations = 0;
static string *strings = NULL;

string get_string(const char *format, ...);
char get_char(const char *format, ...);
double get_double(const char *format, ...);
float get_float(const char *format, ...);
int get_int(const char *format, ...);
long get_long(const char *format, ...);
long long get_long_long(const char *format, ...);
static void teardown(void);

string get_string(const char *format, ...) {
    if (allocations == SIZE_MAX / sizeof(string)) {
        return NULL;
    }
    string buffer = NULL;
    size_t capacity = 0;
    size_t size = 0;
    int c;
    if (format != NULL) {
        va_list ap;
        va_start(ap, format);
        vprintf(format, ap);
        va_end(ap);
    }
    while ((c = fgetc(stdin)) != '\r' && c != '\n' && c != EOF) {
        if (size + 1 > capacity) {
            if (capacity < SIZE_MAX) {
                capacity++;
            } else {
                free(buffer);
                return NULL;
            }
            string temp = realloc(buffer, capacity);
            if (temp == NULL) {
                free(buffer);
                return NULL;
            }
            buffer = temp;
        }
        buffer[size++] = c;
    }
    if (size == 0 && c == EOF) {
        return NULL;
    }
    if (size == SIZE_MAX) {
        free(buffer);
        return NULL;
    }
    if (c == '\r' && (c = fgetc(stdin)) != '\n') {
        if (c != EOF && ungetc(c, stdin) == EOF) {
            free(buffer);
            return NULL;
        }
    }
    string s = realloc(buffer, size + 1);
    if (s == NULL) {
        free(buffer);
        return NULL;
    }
    s[size] = '\0';
    string *tmp = realloc(strings, sizeof(string) * (allocations + 1));
    if (tmp == NULL) {
        free(s);
        return NULL;
    }
    strings = tmp;
    strings[allocations] = s;
    allocations++;
    return s;
}

char get_char(const char *format, ...) {
    va_list ap;
    va_start(ap, format);
    while (true) {
        string line = get_string(format);
        if (line == NULL) {
            va_end(ap);
            return CHAR_MAX;
        }
        char c, d;
        if (sscanf(line, "%c%c", &c, &d) == 1) {
            va_end(ap);
            return c;
        }
        printf("\033[1A");
        printf("\033[2K");
        printf("\033[0G");
    }
}

double get_double(const char *format, ...) {
    va_list ap;
    va_start(ap, format);
    while (true) {
        string line = get_string(format);
        if (line == NULL) {
            va_end(ap);
            return DBL_MAX;
        }
        if (strlen(line) > 0 && !isspace((unsigned char)line[0])) {
            char *tail;
            errno = 0;
            double d = strtod(line, &tail);
            if (errno == 0 && *tail == '\0' && isfinite(d) != 0 && d < DBL_MAX) {
                if (strcspn(line, "XxEePp") == strlen(line)) {
                    va_end(ap);
                    return d;
                }
            }
        }
        printf("\033[1A");
        printf("\033[2K");
        printf("\033[0G");
    }
}

float get_float(const char *format, ...) {
    va_list ap;
    va_start(ap, format);
    while (true) {
        string line = get_string(format);
        if (line == NULL) {
            va_end(ap);
            return FLT_MAX;
        }
        if (strlen(line) > 0 && !isspace((unsigned char)line[0])) {
            char *tail;
            errno = 0;
            float f = strtof(line, &tail);
            if (errno == 0 && *tail == '\0' && isfinite(f) != 0 && f < FLT_MAX) {
                if (strcspn(line, "XxEePp") == strlen(line)) {
                    va_end(ap);
                    return f;
                }
            }
        }
        printf("\033[1A");
        printf("\033[2K");
        printf("\033[0G");
    }
}

int get_int(const char *format, ...) {
    va_list ap;
    va_start(ap, format);
    while (true) {
        string line = get_string(format);
        if (line == NULL) {
            va_end(ap);
            return INT_MAX;
        }
        if (strlen(line) > 0 && !isspace((unsigned char)line[0])) {
            char *tail;
            errno = 0;
            long n = strtol(line, &tail, 10);
            if (errno == 0 && *tail == '\0' && n >= INT_MIN && n < INT_MAX) {
                va_end(ap);
                return n;
            }
        }
        printf("\033[1A");
        printf("\033[2K");
        printf("\033[0G");
    }
}

long get_long(const char *format, ...) {
    va_list ap;
    va_start(ap, format);
    while (true) {
        string line = get_string(format);
        if (line == NULL) {
            va_end(ap);
            return LONG_MAX;
        }
        if (strlen(line) > 0 && !isspace((unsigned char)line[0])) {
            char *tail;
            errno = 0;
            long n = strtol(line, &tail, 10);
            if (errno == 0 && *tail == '\0' && n < LONG_MAX) {
                va_end(ap);
                return n;
            }
        }
        printf("\033[1A");
        printf("\033[2K");
        printf("\033[0G");
    }
}

long long get_long_long(const char *format, ...) {
    va_list ap;
    va_start(ap, format);
    while (true) {
        string line = get_string(format);
        if (line == NULL) {
            va_end(ap);
            return LLONG_MAX;
        }
        if (strlen(line) > 0 && !isspace((unsigned char)line[0])) {
            char *tail;
            errno = 0;
            long long n = strtoll(line, &tail, 10);
            if (errno == 0 && *tail == '\0' && n < LLONG_MAX) {
                va_end(ap);
                return n;
            }
        }
        printf("\033[1A");
        printf("\033[2K");
        printf("\033[0G");
    }
}

static void teardown(void) {
    if (strings != NULL) {
        for (size_t i = 0; i < allocations; i++) {
            free(strings[i]);
        }
        free(strings);
    }
}

#if defined(_MSC_VER)
    #pragma section(".CRT$XCU",read)
    #define INITIALIZER_(FUNC,PREFIX) \
        static void FUNC(void); \
        __declspec(allocate(".CRT$XCU")) void (*FUNC##_)(void) = FUNC; \
        __pragma(comment(linker,"/include:" PREFIX #FUNC "_")) \
        static void FUNC(void)
    #ifdef _WIN64
        #define INITIALIZER(FUNC) INITIALIZER_(FUNC,"")
    #else
        #define INITIALIZER(FUNC) INITIALIZER_(FUNC,"_")
    #endif
#elif defined(__GNUC__)
    #define INITIALIZER(FUNC) \
        static void FUNC(void) __attribute__((constructor)); \
        static void FUNC(void)
#else
    #error The CS50 library requires some compiler-specific features, \
           but we do not recognize this compiler/version. Please file an issue at \
           https://github.com/cs50/libcs50
#endif

INITIALIZER(setup);

#endif
