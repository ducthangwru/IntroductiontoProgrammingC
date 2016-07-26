#include <stdio.h>
#include <stdlib.h>

int HamMu (int x, int n)
{
    int i, s = 1;
    for(i = 1; i <= n; i++)
        s *= x;
    return s;
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
