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
    chuc = x%10;
    x = x/10;
    tram = x%10;
    x = x/10;
    ngan = x%10;
    if (chuc == tram && donvi == ngan)
    printf("So %d la so doi xung ",a);
    else printf("So %d khong phai la so doi xung",a);
    return 0;
}
