#include<stdio.h> 
#include<conio.h>
 int main()
 {
  int a[5]= {1,2,3,4,5};
  int *ptr = a;
  for(int i=5; i>0; i--){
    printf("%d \n",ptr[i-1]);
  }
    
 return 0;
 }