#include<stdio.h>
#include<stdarg.h>

int max(int numbers,...){
	va_list args; 
	va_start(args,numbers);
	int maximum = 0;
	for(int i=1;i<numbers;i++){
		int number = va_arg(args,int);
		if(number>maximum)maximum=number;
		printf("%d\n",number);
	}
	va_end(args);
	return maximum;
}

int main(int argc, char const *argv[])
{
	int max_number = max(6,2,3,4,7,8,6); // here we give the length of the array numbers in 0th index
	printf("Maximum number is : %d",max_number);
	//int arr[] = {1,2,3,4,6,7,8,9};
	//printf("Length of the array : %d",sizeof(arr)/sizeof(int));
	return 0;
}