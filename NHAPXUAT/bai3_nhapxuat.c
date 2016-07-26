#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a,b;
    printf(" Nhap a= ");
    scanf("%d",&a);
    printf(" Nhap b= ");
    scanf("%d",&b);
    int tam = a;
    a = b;
    b = tam;
    printf(" a= %d , b= %d \n",a,b);
    return 0;
}
