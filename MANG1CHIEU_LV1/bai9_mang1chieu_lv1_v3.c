#include <stdio.h>
#include <math.h>

void NhapMang(int a[], int *pn)
{
    int i;

    printf("Nhap so phan tu: ");
    scanf("%d", pn);

    for(i = 0; i < *pn; i++)
    {
        printf("a[%d]  = ", i+1);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        printf("%d ",a[i]);

    printf("\n");
}

int SoNguyenTo(int n)
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

void XoaSoNguyenTo(int a[], int *pn)
{
    int i, j;

    for(i = 0; i < *pn; i++)
    {
        if(SoNguyenTo(a[i]) == 1)
        {
            for(j = i; j < *pn; j++)
                a[j] = a[j+1];

            (*pn)--;
            break;
        }
    }
}

int main()
{
    int a[50], n;

    NhapMang(a, &n);
    XuatMang(a,n);
    XoaSoNguyenTo(a,&n);
    XuatMang(a, n);

    return 0;
}
