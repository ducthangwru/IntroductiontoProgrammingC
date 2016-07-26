#include <stdio.h>
#include <string.h>

typedef struct
{
    char HoTen[51];
    char NamSinh[5];
    char Lop[10];
    float Dtb;
} HocSinh;

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
    printf("\n \n \nHo Ten: %s \n", hs.HoTen);
    printf("Nam Sinh: %s \n", hs.NamSinh);
    printf("Lop: %s \n", hs.Lop);
    printf("Diem TB: %f \n", hs.Dtb);
}

int main()
{
    HocSinh hs;

    NhapThongTin(&hs);
    XuatThongTin(hs);

    return 0;
}
