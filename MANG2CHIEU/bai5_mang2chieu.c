#include <stdio.h>
#include <string.h>

void NhapMangTen(char dsTen[][51], int *pn)
{
    int i;

    printf("Nhap so ten: ");
    scanf("%d", pn);

    for(i = 0; i < *pn; i++)
    {
        printf("Nhap vao ten [%d]: ", i);
        fflush(stdin);
        gets(dsTen[i]);
    }
}

void XuatMangTen(char dsTen[][51], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%s \n", dsTen[i]);
    }
}

void SapXep(char dsTen[][51], int n)
{
    int i, j;
    char tam[51]= "";

    for(i = 0; i < n-1; i++)
        for(j = i; j < n; j++)
            if (strcmp (dsTen[i], dsTen[j]) > 0)
                    {
                        strcpy(tam, dsTen[j]);
                        strcpy(dsTen[j], dsTen[i]);
                        strcpy(dsTen[i], tam);
                    }

}
int main()
{
    char dsTen[20][51];
    int n;

    NhapMangTen(dsTen, &n);

    printf("\n Danh sach ten: \n");
    XuatMangTen(dsTen, n);

    SapXep(dsTen, n);
    printf("\n Sau khi sap Xep: \n");

    XuatMangTen(dsTen, n);

    return 0;
}
