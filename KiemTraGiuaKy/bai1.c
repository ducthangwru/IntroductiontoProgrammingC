#include <stdio.h>

void NhapChuoi(char s[])
{
    printf("Nhap 1 chuoi: ");
    fflush(stdin);
    gets(s);
}

void XuatChuoi(char s[])
{
    printf("%s", s);
    printf("\n");
}

int DemKhoangTrang( char s[])
{
    int i = 0, dem = 0;

    while(s[i] != 32)
    {
        dem++;
        i++;
    }

    return dem;
}

int main()
{
    char s[50];

    NhapChuoi(s);
    XuatChuoi(s);
    printf("Chuoi co %d khoang trang", DemKhoangTrang(s));

    return 0;
}
