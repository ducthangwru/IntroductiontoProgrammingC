#include<stdio.h>
#include<stdlib.h>
int main()
{
    float x,y,F;
    printf("Nhap lan luot x,y: ");
    scanf("%f %f",&x,&y);
    F= 5*x - 7*y + 0.5;
    printf(" Gia tri cua bieu thuc la: %.2f",F);
    return 0;
}
