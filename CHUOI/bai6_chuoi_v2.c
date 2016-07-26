#include <stdio.h>
#include <string.h>

void NhapChuoi(char s[])
{
    printf("Nhap 1 chuoi: ");
    fflush(stdin);
    gets(s);
}

void XuatChuoi(char s[])
{
    printf("Chuoi la: %s \n", s);
}

void DaoChuoi (char s[])
{
    strrev(s);
}

int main()
{
    char s[101];

    NhapChuoi(s);
    XuatChuoi(s);
    DaoChuoi(s);
    XuatChuoi(s);

    return 0;
}
