#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,s=0;
    printf(" Nhap n= ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        s+=i;

    printf(" Tong tu 1 den %d la: %d",n,s);
    return 0;
}
