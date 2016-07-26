#include <stdio.h>
#include <math.h>

typedef struct
{
    int x, y; //x là hoành độ, y là tung độ
} ToaDo;

typedef struct
{
    ToaDo A,B,C;
    float AB, AC, BC; //Cạnh tam giác
} TamGiac;

void NhapToaDo(ToaDo *ptd)
{
    printf("Nhap hoanh do x: ");
    scanf("%d", &(*ptd).x);

    printf("Nhap tung do y: ");
    scanf("%d", &(*ptd).y);
}

void XuatToaDo(ToaDo td)
{
    printf("(%d , %d)", td.x, td.y);

}

void NhapDiem(TamGiac *ptg)
{
    printf("Nhap diem A \n");
    NhapToaDo(&(*ptg).A);

    printf("Nhap diem B \n");
    NhapToaDo(&(*ptg).B);

    printf("Nhap diem C \n");
    NhapToaDo(&(*ptg).C);
}

void XuatDiem(TamGiac tg)
{
    printf("\n Toa do diem A la: ");
    XuatToaDo(tg.A);

    printf("\n Toa do diem B la: ");
    XuatToaDo(tg.B);

    printf("\n Toa do diem C la: ");
    XuatToaDo(tg.C);
}

double TinhCanh(ToaDo D1, ToaDo D2)
{
    return sqrt(pow((D2.x-D1.x),2)+pow((D2.y-D1.y),2));
}

void TinhChuVi(TamGiac tg)
{
    tg.AB = TinhCanh(tg.A, tg.B);
    tg.AC = TinhCanh(tg.A, tg.C);
    tg.BC = TinhCanh(tg.B, tg.C);

    float s = tg.AB + tg.AC + tg.BC;
    printf(" \n Chu vi tam giac = %f", s);
}

int main()
{
    TamGiac tg;

    NhapDiem(&tg);
    XuatDiem(tg);
    TinhChuVi(tg);

    return 0;
}
