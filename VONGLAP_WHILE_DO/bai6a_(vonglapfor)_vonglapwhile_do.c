#include<stdio.h>

int main()
{
    int i=0,n,s1=0,s2=1;
    printf("Nhap n= ");
    scanf("%d",&n);

    while (i < n)
    {
      i++;
      s1 += i;
      s2 *= i;
    }
    printf(" Tong S= %f",(float)s1/s2);

    return 0;
}
