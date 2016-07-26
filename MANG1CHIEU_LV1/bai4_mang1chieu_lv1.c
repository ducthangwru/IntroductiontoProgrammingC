#include <stdio.h>
#include <math.h>

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

void XuatMang(int a[],int n)
{
    int i;

    printf("Mang vua nhap la: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int SoNguyenTo(int n)
{
    int i;

    if (n < 2)
        return 0;
    else
        for(i = 2; i <= sqrt(n); i++)
            if(n%i == 0)
                return 0;
    return 1;
}

void Dem(int a[], int n)
{
    int i, dem = 0;

    for(i = 0; i < n; i++)
        if (SoNguyenTo(a[i]) == 1)
            dem++;

    printf("So phan tu la so nguyen to la: %d",dem);
}

int main()
{
    int a[50], n;

    NhapMang(a, &n);
    XuatMang(a, n);
    Dem(a, n);

    return 0;
}
