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
        printf("%d ", a[i]);

    printf("\n");
}

void XoayMang(int a[], int n)
{
    int i, x ,tam;
    x = a[0];
    a[0] = a[n-1];
    for(i = 1; i < n; i++)
    {
        tam = x;
        x =  a[i];
        a[i] = tam;
    }
}

int main()
{
    int a[50], n;

    NhapMang(a, &n);
    XuatMang(a,n);
    XoayMang(a,n);
    XuatMang(a,n);

    return 0;
}
