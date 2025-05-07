//struct means structure define a datatype by the user it is userdefined datatype

#include <stdio.h>
#include <jd.h>

// Define the structures separately
typedef struct {
    char *first_name;
    char *last_name;
} name;

typedef struct {
    int day;
    int month;
    int year;
} dob;

typedef struct{
	int doorNumber;
	char *streetName;
	char *landMark;
	char *districtName;
	int pinCode;
}adds;

// Now, define the person struct that uses name and dob
typedef struct {
    name fullname;  
    dob birthdate; 
    adds address; 
} person;

int main() {

    person j;

    // Assign values to the name and birthdate members
    j.fullname.first_name = get_string("Enter your First Name : ");
    j.fullname.last_name = get_string("Enter your Last  Name : ");
    j.birthdate.day = get_int("Enter your Birth Day : ");
    j.birthdate.month = get_int("Enter your Birth Month : ");
    j.birthdate.year = get_int("Enter you Birth Year : ");
    j.address.doorNumber=get_int("Enter your Door number : ");
    j.address.streetName=get_string("Enter your Street Name : ");
    j.address.landMark=get_string("Enter your Land Mark : ");
    j.address.districtName=get_string("Enter your District Name : ");
    j.address.pinCode=get_int("Enter your pinCode : ");

    printf("\nFirst Name: %s\n", j.fullname.first_name);
    printf("Last Name: %s\n", j.fullname.last_name);
    printf("Date of Birth: %02d/%02d/%04d\n", j.birthdate.day, j.birthdate.month, j.birthdate.year);
    printf("Address : D.No:%d %s %s , %s %d\n",j.address.doorNumber,j.address.streetName,j.address.landMark,j.address.districtName,j.address.pinCode);

    return 0;
}
