#include<stdio.h> 
#include<conio.h>

void getArr(int arr[], int n){
     for(int i=0; i<n; i++){
     scanf("%d",&arr[i]);
     }
  }
  

 int main()
 {
  int n;
  printf(" enter n: ");
  scanf("%d", &n);
   int arr[n];
   int *ptr=arr;

getArr(arr,n);

  for(int i=0; i<n; i++){
    if(i == n-1){
        printf("insert the num in last element: \n");
        scanf("%d",&arr[i]);
    }
    else{continue;}
  }
  printf(" the elements are : ");
  for(int i=0; i<n; i++){
    printf(" %d \n " ,arr[i]);
  }
  
    
 return 0;
 }