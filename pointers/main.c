#include<stdio.h> 
#include<conio.h>
 int main()
 {
    int age=65;
    int *ptr= &age;
    printf(" %d \n",age);
    printf("%d \n",*ptr);
    printf("%d \n",ptr);
    printf("%d \n",&ptr);
    

    // pointer to pointer concept
    int **ptrr = &ptr; // ptr points addres of age and **ptrr points the value to &age i.e 65
    printf("%d \n ",**ptrr);
    printf("%d",&age);
 return 0;
 }