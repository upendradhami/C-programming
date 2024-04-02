#include<stdio.h> 
#include<stdlib.h>

 int main()
 { float *ptr;
   int i;
   ptr = (float *)malloc( 5 *sizeof(float));
   printf("enter the price of any five elements : \n");
   for ( i=0; i<5; i++){
    scanf("%f",&ptr[i]);
   }
   printf("the price enlisted are as: \n");
   for (i=0; i<5; i++){
    printf("%f \n",ptr[i]);
   }
 
 return 0;
 }