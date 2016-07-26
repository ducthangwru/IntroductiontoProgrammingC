#include <stdio.h>
int main()
{
    int a,b,c,min;
    printf("Nhap vao 3 so: ");
    scanf("%d %d %d",&a,&b,&c);
    min = a;
    if (min > b)
        min = b;
    if (min > c)
        min = c;
    printf("%d la so nho nhat!",min);
    return 0;
}

