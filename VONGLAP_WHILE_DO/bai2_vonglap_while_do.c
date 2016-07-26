#include <stdio.h>

int main()
{
    int n, sobd, sodao, sodonvi;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    }
    while (n<=0);

    sobd = n;
    sodao = 0;

    while (sobd > 0)
    {
        sodonvi = sobd % 10;
        sodao = sodao*10 + sodonvi;
        sobd = sobd / 10;
    }

    if (sodao == n)
        printf("%d la so doi xung\n", n);
    else
        printf("%d khong la so doi xung\n", n);

   return 0;
}
