#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
  long SHORT=SHRT_MAX;
  long INTEGER=INT_MAX;
  long long LONG=LONG_MAX;
  long long  LONG_LONG=LLONG_MAX;
  float FLOAT=FLT_MAX;
  double DOUBLE=DBL_MAX;
  long double LONG_DOUBLE=LDBL_MAX;
  printf("The maximum value of short is %ld\n",(SHORT+1)*2);
  printf("The maximum value of integer is %ld\n",(INTEGER+1)*2);
  printf("The maximum value of long is %lld\n",(LONG+1)*2);
  printf("The maximum value of long long is %lld\n",(LONG_LONG+1)*2);
  printf("The maximum value of float is %f\n",FLOAT);
  printf("The maximum value of double is %lf\n",DOUBLE);
  printf("The maximum value of long double is %Lf\n",LONG_DOUBLE);
  printf("***********************************");
  printf("the range of byte is : %d to %d\n",CHAR_MIN,CHAR_MAX);
  printf("the range of short is : %d to %d\n",SHRT_MIN,SHRT_MAX);
  printf("the range of int is : %d to %d\n",INT_MIN,INT_MAX);
  printf("the range of long is : %ld to %ld\n",LONG_MIN,LONG_MAX);
  printf("the range of char is : %d to %d\n",CHAR_MIN,CHAR_MAX);
  printf("the range of float is : %f to %f\n",FLT_MIN,FLT_MAX);
  printf("the range of double is : %f to %f\n",DBL_MIN,DBL_MAX);
  printf("the range of long double is : %Lf to %Lf\n",LDBL_MIN,LDBL_MAX);
    
}