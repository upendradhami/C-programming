#include<stdio.h> 
#include<conio.h>
 int main()
 {
    char name[100];
    printf("your first name: \n");
    scanf("%s",name);
    int count =0;
    // int i;
    // while(name[i]!='\0'){
    //     count ++;
    //     i++;
    // }
      for(int i=0; name[i] !='\0'; i++)
      {
        count ++;
      }  
        printf("your string is of length : %d \n" , count);


    
 return 0;
 }