# include <stdio.h>
#include <stdlib.h>
#include <string.h>

void array(){
  int integer[5];
  float floats[5];
  char strings[5][20];
  printf("ENTER A INTEGER ARRAY\n");
  for(int i=0;i<5;i++){
    printf("Enter the integer %d: ",i+1);
    scanf("%d",&integer[i]);
  }
  for(int i=0;i<5;i++){
    printf("\nEnter the integer %d : %d ",i+1,integer[i]);
  }
  printf("\nENTER A FLOAT ARRAY\n");
  for(int i=0;i<5;i++){
    printf("Enter the float %d: ",i+1);
    scanf("%f",&floats[i]);
  }
  for(int i=0;i<5;i++){
    printf("\nEnter the float %d : %f ",i+1,floats[i]);
  }
  printf("\nENTER A STRING ARRAY\n");
  for(int i=0;i<5;i++){
    printf("Enter the string %d: ",i+1);
    scanf("%s",strings[i]);
  }
  for(int i=0;i<5;i++){
    printf("\nEnter the string %d : %s ",i+1,strings[i]);
  }
}


