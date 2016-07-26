#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,donvi,chuc,tram,ngan;
    printf("Nhap x (gom 4 chu so)= ");
    scanf("%d",&x);
    a = x;
    donvi = x%10;
    x = x/10;
    chuc=x%10;
    x = x/10;
    tram = x%10;
    x = x/10;
    ngan = x%10;
    printf(" so dao cua %d la: %d%d%d%d",a,donvi,chuc,tram,ngan);
    return 0;
}
