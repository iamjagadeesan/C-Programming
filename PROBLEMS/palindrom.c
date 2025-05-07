#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	bool check = false;
	char string[20];
	printf("Enter the word : ");
	scanf("%s",string);
	int length = strlen(string);
	for(int i=0,j=length-1;i<length/2;i++,j--){
		if(string[i]==string[j])
			check = true;
		else
			check=false;
			break;
 	}
 	if(check)
 		printf("The given word is palindrom");
 	else
 		printf("The given word is not a palindrom");
}