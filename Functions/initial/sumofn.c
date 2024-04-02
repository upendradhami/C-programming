#include<stdio.h> 
#include<conio.h>

natural(int n){
    if(n == 1){
        return 1;
    }
    int sumn1 = natural(n-1);
    int sumn = sumn1 +n;
    return sumn;
}
 int main()
 {
  int n, sum=0;
  printf(" enter the number ");
  scanf("%d",&n);
//   for(int i=0; i<=n; i++)
//   {
//     sum = sum +i;
//   }
//     printf(" the sum of %d natural number is : %d ", n, sum);

// using recursion function 

     printf(" the sum of %d natural number is : %d " ,n, natural(n) );
 return 0;
 }