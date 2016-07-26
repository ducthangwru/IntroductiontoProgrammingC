#include <stdio.h>

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

void KiemTra(int a[], int n)
{
    int i , x, b = 0;

    printf("Nhap gia tri x = ");
    scanf("%d",&x);

    for(i = 0; i < n; i++)
    {
        if(x == a[i])
            {
                printf("%d nam o vi tri: %d /n", x, i+1);
                b = 1;
            }
    }

    if(b == 0)
        printf("%d khong co trong mang",x);
}

int main()
{
    int a[50], n;

    NhapMang(a, &n);
    XuatMang(a, n);
    KiemTra(a, n);

    return 0;
}
