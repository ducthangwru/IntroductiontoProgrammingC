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
    printf("Chuoi:  %s \n", s);
}

void DinhDangChuoi(char s[])
{
    int i;

    for(i= 1; i <= strlen(s); i++)
    {
        if(s[0] >= 97 && s[0] <= 122)
            s[0] -= 32;
        if(s[i] >= 97 && s[i] <= 122 && s[i-1] == 32)
            s[i] -= 32;
        else if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
    }
}

int main()
{
    char s[100];

    NhapChuoi(s);
    XuatChuoi(s);
    DinhDangChuoi(s);
    XuatChuoi(s);

    return 0;
}
