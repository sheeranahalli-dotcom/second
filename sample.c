#include<stdio.h>
struct student
{
    int roll ;
    int percentage;
    char name[20];
};

int main(){
    struct student s1, *p;
    p=&s1;
    printf("Enter the student's details \n ");
    scanf("%d%s%d",&s1.roll,s1.name,&s1.percentage);
    printf("Roll is %d and Name is %s and Percentage is %d", p->roll, p->name, p->percentage);
    return 0;
}