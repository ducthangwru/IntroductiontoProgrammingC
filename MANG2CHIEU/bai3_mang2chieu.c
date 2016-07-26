#include <stdio.h>

void NhapMang(int a[][100], int *pm, int *pn)
{
    int i, j;

    printf("Nhap so hang: ");
    scanf("%d", pm);

    printf("Nhap so cot: ");
    scanf("%d", pn);

    for(i = 0; i < *pm; i++)
        for(j = 0; j < *pn; j++)
        {
            printf("a[%d][%d] = ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
}

void XuatMang(int a[][100], int m, int n)
{
    int i, j;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%5d", a[i][j]);

        printf("\n");
    }
}

void TimMax(int a[][100], int m, int n)
{
    int i, j, max = a[0][0];

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
        {
            if(a[i][j] > max)
                max = a[i][j];
        }

    printf("\n Gia tri MAX = %d", max);
}

int main()
{
    int a[100][100], m, n;

    NhapMang(a, &m, &n);
    XuatMang(a, m, n);
    TimMax(a, m, n);

    return 0;

}
