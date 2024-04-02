#include<stdio.h> 
#include<conio.h>
 
 struct student
 {
    char name[100];
    int roll;
    float marks;
 };
 
 int main()
 { struct student s1,s2,s3;
    printf("enter the name of students: \n");
    fgets(s1.name,100,stdin);
    fgets(s2.name,100,stdin);
    fgets(s3.name,100,stdin);

    printf("enter the roll no. \n");
    scanf("%d",&s1.roll);
    scanf("%d",&s2.roll);   
    scanf("%d",&s3.roll);

    printf("enter marks: \n");
    scanf("%f",&s1.marks);
    scanf("%f",&s2.marks);
    scanf("%f",&s3.marks);

    printf(" the name roll and  marks of the students are : \n");
  
    printf("%s \t %d \t %f  \n",s1.name,s1.roll,s1.marks);
    printf("%s \t %d \t %f  \n",s2.name,s2.roll,s2.marks);
    printf("%s \t %d \t %f  \n",s3.name,s3.roll,s3.marks);
  
 return 0;
 }