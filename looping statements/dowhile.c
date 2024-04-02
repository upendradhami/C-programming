#include<stdio.h> 
#include<conio.h>
 int main()
 {
    int n;
    int i=1;
    printf(" enter any numbers: \n");
    // we have to print the numbers untill it is an odd number
  
   /*do
   {
    if(n%2 == 1){break;}
    else {scanf("%d",&n);}
    i++;
   } while (i<=10);
   */

  do
  {
   scanf("%d \n",&n);
   if(n%2 !=0)
   {break;} 
    } while (1);
  
   printf("you cannot take numbers now");
    
 return 0;
 }