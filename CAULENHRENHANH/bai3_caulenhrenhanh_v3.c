#include <stdio.h>

int main()
 {
    int a, b, c, max, min, sogiua;
    printf("Nhap 3 so: ");
    scanf("%d %d %d", &a, &b, &c);
    max = a; min = a;
    if (max < b)
        max = b;
    else min = b;

    if (max < c)
        max = c;
    else if (min > c)
        min = c;
    else
        min =b;
    sogiua = a + b + c - max - min;
    printf("\n%d %d %d", min, sogiua, max);
    return 0;
 }
