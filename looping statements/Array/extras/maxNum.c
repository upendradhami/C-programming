#include<stdio.h> 
#include<conio.h>

int maxNum(int arr[], int n);
 int main()
 {
    int n=5,arr[5];
    printf("enter the elements of the array : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int m= maxNum(arr,n);
    printf(" the maximum num is : %d",m);

    return 0;

 }

 int maxNum(int arr[], int n){
    int max =0;
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max= arr[i];
        }
        else{
            continue;
        }
    }
    return max;
 }