#include<stdio.h> 
#include<conio.h>

  int sumdig(int n);
 int main()
 {
    int n;
    printf(" enter the number: \n");
    scanf("%d",&n);

    int sum = sumdig(n);
    printf(" the sum of digits is : %d", sum);
     return 0;
 }

 int sumdig(int n){
  //   int s,g=0;
  //   for(int i=0; i<sizeof(n); i++){
  //   s=n%10;
  //   g=g+s;
  //   n=n/10;
  // }
  //    return g;


  // using recursive function

    if(n ==0 ){
      return 0;
    }else {
      return (n%10 + sumdig(n/10));
    }
  }
  