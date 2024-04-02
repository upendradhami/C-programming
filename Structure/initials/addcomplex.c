#include<stdio.h> 
#include<conio.h>
 typedef struct complex{
    int real;
    int img;
 }compl;

 compl add(compl ,compl);
 int main()
 {
    compl c1={23,45};
    compl c2={56,12};
    compl *c3;
    *c3 = add(c1,c2);
    printf(" the sum is : %d and i%d",c3->real, c3->img);
 return 0;
 }

 compl add(compl c1, compl c2){
    compl c;
    c.real =c1.real + c2.real;
    c.img =c1.img + c2.img;
    return c;
 }