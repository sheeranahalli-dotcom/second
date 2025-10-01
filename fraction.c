#include<stdio.h>

struct fraction
{
    int num;
    int den;
};

void product(struct fraction n1,struct fraction n2,struct fraction *n3){
    n3->num = n1.num * n2.num;
    n3->den = n1.den * n2.den;
}

int main(){
    struct fraction n1, n2, n3;
    printf("Enter numerater and denominator of first number \n");
    scanf("%d%d",&n1.num, &n1.den);
       printf("Enter numerater and denominator of second number \n");
    scanf("%d%d",&n2.num, &n2.den);
 
    product(n1, n2, &n3);

    printf("n1 = %d/%d \nn2 = %d/%d\nn3 = %d/%d",n1.num,n1.den,n2.num,n2.den,n3.num,n3.den);


}