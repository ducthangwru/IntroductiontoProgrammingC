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
    int i, temp;

    for(i = 0; i <= strlen(s)/2; i++)
    {
        temp = s[i];
        s[i] = s[strlen(s) - 1 - i];
        s[strlen(s) - 1 - i] = temp;
    }
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
