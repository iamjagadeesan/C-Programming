#include<stdio.h>
#include<string.h>
void stringlen();
void stringcopy();
void stringncopy();
void stringcompare();
void stringncompare();
void stringconcat();
void stringnconcat();
void stringchar();
void stringrchar();
void stringstring();
void stringspn();
void stringtok();

int main(){
  stringlen();
  stringcopy();
  stringncopy();
  stringcompare();
  stringncompare();
  stringconcat();
  stringnconcat();
  stringchar();
  stringrchar();
  stringspn();
  stringtok();
  return 0;
}

void stringlen(){
  char name[20];
  printf("\nEnter your name : ");
  scanf("%s[^\n]",name);
  int len=strlen(name);
  printf("length of name is : %d",len);
}
void stringcopy(){// its used to copy the string to another variable
  char name[20],copy[20];
  printf("\nEnter your name : ");
  scanf("%s[^\n]",name);
  strcpy(copy,name);
  printf("copied name is : %s",copy);
}
void stringcompare(){// its used to compare the string
  char name1[20],name2[20];
  printf("\nEnter your name1 : ");
  scanf("%s[^\n]",name1);
  printf("\nEnter your name2 : ");
  scanf("%s[^\n]",name2);
  int compare=strcmp(name1,name2);
  if(compare==0){
    printf("name1 is equal to name2");
  }
  else{
    printf("name1 is not equal to name2");
  }
}
void stringconcat(){// its used to concatenate the string
  char name1[30],name2[20];
  printf("\nEnter your name : ");
  scanf("%s[^\n]",name1);
  printf("\nEnter your fathername : ");
  scanf("%s[^\n]",name2);
  strcat(name1," ");
  strcat(name1,name2);
  printf("concatenated name is : %s",name1);
}
void stringncopy(){// its used to copy the n number of character from the source string to the destination string
  char name[20],copy[20];
  printf("\nEnter your name : ");
  scanf("%s[^\n]",name);
  strncpy(copy,name,3);
  printf("copied name is : %s",copy);
}
void stringnconcat(){// its used to concatenate the string with the given number of characters
  char name1[30],name2[20];
  printf("\nEnter your name : ");
  scanf("%s[^\n]",name1);
  printf("\nEnter your fathername : ");
  scanf("%s[^\n]",name2);
  strncat(name1," ",2);
  strncat(name1,name2,3);
  printf("concatenated name is : %s",name1);
}
void stringncompare(){// its used to compare the first n characters of two strings
  char name1[20],name2[20];
  printf("\nEnter your name1 : ");
  scanf("%s[^\n]",name1);
  printf("\nEnter your name2 : ");
  scanf("%s[^\n]",name2);
  int compare=strncmp(name1,name2,3);
  if(compare==0)
    printf("name1 is equal to name2");
  else
    printf("name1 is not equal to name2");
}
void stringchar(){// its used to check the first occurence of the character in the string
  char name[20];
  printf("\nEnter your name : ");
  scanf("%s[^\n]",name);
  char ch,replace;
  getchar();
  printf("which letter you want to replace : ");
  scanf("%c",&ch);
  char *ptr=strchr(name,ch);
  getchar();
  printf("\nEnter the replace letter : ");
  scanf("%c",&replace);
  ptr[0]=replace;
  printf("\n%s",name);
}
void stringrchar(){// its used to check the last occurence of the character in the string
  char name[20];
  printf("\nEnter your name : ");
  scanf("%s[^\n]",name);
  char ch,replace;
  getchar();
  printf("which letter you want to replace : ");
  scanf("%c",&ch);
  char *ptr=strrchr(name,ch);
  getchar();
  printf("\nEnter the replace letter : ");
  scanf("%c",&replace);
  ptr[0]=replace;
  printf("\n%s",name);
}
void stringspn(){
  char word[20];
  printf("\nEnter any words : ");
  scanf("%s[^\n]",word);
  char list[]="1234567890";
  int pos=strspn(word,list);
  printf("\n%d",pos);
  printf("\n%s",word+pos);
}
void stringtok(){
  char word[20];
  printf("\nEnter some sentence : ");
  fgets(word,20,stdin);
  char check[]=" ";
  char* por=strtok(word,check);
  while(por!=NULL){
    printf("%s ",por);
    por=strtok(NULL,check);
  }
}
