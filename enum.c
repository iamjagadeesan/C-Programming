//enum means enumeration it returns the integer constant value only

#include<stdio.h>

int main()
{
    typedef enum{
        first = 1,
        second = 3,
        third
    }place;

    place google = first ;
    place zoho = second;
    place tcs = third;

    printf("%s\n%d\n%d",google,zoho,tcs);
  
}