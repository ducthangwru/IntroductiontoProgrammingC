#include <stdio.h>

int main()
 {
    int a, b, c, tam;
    printf("Nhap 3 so: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
       tam=a;
       a=b;
       b=tam;
    }

    if(a>c)
    {
       tam=a;
       a=c;
       c=tam;
    }
    if(b>c)
    {
       tam=b;
       b=c;
       c=tam;
    }
    printf("\n%d %d %d", a, b, c);
    return 0;
 }
