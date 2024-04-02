#include<stdio.h> 
#include<conio.h>

 void table(int arr [][10] , int n , int m);
void printtab(int arr[][10],int n, int m);
 int main()
 {
   int n;
   printf("enter n:");
   scanf("%d",&n);
   int arr[n][10];
   table(arr,n,10);
   printtab(arr, n, 10);
   return 0;
 }
 
void printtab(int arr[][10],int n, int m)
{
    for(int i=0; i<n; i++){
     for(int j=0; j<m; j++)  
    {
        printf("%d \t", arr[i][j]);
    }
    printf("\n");
    }
    
}

void table(int arr [][10] , int n , int m){

    for(int i=0; i<n; i++){
     for(int j=0; j<m; j++)
    {
       arr[i][j] = (i+1)*(j+1);
    }
    }
    
}
