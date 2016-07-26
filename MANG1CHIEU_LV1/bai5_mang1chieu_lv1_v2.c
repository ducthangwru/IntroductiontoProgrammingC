#include <stdio.h>

void NhapMang(int a[], int *pn)
{
    int i;
    do
    {
        printf("Nhap so phan tu: ");
        scanf("%d", pn);
    }
    while(*pn < 0);

    for(i = 0; i < *pn; i++)
    {
        printf("a[%d] = ",i);
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

void XoaPhanTu(int a[], int *pn)
{
    int i, k;
    do
    {
        printf("Nhap vi tri can xoa: ");
        scanf("%d", &k);
    }
    while(k < 0 || k >= *pn);

    for(i = k; i < *pn; i++)
    {
        a[i] = a[i+1];
    }
    (*pn)--;
}

int main()
{
    int a[50], n;

    NhapMang(a,&n);
    XuatMang(a,n);
    XoaPhanTu(a, &n);
    XuatMang(a,n);

    return 0;
}
