#include <stdio.h>
#include <string.h>

typedef struct
{
    char HoTen[51];
    char NamSinh[5];
    char Lop[10];
    float Dtb;

} HocSinh;

typedef struct
{
    HocSinh a[100];
    int n;
} dshs;

void NhapThongTin(HocSinh *phs)
{
    printf("Ho Ten: ");
    fflush(stdin);
    gets((*phs).HoTen);

    printf("Nam Sinh: ");
    gets((*phs).NamSinh);

    printf("Lop: ");
    gets((*phs).Lop);

    printf("Diem TB: ");
    scanf("%f", &(*phs).Dtb);
}

void XuatThongTin(HocSinh hs)
{
    printf("\nHo Ten: %s \n", hs.HoTen);
    printf("Nam Sinh: %s \n", hs.NamSinh);
    printf("Lop: %s \n", hs.Lop);
    printf("Diem TB: %f \n", hs.Dtb);
}

void NhapDshs(dshs *pds)
{
    int i;

    printf("Nhap so luong hoc sinh: ");
    scanf("%d", &(*pds).n);

    for(i = 0; i < (*pds).n; i++)
    {
        printf("Nhap hoc sinh thu %d \n", i+1);
        NhapThongTin(&(*pds).a[i]);
    }
}

void XuatDshs(dshs ds)
{
    int i;

    printf("\n------Thong Tin Hoc Sinh-------- \n");

    for(i = 0; i < ds.n; i++)
    {
        printf("Thong tin hoc sinh thu %d", i+1);
        XuatThongTin(ds.a[i]);
    }
}

void TimMax(dshs ds)
{
    int i, stt = 0;
    float max = ds.a[0].Dtb;

    for(i = 1; i < ds.n; i++)
    {
        if(ds.a[i].Dtb > max)
            stt = i;
    }

    printf("Thong tin hoc sinh co diem trung binh cao nhat \n");
    XuatThongTin(ds.a[stt]);
}
int main()
{
    dshs ds;

    NhapDshs(&ds);
    XuatDshs(ds);
    TimMax(ds);

    return 0;
}
