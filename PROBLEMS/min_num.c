#include<stdio.h>
int main(){
	int arr[]={8,2,4,1,9,3,6,7,22,0,33,44,10} ,length = sizeof(arr)/4,min = arr[0],max = arr[0];
	for(int i=0;i<length-1;i++){
		if(min>arr[i])
			min = arr[i];
		if(max<arr[i])
			max = arr[i];
	}
	printf("The Minimum number in a array is : %d\nThe Maximum number in a array is : %d",min,max);
}