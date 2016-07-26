#include<stdio.h>

int main()
{
    int n,i = 1,s = 0;
    printf(" Nhap n = ");
    scanf("%d",&n);

    while(i <= n)
    {
        s+=i;
        i++;
    }
    printf("Tong S = %d",s);

    return 0;
}
