#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void kiemtra(int x)
{
    int i, dem = 0;
    for(i = 2; i <= sqrt(x); i++)
    {
        if (x%i == 0)
            dem++;
    }
    if(dem != 0 || x == 1)
        printf("%d khong phai la so nguyen to",x);
    else
        printf("%d la so nguyen to",x);
}

int main ()
{
    int x;
    printf(" Nhap 1 so nguyen bat ky: ");
    scanf("%d",&x);

    kiemtra(x);
}
