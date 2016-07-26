#include <stdio.h>

void NhapChuoi(char s[])
{
    printf("Nhap 1 chuoi: ");
    fflush(stdin);
    gets(s);
}

void XuatChuoi(char s[])
{
    printf("Chuoi vua nhap la: %s \n", s);
}

int DoDaiChuoi (char s[])
{
    int i = 0;

    while(s[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char s[100];

    NhapChuoi(s);
    XuatChuoi(s);
    printf("Chuoi co do dai la: %d", DoDaiChuoi(s));

    return 0;
}
