#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void singlepointer();
void doublepointer();
void triplepointer();
void voidpointer();
void charpointer();
void realtimepointer();
void arraypointer();
void string();
void sentence();

int main(){
  singlepointer();
  doublepointer();
  triplepointer();
  charpointer();
  voidpointer();
  realtimepointer();
  arraypointer();
  string();
  sentence();
}

void singlepointer(){
  int num=26; //num is a variable of type int
  int* ptr; //ptr is a pointer to an int
  ptr=&num;  //ptr now points to num
  printf("\nthe value of num is   : %d",num);
  printf("\nthe address of num is : %p",&num);
  printf("\nthe value of ptr is   : %p",ptr);
  printf("\nthe value of *ptr is  : %d",*ptr);
  printf("\nthe address of ptr    : %p",&ptr);
}
void doublepointer(){
  int num=2001; //num is a variable of type int
  int* ptr1;  //ptr1 is a pointer to an int
  int** ptr2; //ptr2 is a pointer to a pointer to an int
  ptr1=&num;  //ptr1 now points to num
  ptr2=&ptr1;  //ptr2 now points to ptr1
  printf("\nthe value of num is   : %d",num);
  printf("\nthe address of num is : %p",&num);
  printf("\nthe value of ptr1 is  : %p",ptr1);
  printf("\nthe value of *ptr1 is : %d",*ptr1);
  printf("\nthe address of ptr1   : %p",&ptr1);
  printf("\nthe value of ptr2 is  : %p",ptr2);
  printf("\nthe value of *ptr2 is : %p",*ptr2);
  printf("\nthe value of **ptr2 is: %d",**ptr2);
  printf("\nthe address of ptr2   : %p",&ptr2);
}
void triplepointer(){
  int num=9;  //num is a variable of type int
  int* ptr1;  //ptr1 is a pointer to an int
  int** ptr2;  //ptr2 is a pointer to a pointer to an int
  int*** ptr3;  //ptr3 is a pointer to a pointer to a pointer to an int
  ptr1=&num;  //ptr1 now points to num
  ptr2=&ptr1;  //ptr2 now points to ptr1
  ptr3=&ptr2;  //ptr3 now points to ptr2
  printf("\nthe value of num is   : %d",num);
  printf("\nthe address of num is : %p",&num);
  printf("\nthe value of ptr1 is  : %p",ptr1);
  printf("\nthe value of *ptr1 is : %d",*ptr1);
  printf("\nthe address of ptr1   : %p",&ptr1);
  printf("\nthe value of ptr2 is  : %p",ptr2);
  printf("\nthe value of *ptr2 is : %p",*ptr2);
  printf("\nthe value of **ptr2 is: %d",**ptr2);
  printf("\nthe address of ptr2   : %p",&ptr2);
  printf("\nthe value of ptr3 is  : %p",ptr3);
  printf("\nthe value of *ptr3 is : %p",*ptr3);
  printf("\nthe value of **ptr3 is: %p",**ptr3);
  printf("\nthe value   ***ptr3 is: %d",***ptr3);
  printf("\nthe address of ptr3   : %p",&ptr3);
}
void voidpointer(){
  int num=24;  //num is a variable of type int
  void* ptr;  //ptr is a pointer to an int
  ptr=&num;  //ptr now points to num
  printf("\nthe value of num is   : %d",num);
  printf("\nthe address of num is : %p",&num);
  printf("\nthe value of ptr is   : %p",ptr);
  printf("\nthe value of *ptr is  : %d",*(int*)ptr);
  printf("\nthe address of ptr    : %p",&ptr);
}
void charpointer(){
  
  int num=1;  //num is a variable of type int
  int* ptr;  //ptr is a pointer to an int
  ptr=&num;  //ptr now points to num
  char* charptr;  //charptr is a pointer to a char
  charptr=(char*)ptr;  //charptr now points to num
  printf("\nthe   value   of   num   is: %d",num);
  printf("\nthe  address  of   num   is: %p",&num);
  printf("\nthe   value   of   ptr   is: %p",ptr);
  printf("\nthe   value   of  *ptr   is: %d",*ptr);
  printf("\nthe  address  of   ptr   is: %p",&ptr);
  printf("\nthe  value  of  charptr  is: %p",charptr);
  printf("\nthe value  of  *charptr  is: %d",*charptr);
  printf("\nthe address of charptr   is: %p",&charptr);
  printf("\nthe value of  *charptr+1 is: %p",&charptr+1); 
  
}

int increment(int* num){
  *num = *num + 1;
  return *num;
}
int num1=10;
void realtimepointer(){
  int num1=10;//we declare a local variabe inside main fun()
  increment(&num1); //call the function throw the address of num
  printf("\nthe value of num is: %d",num1); // after the increment , output
}
void arraypointer(){
  int array[5];
  for(int i=0;i<5;i++){
    printf("\nenter the %d number of array : ",i+1);
    scanf("%d",&array[i]);
  }
  int* p;
  p = array;
  for(int i=0;i<5;i+=1){
    printf("\nthe value of array[%d] is address %p : %d",i+1,p+i,*(p+i));
  }
}

void string(){
  char *strings;
  strings = malloc(20);
  printf("\nEnter the string  value : ");
  scanf("%s",strings); // %s with take the characters until white space or \n new line
  printf("\nThe string value is : %s",strings);
  printf("\nThe string length is : %d",strlen(strings)); 
}

void sentence(){
  char* Sentence = malloc(100);
  printf("\nEnter any sentence : ");
  fgets(Sentence,100,stdin); // it takes the charaters until we press Enter 
  printf("%s",Sentence);
}