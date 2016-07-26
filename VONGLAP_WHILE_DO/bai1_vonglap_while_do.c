#include<stdio.h>
#include<conio.h>
int main()
{
    int k,a,n;
    do
    {
        printf(" Nhap so n= ");
        scanf("%d",&n);
    }
    while (n<0);

    printf(" So dao la: ");
    while (n!=0)
    {
        k=n%10;
        a=k;
        n=n/10;
        printf("%d",a);
    }

    return 0;
}
