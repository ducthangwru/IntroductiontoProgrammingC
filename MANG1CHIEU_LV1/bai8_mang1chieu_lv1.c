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
        printf("%d ", a[i]);
    }
    printf("\n");
}

void KiemTra(int a[], int n)
{
    int i ,x;

    printf("Nhap gia tri x = ");
    scanf("%d",&x);

    for(i = 0; i < n; i++)
    {
        if(x == a[i])
            printf(" %d nam o vi tri thu %d \n",x,i+1);
    }
}

int main()
{
    int a[50], n;

    NhapMang(a, &n);
    XuatMang(a, n);
    KiemTra(a, n);

    return 0;
}
