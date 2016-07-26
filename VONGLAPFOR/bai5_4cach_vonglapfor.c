#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n, s = 0;
    printf(" Nhap n = ");
    scanf("%d",&n);

    //cach 1:
    for(i = 0; i <= n; i++)
    {
        if (i %2 == 0)
            s += i;
    }
    printf(" Tong cac so chan la: %d",s);
    printf("\n");
    s=0;

    //cach 2:
    for(i = 0; i <= n; i += 2)
        s += i;
    printf(" Tong cac so chan la: %d",s);
    printf("\n");
    s = 0;

    //cach 3:
    int s1 = 0;
    for(i = 0; i <= n; i++)
        s += i;
    for(i = 1;i <= n; i += 2)
        s1 += i;
    printf(" Tong cac so chan la: %d",s-s1);
    printf("\n");
    s=0;

    //cach 4:
    for(i = 1; i <= n/2; i++)
        s += 2*i;
    printf(" Tong cac so chan la: %d",s);
    printf("\n");
    s = 0;

    return 0;
}
