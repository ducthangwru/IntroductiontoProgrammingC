#include <stdio.h>

void NhapMang(int a[], int *n)
{
    int i;

    printf("Nhap so phan tu: ");
    scanf("%d", n);

    for(i = 0; i < *n; i++)
    {
        printf("a[%d] = ", i+1);
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

void ChenPhanTu(int a[], int n)
{
    int i, k, vt;
    do
    {
    printf("Nhap phan tu can them: ");
    scanf("%d",&k);

    printf("Nhap vi tri can them: ");
    scanf("%d",&vt);
    }
    while(k < 0 || vt < 0 || vt > n);

    for(i = n ; i > vt - 1; i--)
    {
        a[vt-1] = k;
        a[i] = a[i-1];
    }
}

int main()
{
    int a[50], n;

    NhapMang(a, &n);
    XuatMang(a, n);
    ChenPhanTu(a,n);
    XuatMang(a,n+1);

    return 0;
}
