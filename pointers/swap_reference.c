#include<stdio.h> 
#include<conio.h>

void swap(int* a, int* b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf(" in function, after swaping : %d and %d ,\n",*a,*b);
}
 int main()
 {
  int a,b;
  printf("enter the value of a and b: \n");
  scanf("%d%d",&a,&b);
  printf(" before swaping : %d and %d \n ",a,b);
  swap(&a,&b);
  printf(" in main,, after swaping: %d and %d \n",a,b);
   return 0;
 }