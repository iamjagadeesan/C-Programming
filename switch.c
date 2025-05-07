#include<stdio.h>

void switching();

//in switch case "integers" or "characters" are only allowed
int main()
{
  switching();
  return 0;
}

void switching(){
  
  int number ;
  printf("Enter a number : ");
  scanf(" %d",&number);
  
  switch(number){
    case 1:
    printf("You entered 1\n");
    printf("you entered one");
    break; // without break statement next case will automatically execute
    case 2:
    printf("You entered 2\n");
    break;
    case 3:
    printf("You entered 3\n");
    break;
  default:
    printf("You entered a number more than 3 ");
  }

  printf("Enter a character : ");
  char ch;
  scanf(" %c",&ch);
  switch(ch){
    case 'a':
    printf("You entered a\n");
    break;
    case 'b':
    printf("You entered b\n");
    break;
    case 'c':
    printf("You entered c\n");
    break;
    default:
    printf("You entered a character other than a,b or c");
  }
}