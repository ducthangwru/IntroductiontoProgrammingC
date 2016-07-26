#include <stdio.h>
#include <math.h>

void NhapMang(int a[], int *pn)
{
    int i;

    printf("Nhap so phan tu: ");
    scanf("%d", pn);

    for(i = 0; i < *pn; i++)
    {
        printf("a[%d] = ", i+1);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

int KiemTra(int n)
{
    int i;

    if(n < 2)
        return 0;
    else
        for(i = 2; i <= sqrt(n); i++)
            if(n%i == 0)
                return 0;
    return 1;
}

void TachMang(int a[], int n, int b[], int *m)
{
    int i;
    *m = 0;

    for(i = 0; i < n; i++)
        if(KiemTra(a[i]) == 1)
        {
            b[*m] = a[i];
            (*m)++;
        }
}

int main()
{
    int a[50], n, m, b[50];

    NhapMang(a,&n);
    XuatMang(a, n);
    TachMang(a, n, b, &m);
    XuatMang(b, m);

    return 0;
}
