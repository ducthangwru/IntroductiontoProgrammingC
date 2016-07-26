#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kiemtra(int x)
{
    int i;
    if(x < 2)
        return 0;
    for(i = 2; i < x; i++)
        if(x%i == 0)
            return 0;
    return 1;
}

int main ()
{
    int x;
    printf(" Nhap 1 so nguyen bat ky: ");
    scanf("%d",&x);

    if(kiemtra(x) == 1)
        printf("%d la so nguyen to",x);
    else
        printf("%d khong phai la so nguyen to",x);
    return 0;
}
