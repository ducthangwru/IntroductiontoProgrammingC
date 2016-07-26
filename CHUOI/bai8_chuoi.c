#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], str[1000]="";

    do
    {
        printf("Nhap chuoi: ");
        fflush(stdin);
        gets(s);
        strcat(str,s);
    }
    while(s[0] != 0);

    printf("Ket qua: %s", str);

    return 0;
}
