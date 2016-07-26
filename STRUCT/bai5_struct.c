#include <stdio.h>
#include <math.h>

typedef struct
{
    int x, y; //x là hoàng độ, y là tung độ
} ToaDo;

typedef struct
{
   ToaDo a[1];
} Diem;

typedef struct
{
    Diem b[4];
} DoanThang;

void NhapToaDo(ToaDo *ptd)
{
    printf("x: ");
    scanf("%d", &(*ptd).x);

    printf("y: ");
    scanf("%d", &(*ptd).y);
}

void NhapDiem(Diem *pd)
{
    int i;


    for(i = 0; i <= 1; i++)
    {
        printf("Nhap diem thu %d \n", i+1);
        NhapToaDo(&(*pd).a[i]);
    }
}

void NhapDoanThang(DoanThang *pdt)
{
    int i;

    for(i = 0; i < 4; i++)
    {
        printf("Nhap doan thang thu %d \n", i+1);
        NhapDiem(&(*pdt).b[i]);
    }
}

float TinhDoanThang(Diem d)
{
    return sqrt(pow((d.a[1].x-d.a[0].x),2)+pow((d.a[1].y-d.a[0].y),2));
}

void DoanThangMax(DoanThang dt)
{
    int i, s = 0;
    float max = TinhDoanThang(dt.b[0]);

    for(i = 1; i < 4; i++)
    {
        if(TinhDoanThang(dt.b[i]) > max)
        {
            max = TinhDoanThang(dt.b[i]);
            s = i;
        }
    }

    printf("Doan thang thu %d co do dai lon nhat la: %f", s+1, max);
}

int main()
{
    DoanThang dt;
    NhapDoanThang(&dt);
    DoanThangMax(dt);

    return 0;
}
