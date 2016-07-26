#include <stdio.h>

void NhapMang (int a[],int *n)
{
    int i;

    printf("Nhap so phan tu: ");
    scanf("%d",n);

    for(i = 0; i < *n; i++)
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

void TimMax(int a[], int n)
{
    int i, max = a[0];
    for(i = 0; i < n; i++)
        if (a[i] > max)
            max = a[i];

    printf("Gia tri lon nhat la: %d",max);
}

int main()
{
    int a[100], n;

    NhapMang(a, &n);
    XuatMang(a,  n);
    TimMax(a, n);

    return 0;
}
