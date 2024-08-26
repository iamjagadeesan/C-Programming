#include<stdio.h>

void datatypes();

int main(){
  datatypes();
}

void datatypes(){

  short integer; // short integer store 2 bytes
  int integernumber; //  
  float floatnumber; //float literally store the value as double
  double doublenumber;
  char character;
  char strings[40];
  printf("Integer can store whole numbers\n");
  printf("size of integer is %d bytes\n",sizeof(int));
  printf("Enter an integer number : ");
  scanf("%d",&integernumber);
  printf("Float can store numbers with decimal\n");
  printf("size of float is %d bytes\n",sizeof(float));
  printf("Enter a float number : ");
  scanf("%f",&floatnumber);
  printf("Double can store numbers with decimals\n");
  printf("size of double is %d bytes\n",sizeof(double));
  printf("Enter a double number : ");
  scanf("%lf",&doublenumber);
  printf("Character can store a single character\n");
  printf("size of character is %d bytes\n",sizeof(char));
  printf("Enter a character : ");
  scanf(" %c",&character);
  getchar();      // to clear the buffer
  printf("String can store a sequence of characters with a user allocated  bytes\n");
  printf("size of string is %d bytes\n",sizeof(strings));
  printf("Enter a string : ");
  scanf("%[^\n]s",strings); // [^\n] is used to take input until a new line is encountered
  printf("\n--- The entered data's are ---\n");
  printf("The integer number : %d\n",integernumber);
  printf("The float number : %.2f\n",floatnumber);
  printf("The double number : %lf\n",doublenumber);
  printf("The character : %c\n",character);
  printf("The string : %s\n",strings);

}