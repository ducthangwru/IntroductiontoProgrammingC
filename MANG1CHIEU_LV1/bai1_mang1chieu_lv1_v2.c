#include <stdio.h>

void NhapMang (int a[],int *pn)
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
void XuatMang (int a[],int  n)
{
    int i;

    printf("Mang vua nhap la: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}
void TinhTong(int a[], int n)
{
    int i, s = 0;
    for(i = 0; i < n; i++)
    {
        s += a[i];
    }
    printf("Tong cac phan tu = %d",s);
}
int main()
{
    int a[50], n;

    NhapMang(a, &n);
    XuatMang(a, n);
    TinhTong(a, n);

    return 0;
}

