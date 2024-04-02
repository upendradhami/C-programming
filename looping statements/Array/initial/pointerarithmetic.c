#include<stdio.h> 
#include<conio.h>
 int main()
 {
   int a=45, b=34;
   int *ptr , *ptrr;
   ptr=&a;
   ptrr =&b; 
   printf(" %u \n",ptr-ptrr);
   printf("%u \n",ptr == ptrr);
   ptrr = &a;
   printf("%u \n",ptr == ptrr);
    
 return 0;
 }