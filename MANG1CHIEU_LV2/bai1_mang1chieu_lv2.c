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
    {
        printf("%d ", a[i]);
    }
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

void SoNguyenToMax(int a[], int n)
{
    int i, max = 1;
    for(i = 0; i < n; i++)
    {
        if(KiemTra(a[i]) == 1 && a[i] > max)
            max = a[i];
    }
    printf("So nguyen to lon nhat la: %d", max);
}

int main()
{
    int a[50], n;

    NhapMang(a, &n);
    XuatMang(a, n);
    SoNguyenToMax(a, n);

    return 0;
}
