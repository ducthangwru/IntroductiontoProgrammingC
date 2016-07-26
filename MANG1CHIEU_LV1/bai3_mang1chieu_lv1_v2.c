#include <stdio.h>

void NhapMang(int a[], int *pn)
{
    int i;

    printf("Nhap so phan tu: ");
    scanf("%d",pn);

    for(i = 0; i < *pn; i++)
    {
        printf("a[%d] = ",i+1);
        scanf("%d",&a[i]);
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

void DaoMang (int a[], int n)
{
    int i, tam;
    for(i =0; i < n/2; i++)
    {
        tam = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = tam;
    }
}

int main()
{
    int a[50], n;

    NhapMang(a,&n);
    XuatMang(a, n);
    DaoMang(a, n);
    XuatMang(a, n);

    return 0;
}
