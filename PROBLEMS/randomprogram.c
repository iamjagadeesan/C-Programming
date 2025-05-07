#include<stdio.h>
#include<jd.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
	bool condition = true;
	while(condition){
		int user_number=get_int("\n\nGuess the number : ");
		int random_number=rand()%10;
		if(user_number==random_number){
			printf("\n*** game over ***");
			condition = false;
		}
		else{
			printf("\nThe number is : %d",random_number);
		}
	}
}