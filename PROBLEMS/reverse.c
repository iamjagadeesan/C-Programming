#include<stdio.h>
#include<stdlib.h>

int main(){
	int length,*array;
	printf("Enter the length of the array : ");
	scanf("%d",&length);
	array=malloc(length);
	for(int i=0;i<length;i++){
		printf("Enter the array[%d] value : ",i);
		scanf("%d",&array[i]);
	}
	for(int i=0,j=length-1;i<length/2;i++,j--){
		int temp = array[j];
		array[j] = array[i];
		array[i] = temp;
	}
	printf("\nReveresed array : ");
	for(int i=0;i<length;i++){
		printf("%d ",array[i]);
	}

}
