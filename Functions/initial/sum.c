#include<stdio.h> 
#include<conio.h>
 
 int sum(int a, int b)
 {
    return (a+b);
 }
 int main()

 {
    int a, b;
    printf(" enter any two numbers : \n");
    scanf("%d%d", &a, &b);
    
    printf(" the sum is : %d", sum(a,b));
    
 return 0;
 }