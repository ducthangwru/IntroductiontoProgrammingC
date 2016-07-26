#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,s = 1;

    printf(" Nhap n= ");
    scanf("%d",&n);

    //Bai 4_a:
    for(i = 1; i <= n; i++)
        s *= 2;

    printf(" 2^%d = %d",n ,s);
    printf("\n \n");
    s = 1;

    //Bai 4_b:
    for(i = 1; i <= n; i++)
        s *= i;

    printf(" %d! = %d",n ,s);

    return 0;
}
