#include <stdio.h>

int main()
{
    int a[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int thang, nam;

    printf("Nhap thang: ");
    scanf("%d", &thang);

    printf("Nhap nam: ");
    scanf("%d", &nam);

    printf("Ban vua nhap: thang %d nam %d \n", thang, nam);

    a[2] += (nam %4 == 0) && (nam %100 == 0 && nam/100 %4 == 0) || (nam %100 != 0 && nam%4 == 0);

    printf("Thang %d co %dngay", thang, a[thang]);
    return 0;
}
