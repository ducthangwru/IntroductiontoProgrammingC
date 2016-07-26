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
    printf("Chuoi: %s  \n", s);
}

void XuLyChuoi(char s[])
{
    int i;

    for(i = 0; i <= strlen(s); i++)
    {
        if(s[i] >= 97 && s[i] <= 122)
            s[i] -= 32;
    }
}

int main()
{
    char s[100];

    NhapChuoi(s);
    XuatChuoi(s);
    XuLyChuoi(s);
    XuatChuoi(s);

    return 0;
}
