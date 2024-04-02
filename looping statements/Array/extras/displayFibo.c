#include<stdio.h>
#include<conio.h>

void calFib(int fib[], int n);
void printarr(int fib[], int n);

int main()
{
    int n;
    printf(" enter n : \n");
    scanf("%d",&n);
    
     int fib[n];
     fib[0]=0;
     fib[1]=1;
     calFib(fib,n);
     printarr(fib, n);
     return 0;
}

void calFib(int fib[], int n){
    for(int i=2; i<n; i++){
        fib[i]=fib[i-1]+fib[i-2];
    }}

void printarr(int fib[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d \n", fib[i]);
    }
}