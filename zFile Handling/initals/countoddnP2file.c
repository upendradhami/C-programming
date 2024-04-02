#include<stdio.h>
#include<conio.h>

int main(){
    FILE *ptr;
    int n;
    printf("EnTER the value of n upto which you want to enter the numbers: ");
    scanf("%d",&n);

    int num[n];
    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d \t",num[i]);
    }
    
    ptr= fopen("odd.txt","w");
    for(int i=0; i<n; i++){
        if(num[i]%2 !=0){
            fprintf(ptr,"%d \t",num[i]); // use fprintf for writing into a file.
        } else{continue;}
    }

}