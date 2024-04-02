#include<stdio.h> 
#include<conio.h>
 void countvowel(char str[]);

 int main()
 {
     char *str;
     printf("enter the word: \n");
     fgets(str, 100, stdin);

     countvowel(str);

 return 0;
 }

 void countvowel(char str[]){
    int count =0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'){
            printf("%c\t",str[i]);
            count ++;
        }else{continue;}
    }
    printf(" \n your total vowels in string is : %d",count);
 }