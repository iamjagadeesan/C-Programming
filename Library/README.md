# 📝 `libjd` - A Lightweight C Input Library  

A simple yet powerful C library for safe and easy input handling (strings, numbers, chars) with automatic memory management.  

## 🔥 Features  
✔ **Safe String Input** – No buffer overflows  
✔ **Automatic Memory Management** – Tracks allocations and cleans up  
✔ **Error Handling** – Robust validation for numbers  
✔ **Cross-Platform** – Works on Windows, Linux, and macOS  
✔ **Clean API** – Inspired by CS50’s simplicity  

---

## 📦 Installation  
### Option 1: Single Header (Recommended)  
1. Copy `jd.h` into your project.  
2. `#include "jd.h"` in your code.  

### Option 2: Compile as a Library  
```sh
gcc -c jd.c -o libjd.a   # Static library
ar rcs libjd.a jd.o      # Archive (optional)
```

---

## 🚀 Quick Start  
```c
#include "jd.h"

int main() {
    string name = get_string("Enter your name: ");  // Reads full line
    int age = get_int("Enter your age: ");         // Validated integer
    double height = get_double("Height (m): ");    // Validated double
    
    printf("Hello %s (Age: %d, Height: %.2fm)\n", name, age, height);
    
    // Memory is automatically freed at exit!
    return 0;
}
```

---

## 📌 API Reference  

### 🔹 Strings  
```c
string get_string(const char *format, ...);  // Reads a line (dynamic alloc)
```
- **Example**:  
  ```c
  string input = get_string("Prompt: ");  // Stores input until Enter
  ```

### 🔹 Numbers  
```c
int get_int(const char *format, ...);       // Validated integer
long get_long(const char *format, ...);     // Validated long
double get_double(const char *format, ...); // Validated double
```
- **Example**:  
  ```c
  int num = get_int("Enter a number: ");  // Loops until valid input
  ```

### 🔹 Characters  
```c
char get_char(const char *format, ...);    // Single char (no extra input)
```
- **Example**:  
  ```c
  char c = get_char("Press a key: ");  // Only accepts one character
  ```

---

## ⚠️ Notes  
- **Memory**: All strings are `free()`’d automatically on program exit.  
- **Errors**: Functions return `INT_MAX`, `DBL_MAX`, etc., on failure.  
- **Thread Safety**: Not thread-safe (global state for cleanup).  

---

## 📜 License  
MIT License. Free for personal and commercial use.  

---

## 🛠️ Contribute  
Found a bug? Want a feature?  
👉 [Open an Issue](https://github.com/yourusername/libjd/issues) | **PRs Welcome!**  

---

## 📊 Example Output  
```
Enter your name: John Doe
Enter your age: 25
Height (m): 1.75
Hello John Doe (Age: 25, Height: 1.75m)
```

---

### 🎯 Perfect For  
- CLI tools  
- Homework assignments  
- Learning C  
- Lightweight projects  

🚀 **Star the repo if you find it useful!** ⭐  

---

### 📂 Repository Structure  
```
libjd/
├── jd.h          # Header file
├── README.md     # This file
└── examples/     # Sample programs
```
