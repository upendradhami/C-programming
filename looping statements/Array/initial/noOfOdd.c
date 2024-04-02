#include<stdio.h> 
#include<conio.h>

int typenum(int arr[], int n);
 int main()
 { 
    int arr[]={34,22,23,45,89};
    typenum(arr,5);
    printf("\n %d ", *(arr));
    printf("\n %d", *(arr+1));
    return 0;
 }

 int typenum(int arr[], int n){
      int odd=0, even=0;
   
    for(int i=0; i<n; i++){
        if(arr[i]%2 !=0){
           odd =odd +1;
        }else{
             even =even +1;}
         }
         printf("no. of odd is : %d \n", odd);
         printf("no. of even is : %d\n",even);
 }