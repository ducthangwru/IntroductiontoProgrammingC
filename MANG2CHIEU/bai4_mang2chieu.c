#include <stdio.h>

int main()
{
    int a[100][100], h, i, j;

    printf("Nhap chieu cao h = ");
    scanf("%d", &h);

    for(i = 2; i < h; i++)
    {
        for(j = 0; j <= i; j++)
        {
            a[0][0] = 1;
            a[1][0] = 1;
            a[1][1] = 1;
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }

    for(i = 0; i < h; i++)
    {
        for(j = 0; j <= i; j++)
            printf("%5d", a[i][j]);

        printf("\n");
    }

    return 0;
}
