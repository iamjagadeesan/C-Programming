#include <stdio.h>

int main() {
	int value,rem,result=0;
	printf("Enter any number : ");
	scanf("%d",&value);
	while(value!=0){
		rem=value%10;
		result=(result*10)+rem;
		value=value/10;
	}
	printf("Reverse the number is : %d",result);

}
