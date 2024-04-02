#include<stdio.h>
#include<conio.h>

int main(){
  FILE *ptr;

  ptr = fopen("AddAb.txt","r");
  int a ;
  fscanf(ptr,"%d ",&a);
  int b;
  fscanf(ptr,"%d ",&b);
  fclose(ptr);

  ptr = fopen("AddAb.txt","w");
  int sum = a +b ;
  fprintf(ptr, "%d",sum);
   fclose(ptr);


}