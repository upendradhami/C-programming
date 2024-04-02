#include<stdio.h> 
#include<conio.h>
 int main()
 {
    int n=5;
    int arr[n];

    printf("enter the elements of array : ");
    for(int j=0; j<n; j++){
        scanf("%d", &arr[j]);
    }

    for(int i=0; i<n/2; i++){
        int num1 = arr[i];
        int num2 = arr[n-1-i];
        arr[i]=num2;
        arr[n-1-i]= num1;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d \n", arr[i]);
    }
    
 return 0;
 }