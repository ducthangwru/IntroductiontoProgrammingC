#include <stdio.h>
#include <stdlib.h>

int HamMu (int x, int n)
{
    return pow(x,n);
}

int main()
{
    int x, n;
    printf(" Nhap gia tri x = ");
    scanf("%d",&x);

    printf(" Nhap gia tri n = ");
    scanf("%d",&n);

    printf(" %d^%d = %d",x,n,HamMu(x,n));

    return 0;
}
