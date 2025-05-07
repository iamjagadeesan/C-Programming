#include<stdio.h>

void condition(){
  int number1,number2,number3;
  printf("Enter the number1: ");
  scanf("%d",&number1);
  printf("Enter the number2: ");
  scanf("%d",&number2);
  printf("Enter the number3: ");
  scanf("%d",&number3);
  
  //if the condition is true then it will execute the code
  if(number1>number2)
    printf("number1 is greater than number2");
  
  //if the condition is false then the else part will execute
  if(number1>number2)
    printf("number1 is greater than number2");
  else
    printf("number2 is greater than number1");
  
  //if the condition is true then it will execute the code or else if  part will execute or else part will execute 
  if(number1>number2)
    printf("number1 is greater than number2");
  else if(number1<number2)
    printf("number2 is greater than number1");
  else
    printf("number1 is equal to number2");

  //nested if
  if(number1>number2)
    if(number1>number3)
      printf("number1 is greater than number2 and number3");
  
}
