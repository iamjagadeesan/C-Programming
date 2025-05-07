#include <stdio.h>
#include <jd.h>

int Factorial(int n){
	if(n<=1){
		return 1;
	}
	return Factorial(n - 1) * n;
}

int main(){
	int answer,input;
	input = get_int("Enter the number to find Factorial : ");
	answer = Factorial(input);
	printf("Factorial of %d : %d",input,answer);
	return 0;
}