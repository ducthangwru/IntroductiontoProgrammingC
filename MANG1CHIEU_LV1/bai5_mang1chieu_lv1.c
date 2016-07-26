#include <stdio.h>

void NhapMang(int a[], int *n)
{
    int i;
    do
    {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    }
    while(n < 0);

    for(i = 0; i < *n; i++)
    {
        printf("a[%d] = ",i+1);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void XoaPhanTu(int a[], int n)
{
    int i, k;
    do
    {
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &k);
    }
    while(k < 0 || k > n);

    for(i = k-1; i < n; i++)
        a[i] = a[i+1];
}

int main()
{
    int a[50], n;

    NhapMang(a,&n);
    XuatMang(a,n);
    XoaPhanTu(a,n);
    XuatMang(a,n-1);

    return 0;
}
