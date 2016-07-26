#include<stdio.h>
#include<stdlib.h>
int main()
{
    float toan,anh,van,tb;
    printf("Nhap lan luot diem Toan,Anh,Van: ");
    scanf("%f %f %f",&toan,&anh,&van);
    tb = (toan+anh+van)/3;
    if (tb >= 8.5) printf(" Loai Gioi");
    else if(tb >= 6.5) printf(" Loai Kha");
    else if(tb >= 5) printf(" Loai Trung Binh");
    else printf(" Loai Yeu ");
    return 0;
}
