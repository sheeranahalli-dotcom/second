#include<stdio.h>
struct student
{
    int id;
    char name[20];
    float marks;
    
};

int main(){
    struct student s1, *p;
    p=&s1;
    printf("Enter the student's details \n ");
    scanf("%d%s%f",&s1.id,s1.name,&s1.marks);
    printf("ID is %d and Name is %s and Marks is %f", p->id, p->name, p->marks);

return 0;
}