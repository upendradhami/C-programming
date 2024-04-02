#include<stdio.h> 
#include<conio.h>
 int main()
{
  int n; 
   int f=0,s=1;
  printf(" enter the number: \n");
  scanf("%d",&n);
  printf(" the fibonacci series for %d numbers is ", n);

  for(int i=1; i<=n; i++){
      printf("%d",f);
      int t=f+s;
    //   printf("%d",s);
      f=s;
      s=t;
  }

 return 0;
 }