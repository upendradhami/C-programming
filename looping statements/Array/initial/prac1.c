#include<stdio.h> 
#include<conio.h>
 int main()
 {
   int price[3];
   int i=0;
   printf("enter the price of 3 items \n");
   while (i!=3){
    scanf("%d",&price[i]);
    i++;
   }
   int j=0;
    while (j !=3){
    float gst =  price[j] + (.18*price[j] );
    printf(" final price :%f\n", gst);
    j++;
   }
    
 return 0;
 }