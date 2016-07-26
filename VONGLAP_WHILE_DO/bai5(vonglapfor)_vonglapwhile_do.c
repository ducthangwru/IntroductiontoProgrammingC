#include<stdio.h>

int main()
{
    int n,i = 0,s = 0;
    printf(" Nhap n= ");
    scanf("%d",&n);

    //cach 1:
    while(i<=n)
    {
        if(i%2==0)
        s += i;
        i++;
    }

    /*
    do
    {
        if(i%2==0)
        s += i;
        i++;
    }
    while(i <= n);
    */

    printf("Tong S= %d",s);
    printf("\n");
    s=0,i=0;

    //cach 2:
    while (i<=n)
    {
        s += i;
        i += 2;
    }
    /*
    do
    {
        s += i;
        i += 2;
    }
    while(i <= n);
    */
    printf("Tong S= %d",s);
    printf("\n");
    s = 0,i = 0;

    //cach 3:
    int s1 = 0,j = 1;

    while(i <= n)
    {
        s1 += i;
        i++;
    }

    while(j <= n)
    {
        s += j;
        j += 2;
    }

    /*
    do
    {
        s1 += i;
        i++;
    }
    while(i <= n);
    do
    {
        s += j;
        j += 2;
    }
    while(j <= n);
    */

    printf("Tong s= %d",s1-s);
    printf("\n");
    s = 0,i = 0;

    //Cach 4:
    while(i <= n/2)
    {
        s += 2*i;
        i++;
    }

    /*
    do
    {
        s += 2*i;
        i++;
    }
    while(i <= n/2);
    */

    printf("Tong s= %d",s);
    printf("\n");
    s = 0,i = 0;

    return 0;
}
