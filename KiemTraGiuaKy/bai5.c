#include <stdio.h>

int main()
{
    int n, sodau, sodao, sodonvi;

    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    }
    while (n <= 0);

    sodau = n;
    sodao = 0;

    while (sodau > 0)
    {
        sodonvi = sodau % 10;
        sodao = sodao*10 + sodonvi;
        sodau = sodau / 10;
    }

    if (sodao == n)
        printf("%d la so doi xung\n", n);
    else
        printf("%d khong la so doi xung\n", n);

   return 0;
}

