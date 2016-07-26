#include <stdio.h>

void NhapMang(int a[], int *pn)
{
    int i;
    do
    {
        printf("Nhap so phan tu: ");
        scanf("%d", pn);
    }
    while (*pn < 2);

    for(i = 0; i < *pn; i++)
    {
        printf("a[%d] = ",i+1);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n)
{
    int i;

    for(i= 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

void TachMang(int a[], int b[], int c[], int n, int *pm, int *pk)
{
    int i, x;
    *pm = 0;
    *pk = 0;

    do
    {
        printf("Nhap vi tri: ");
        scanf("%d", &x);
    }
    while(x < 0 || x > n);

    for(i = 0; i < n; i++)
    {
        if(i < x)
        {
            b[*pm] = a[i];
            (*pm)++;
        }
        else
        {
            c[*pk] = a[i];
            (*pk)++;
        }
    }
}

int main()
{
    int a[50], b[50], c[50], n, m, k;

    NhapMang(a, &n);
    XuatMang(a, n);
    TachMang(a, b, c, n, &m, &k);
    XuatMang(b, m);
    XuatMang(c, k);

    return 0;
}
