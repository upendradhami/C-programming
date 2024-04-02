#include<stdio.h> 
#include<conio.h>

void reverse(int arr[], int n);
 int main()
 { 
    int n ;
    printf("enter the size of an array : ");
    scanf("%d",&n);
   
   int arr[n];
    printf("enter the elements of an array:\n");
    for(int i=0; i<n; i++)
    {
      scanf("%d ", &arr[i]);
    }
    reverse(arr,n);

 return 0;
 }

void reverse(int arr[], int n){
    for(int i=n-1; i>=0; i--){
       printf("%d \n", arr[i]);
    }
 }