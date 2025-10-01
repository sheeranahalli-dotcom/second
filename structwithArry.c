#include<stdio.h>
struct student
{
    int id;
    char name[20];
    float marks;
    
};

int main(){
    struct student s[5], *p=s;
    printf("enter the number of student : ");
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        printf("Enter the details student %d : \n ",i+1);
        scanf("%d%s%f",&p[i].id,p[i].name,&p[i].marks);

    }
    printf("Details of the student are.....\n");
    printf("ID\tName\tMarks\n");
    for (int i=0; i<n; i++){
        printf("%d\t%s\t%f\n", p[i].id, p[i].name, p[i].marks);
    }

return 0;
}