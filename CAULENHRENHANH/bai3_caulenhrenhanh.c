#include <stdio.h>
int main()
{
    int a, b, c;
    printf ("Nhap vao 3 so \n");
    scanf ("%d %d %d", &a, &b, &c);
    printf("Day duoc sap xep la: ");
    if(a<b && a<c && b<c)
    printf("%d %d %d",a,b,c);

    if(a<b && a<c && b>c)
    printf("%d %d %d",a,c,b);

    if(b<a && b<c && a<c)
    printf("%d %d %d",b,a,c);

    if(b<a && b<c && a>c)
    printf("%d %d %d",b,c,a);

    if(c<b && c<a && a<b)
    printf("%d %d %d",c,a,b);

    if(c<b && c<a && a>b)
    printf("%d %d %d",c,b,a);

    return 0;
}

