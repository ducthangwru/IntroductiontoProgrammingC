#include<stdio.h>
#include<conio.h>
int main()
{
    int x, i, dem = 0;
    printf(" Nhap 1 so nguyen x= ");
    scanf("%d",&x);

    for(i = 1; i <= x/2; i++)
        if (x %i == 0)
            dem++;

    if(dem == 1)
        printf(" %d la so nguyen to ",x);
    else
        printf(" %d khong phai la so nguyen to ",x);

    return 0;
}
