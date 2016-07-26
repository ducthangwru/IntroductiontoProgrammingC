#include <stdio.h>
#include <string.h>

void NhapChuoi(char str[])
{
    printf("Nhap 1 chuoi: ");
    fflush(stdin);
    gets(str);

}

void XuatChuoi(char str[])
{
    printf("Chuoi vua nhap la: %s", str);
    printf("\n");
}

int KiemTra(char str[])
{
    int i, dem = 0;

    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == 32 && str[i+1] != 32)
            dem++;
    }

    return dem;
}

int main()
{
    char str[100];
    int n;

    NhapChuoi(str);
    XuatChuoi(str);
    printf("Chuoi co %d khoang trang ", KiemTra(str));

    return 0;
}
