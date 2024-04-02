#include<stdio.h> 
#include<stdlib.h>

 int main()
 {
   int *ptr;
   ptr = (int *)calloc(5,sizeof(int));
   for(int i=0; i<5; i++){
    scanf("%d ", &ptr[i]);

   }

   printf("the numbers are : \n");
   for(int i=0; i<5; i++){
    printf("%d \n", ptr[i]);
   }

   free(ptr);
   printf("pointer is now free u can reuse it \n now again initializing numbers we get \n");
  
    ptr=(int *) calloc (3,sizeof(int ));
    ptr[0] = 1;
    ptr[1] = 23;
    ptr[2] = 56;

    for(int i=0; i<3; i++){
        printf("%d \n",ptr[i]);
    }

    free(ptr);
 return 0;
 }