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
    printf("Chuoi la: %s \n ", s);
}

void ChenDau(char s[], int vt, char c)
{
    int i;

    for (i = strlen(s) + 1; i > vt; i--)
        s[i] = s[i - 1];

    s[vt] = c;
}
void DanhDau(char s[])
{
    int i;
    for (i = strlen(s) - 3; i > 0; i -= 3)
        ChenDau(s, i, ',');

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
