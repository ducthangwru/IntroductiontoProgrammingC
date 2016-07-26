#include <stdio.h>

void NhapMang (int *pn)
{
    printf("Nhap vao so 9: ");
    scanf("%d",&*pn); // nhập vào giá trị là 9
}

int main()
{
    int n = 0;

    NhapMang(&n);

    printf ("%d", n); // in ra màn hình số 9
    return 0;
}

