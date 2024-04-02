#include<stdio.h> 
#include<conio.h>
#include<math.h>

float square(float a);
float rectangle(float a,float b);
float circle(float rad);

 int main()
 {
  float a,b,c,r;
  printf(" enter the sides of rectangles: \n");
  scanf("%f%f",&a,&b);
  printf("area of rectangele is: %f \n ",rectangle(a,b));

  printf(" enter the sides of square: \n");
  scanf("%f",&c);
  printf("area of square is: %f \n ",square(c));

  printf(" enter the sides of circle: \n");
  scanf("%f",&r);
  printf("area of circle is: %f \n ",circle(r));
    
 return 0;
 }

 float rectangle(float a, float b){
    return a*b;
 }

 float square(float c){
    return (pow(c,2));
 }

 float circle(float r){
    return (3.14 *(pow(r,2)));
 }