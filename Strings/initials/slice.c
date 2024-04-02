#include<stdio.h> 
#include<conio.h>

char slice(char strn[], int n, int m);
 int main()
 {
    char *strn;
    printf("please enter your name: \n");
    fgets(strn,100,stdin);
    int n=2, m=5;
    slice(strn,n,m);

 return 0;
 }

 char slice(char strn[], int n , int m){
      char str2[500];
      int j=0;
    for (int i=n;  i<=m; i++, j++){
      str2[j]=strn[i];
       }
       str2[j] ='\0';
        puts(str2);
 }