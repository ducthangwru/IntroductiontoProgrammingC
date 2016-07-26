#include <stdio.h>

void NhapMang(int a[][100], int *pm, int *pn)
{
    int i, j;

    printf("Nhap so hang m = ");
    scanf("%d", pm);

    printf("Nhap so cot n = ");
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

void TinhTong(int a[][100], int m, int n)
{
    int i, j, s = 0;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            s += a[i][j];
    }

    printf("Tong cac phan tu la: %d", s);
}

int main()
{
    int a[100][100], m, n;

    NhapMang(a, &m, &n);
    XuatMang(a, m, n);
    TinhTong(a, m, n);

    return 0;
}
