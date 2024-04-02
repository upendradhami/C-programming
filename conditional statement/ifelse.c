#include<stdio.h>
#include<conio.h>

int main()
{
    int age;
    printf(" enter your age: \n");
    scanf("%d" , &age);

    if(age <18){
        printf("you are a kid");
    }else{
        printf("you are an adult");
    }
    
    return 0;
}