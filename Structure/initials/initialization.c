#include<stdio.h> 
#include<conio.h>

struct student {
    char name[100];
    int roll;
    int marks;
  }s1,s2,s3;

 int main()
 {
    printf("enter the name : \n");
    fgets(s1.name,15,stdin);
    fgets(s2.name,15,stdin);
    fgets(s3.name,15,stdin);

    printf("enter the roll and marks of students: ");
    scanf("%d%d",&s1.roll, &s1.marks);
    scanf("%d%d",&s2.roll,&s2.marks);
    scanf("%d%d",&s3.roll,&s3.marks);

    printf("the name, roll no. and marks of student are : \n");
    printf("-------------------------------------------------\n");
    printf("%s \t %d \t %d \n",s1.name,s1.roll, s1.marks);
    printf("%s \t %d \t %d \n",s2.name,s2.roll, s2.marks);
    printf("%s \t %d \t %d \n",s3.name,s3.roll, s3.marks);

    return 0;
 }