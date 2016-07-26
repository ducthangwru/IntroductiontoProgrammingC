#include <stdio.h>
#include <string.h>

void NhapChuoi(char s[])
{
    printf("Nhap Ho va ten: ");
    fflush(stdin);
    gets(s);
}

void XuatChuoi(char s[])
{
    printf("Ho va ten: %s \n", s);
}

void XuLyChuoi(char s[], char s1[], char s2[])
{
    int i, k = strlen(s);

    for(i = 0; i < strlen(s); i++)
    {
        if(s[i] == 32)
           strncpy(s1, s, i);
    }

    printf("Ho la: %s \n",s1);

    strrev(s);
    for(i = 0; i < strlen(s); i++)
    {
        if(s[i]== 32)
            strncpy(s2, s, i);
    }

    strrev(s2);
    printf("Ten la: %s \n",s2);
}

int main()
{
    char s[100]="", s1[100]="", s2[100]="";

    NhapChuoi(s);
    XuatChuoi(s);
    XuLyChuoi(s, s1, s2);

    return 0;
}
