#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    }
    while(n <= 0 || n >= 31);

    printf("2^%d = %d", n, 1<<n);

    return 0;
}
