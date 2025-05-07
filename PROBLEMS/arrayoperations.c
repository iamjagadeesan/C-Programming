#include<stdio.h>
#include<string.h>

int occurence();
int sumofarray();
int averageofsum();

int main(){
	int array[] = {8,8,8}, length = sizeof(array)/4;
   printf("\nthe occurence value is\t: %d",occurence(array,length,4));
   printf("\nThe total sum of array\t: %d",sumofarray(array,length));
   printf("\nThe average of array\t: %d\n",averageofsum(array,length));
}

int occurence(int arr[],int len,int occ){
	int value = 0;
	for(int i=0;i<len;i++)
		if(arr[i]==occ)
			value++;
	return value;
}
int sumofarray(int arr[],int len){
	int sum=0;
	for(int i=0;i<len;i++)
		sum += arr[i];
	return sum;
}
int averageofsum(int arr[],int len){
	return sumofarray(arr,len)/len;
}
