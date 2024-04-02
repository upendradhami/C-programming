#include<stdio.h> 
#include<conio.h>

void findtemp(int temp)
{
  if(temp<45 && temp>18){
    printf("normal temperature \n");
  }else if(temp<18){
    printf("cold temperature \n");
  }else{
    printf("hot temperature \n");
  }
}

 int main()
 {
   int temp;
   while(temp %2!=1){
    printf("enter the temperature: \n");
   scanf("%d",&temp);
   findtemp(temp);
   } 
 return 0;
 }