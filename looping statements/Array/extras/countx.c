#include<stdio.h> 
#include<conio.h>

int count(int arr[], int n);
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
     printf("the number 2 has repeated %d times",count(arr,n));

 return 0;
 }

int count(int arr[], int n){
    int countn=0;
   for(int i=0; i<n; i++){
      if(arr[i] == 2){
        countn ++;
    }
   } 
    return countn++;
}