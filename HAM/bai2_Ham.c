#include <stdio.h>

float tinh(int n)
{
    float s = 0;
    int i;
    for(i = 2; i <= n; i++)
        s += (float)1/i;

    return s;
}
int main()
{
    int n;
    printf(" Nhap n = ");
    scanf("%d",&n);

    printf("Tong S(%d) = %.5f",n,tinh(n));

    return 0;
}
