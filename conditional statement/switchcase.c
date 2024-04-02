#include<stdio.h> 
#include<conio.h>
 int main()
 {
   char ch;
   int a,b,c ;
   printf(" enter the operator: ");
   scanf(" %c", &ch);
   printf(" enter the operands : \n");
   scanf(" %d%d" , &a, &b);

   switch(ch)
   {
    case '+': c=a+b;
         printf(" sum is : %d" , c);
         break;
    case '-' :  c=a-b;
         printf(" difference is : %d", c);
         break;
    case '*' : c=a*b;
         printf(" product is : %d" , c);
         break;
    case '/' : 
    if(b!=0){c=a/b;
         printf(" quotient is : %d" , c);
         break;
    } 
    else{
         printf(" division is not allowed");
    }
     default :
         printf(" not useful command");
   }
 return 0;
 }