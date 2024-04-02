
#include<stdio.h> 
#include<conio.h>
 int main()
 {
   int arr[5];
   int *ptr= &arr[0];

   for(int i=0; i<5; i++){
   scanf("%d ", (ptr+i)); // scanf("%d" , &arr[i]);
 }
    for(int i=0; i<5; i++){
 printf("%d \t", *(ptr+i)); // scanf("%d" , arr[i]);

   }
   
    
 return 0;
 }