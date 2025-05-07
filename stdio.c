#include<stdio.h>
#include<string.h>
void print();
void scan();
void fprint();
void fscan();
void sprint();
void sscan();
void snprint();
void stdio(){
  print();
  scan();
  fprint();
  fscan();
  sprint();
  sscan();
  snprint();
}
void print(){
  printf("\nWELCOME TO C PROGRAMMING");
}
void scan(){
  char name[20];
  printf("enter your name : ");
  scanf("%s[^\n]",name);
}
void fprint(){
  FILE *file;
  file=fopen("file.txt","w");
  printf("file open successfully\nwrite some paragraph : ");
  char paragraph[100];
  fgets(paragraph,100,stdin);
  fprintf(file,paragraph,100);
}
void fscan(){
  FILE *file;
  file=fopen("file.txt","r");
  char paragraph[100];
  fscanf(file,paragraph,10);
  printf("\nparagraph : %s",paragraph);
}
void sprint(){ // its used to store the printing string value for upcomming use
  char name[20],print[30];
  printf("Enter your name : ");
  scanf("%s[^\n]",name);
  sprintf(print,"%s is a good boy",name);
  printf("\n%s",print);
}
void sscan(){ // its used to parse the date from the string to orginal datatype
  char dob[12];
  printf("\nEnter your DOB(00 00 0000)like this : ");
  fgets(dob,12,stdin);
  printf("\n%s",dob);
  long int date,month,year;
  sscanf(dob,"%ld / %ld / %ld",&date,&month,&year);
  printf("\ndate : %ld\nmonth : %ld\nyear : %ld",date,month,year);
}
void snprint(){
  char buffer[50]; // Buffer to hold the formatted string
  long int num;
  double pi;
  char text[50];
  printf("\nEnter some number : ");
  scanf("%ld",&num);
  printf("\nEnter your height : ");
  scanf("%lf",&pi);
  printf("\nEnter some sentence : ");
  getchar();
  fgets(text,50,stdin);
  // Using snprintf to format and store data into the buffer
  int result = snprintf(buffer, sizeof(buffer), "Number : %ld,Pi : %.2f, Text : %s", num, pi, text);
  printf("string length : %d\n",result);
  if (result >= 0 && result < sizeof(buffer)){
      printf("Formatted string: %s\n", buffer);
  } else {
      printf("Error in formatting or insufficient buffer size.\n");
  } 
}