#include <stdio.h>

// Define a union that stores different types of information
typedef union {
    char *first_name;
    int day;
    int doorNumber;
    char *streetName;
} person_info;

int main() {

    // Declare a union variable
    person_info info;

    // Assign and print first_name
    info.first_name = "Jagadeesan";
    printf("First Name: %s\n", info.first_name);

    // Assign and print day (overwrites first_name)
    info.day = 15;
    printf("Day: %d\n", info.day);

    // Assign and print doorNumber (overwrites day)
    info.doorNumber = 101;
    printf("Door Number: %d\n", info.doorNumber);

    // Assign and print streetName (overwrites doorNumber)
    info.streetName = "Main Street";
    printf("Street Name: %s\n", info.streetName);

}
