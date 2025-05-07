#include<stdio.h>

void loop();

int  main()
{
  loop();
}

void loop(){
  
  /* 
  for loop syntax
  for(inital value ; condition ; increment or decrement){
  statement;
  }
  */
  int initialvalue;
  for(initialvalue=1;initialvalue<=10;initialvalue++){
    printf("%d ",initialvalue);
  }

  //nested for loop
  int i,j;
  printf("\n");
  for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }

  //while loop
  //its used to execute a block of code as long as a condition is true
  int k=1;
  while(k<=10){
    printf("%d ",k);
    k++;
  }
  
  //do while loop
  int l=1;
  printf("\n");
  do{
    printf("%d ",l);
    l++;
  }while(l<=10);
  
}
