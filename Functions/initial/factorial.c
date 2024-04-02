#include<stdio.h> 
#include<conio.h>
 int main()
 {
   int n,fact=1;
   printf( " enter any number : \n ");
   scanf("%d",&n);
    for(int i=1; i<=n; i++){
         fact = fact *i;
    } 
    printf(" the factorial of number %d is: %d", n, fact);
 return 0;
 }