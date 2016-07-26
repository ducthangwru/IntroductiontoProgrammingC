#include <stdio.h>

void NhapMang(int a[], int *n)
{
    int i;

    printf("Nhap so phan tu: ");
    scanf("%d", n);

    for(i = 0; i < *n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void ChenPhanTu(int a[], int *pn)
{
    int i, k, vt;
    do
    {
    printf("Nhap phan tu can them: ");
    scanf("%d",&k);

    printf("Nhap vi tri can them: ");
    scanf("%d",&vt);
    }
    while(vt < 0 || vt > *pn);

    (*pn)++;
    for(i = *pn ; i > vt; i--)
    {
        a[i] = a[i-1];
    }
    a[vt] = k;
}

int main()
{
    int a[50], n;

    NhapMang(a, &n);
    XuatMang(a, n);
    ChenPhanTu(a, &n);
    XuatMang(a, n);

    return 0;
}
