#include<stdio.h> 
#include<conio.h>
 int main()
 {
   int a,b;
   int *ptr= &a;
   int *btr= &b;
   printf("enter the value of a and b: \n");
   scanf("%d%d",&a,&b);
    if(*ptr > *btr)
    {
        printf("large num is %d \n ",*ptr);
    }else{
        printf("larger num is %d", *btr);
    }
    
 return 0;
 }