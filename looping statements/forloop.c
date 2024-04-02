#include<stdio.h> 
#include<conio.h>
 int main()
 {
  //to print the sum of n natural numbers
  int n;
  int sum = 0;
  printf("give the no.s upto which you want the sum :\n");
  scanf("%d",&n);

  for(int i=0,j=n; i<=n && j>=0; i++,j--)
 {
    sum = sum +i;
    printf("%d\n", j);
 }
 printf("the sum is : %d \n", sum);
    
//     for(int j=n; j>=0; j--)
//  {
//     printf(" %d",j);
//  }
 return 0;
 }