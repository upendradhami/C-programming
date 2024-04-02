#include<stdio.h> 
#include<stdlib.h>

 int main()
 {
    int n;
    printf("enter the value of size you want to allocate the memory : \n");
    scanf("%d",&n);

    float *ptr;
    ptr= (float *) calloc(n,sizeof(float));

    printf("initially the values are : \n");
    for(int i=0; i<n; i++){
        printf("%f\n ", ptr[i]);
    }

    printf("enter the numbers here : \n");    
    for(int i=0; i<n; i++){
        scanf("%f ", &ptr[i]);
    }


     printf("after initializing them,  the values are : \n");
    for(int i=0; i<n; i++){
        printf("%f\n ", ptr[i]);
    }
 return 0;
 }