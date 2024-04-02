#include<stdio.h> 
#include<conio.h>
typedef struct vector{
    int x;
    int y;
}vec ;

vec add(vec ,vec );
 int main()
 { vec v1,v2;
    printf("enter two vectors : ");
    scanf("%d%d",&v1.x, &v1.y);
    scanf("%d%d",&v2.x, &v2.y);
     vec v3 = add(v1,v2);
    printf("the sum of the two vectors is : %d x + %d y",v3.x,v3.y);
 return 0;
 }

 vec add( vec v1, vec v2){
    vec v3;
    v3.x=v1.x+v2.x;
    v3.y=v1.y+v2.y;
    return v3;
 }