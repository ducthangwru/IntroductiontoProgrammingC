#include <stdio.h>
#include <string.h>

void NhapChuoi(char s[])
{
    printf("Nhap 1 chuoi so: ");
    fflush(stdin);
    gets(s);
}
void XuatChuoi(char s[])
{
    printf("Chuoi vua nhap la: %s \n ", s);
}

void ThemDau(char s[], int vitri, char c)
{
    int i;

    for (i = strlen(s) + 1; i > vitri; i--)
        s[i] = s[i - 1];

    s[vitri] = c;
}
void DanhDau(char s[])
{
    int i;

    printf("Chuoi so duoc thay doi la: ");

    for (i = strlen(s) - 3; i > 0; i -= 3)
        ThemDau(s, i, ',');

    printf(" %s ", s);
}

int main()
{
    char s[100];

    NhapChuoi(s);
    XuatChuoi(s);
    DanhDau(s);

    return 0;
}

