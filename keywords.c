#include<stdio.h>

void keywords();

int main()
{

  keywords();
}

void keywords(){
  char arrar[32][10] = {"auto","break","case","char","const","continue","default","do","double","else","enum", "extern","float","for","goto","if","int","long","register","return","short","signed","sizeof", "static","struct","switch","typedef","union","unsigned","void","volatile","while"};
  printf("*** keywords in C programming ***\n");
  for(int i=0;i<32;i++){
    printf("%d",i+1);
    if(i>8){
      printf(" - ");
    }else{
      printf("  - ");
    }
    printf("%s\n",arrar[i]);
  }
  
}
