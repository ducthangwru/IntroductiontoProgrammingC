#include <stdio.h>

typedef struct
{
    int TuSo;
    int MauSo;
} PhanSo;

void NhapPhanSo(PhanSo ps[], int *pn)
{
    int i;
    for(i = 0; i < *pn; i++)
    {
        printf("Nhap phan so thu %d \n", i+1);
        printf("Nhap tu so: ");
        scanf("%d", &ps[i].TuSo);
        printf("Nhap mau so: ");
        scanf("%d", &ps[i].MauSo);
    }
}

void XuatPhanSo( PhanSo ps[], int n)
{
    int i = 0;
    for(i = 0; i < n; i++)
    {
        printf("Phan so thu %d la: %d/%d \n", i+1, ps[i].TuSo,ps[i].MauSo);
    }
}

void TinhTong(PhanSo ps[], int n)
{
    float s;

    s = (float)(ps[0].TuSo * ps[1].MauSo + ps[1].TuSo * ps[0].MauSo) / (ps[0].MauSo * ps[1].MauSo);

    printf("%f",s);
}

int main()
{
    PhanSo ps[2];
    int n = 2;

    NhapPhanSo(ps, &n);
    XuatPhanSo(ps, n);
    TinhTong(ps, n);

    return 0;
}
