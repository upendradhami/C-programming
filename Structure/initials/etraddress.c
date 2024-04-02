#include<stdio.h> 
#include<conio.h>

typedef struct address{
    int houseno;
    int block;
    char village[23];
    char district[25];
   } addr;

void printaddress( addr );
 int main()
 {
    addr p1[5];
    scanf("%d%d%s%s",&p1[0].houseno,&p1[0].block,&p1[0].village,&p1[0].district);
    scanf("%d%d%s%s",&p1[1].houseno,&p1[1].block,&p1[1].village,&p1[1].district);
    scanf("%d%d%s%s",&p1[2].houseno,&p1[2].block,&p1[2].village,&p1[2].district);
    scanf("%d%d%s%s",&p1[3].houseno,&p1[3].block,&p1[3].village,&p1[3].district);

    printaddress(p1[0]);
    printaddress(p1[1]);
    printaddress(p1[2]);
    printaddress(p1[3]);
 return 0;
 }

 void printaddress(addr p1){
        printf("your address is : %d %d , %s and %s  \n",p1.houseno, p1.block, p1.village, p1.district);
 }