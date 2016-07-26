#include <stdio.h>

void NhapMang(int a[], int *pn)
{
    int i;

    printf("Nhap so phan tu: ");
    scanf("%d", pn);

    for(i = 0; i < *pn; i++)
    {
        printf("a[%d] = ", i);
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

void SapXep(int a[], int n)
{
    int i, tam, j;

    for(i = 0; i < n - 1; i++)
        for(j = i ; j < n; j++)
        {
            if(a[i] < a[j] && i%2 != 0 && j%2 != 0)
            {
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
}

int main()
{
    int a[50], n;

    NhapMang(a, &n);
    XuatMang(a, n);
    SapXep(a, n);
    XuatMang(a, n);

    return 0;
}
