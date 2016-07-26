#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int j, i, n, s1 = 0, s2 = 1;
    float s = 0.0;

    //Bai6_a:
    printf(" S(n)=1+2+...+n/1*2*....*n \n");
    printf(" Nhap n= ");
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
    {
        s1+=i;
        s2*=i;
    }

    printf("Tong S(%d)= %.2f", n,(float)s1/s2);
    printf("\n");
    n = 0; s = 0; s1 = 0; s2 = 0;

    //Bai6_b:
    printf(" S(n)=1/2+1/3+....+1/n \n");
    printf(" Nhap n= ");
    scanf("%d",&n);

    for(i = 2; i <= n; i++)
        s=s+1/(float)i;

    printf("Tong S(%d)= %.5f",n,s);
    printf("\n");
    s = 0; n = 0;

    //Bai6_c:
    printf(" S(n)=1/2+1/4+....+1/2^n \n");
    printf(" Nhap n= ");
    scanf("%d",&n);

    for(i = 1; i <= n; i++)
        s = s + 1/(float)pow(2,i);

    printf("Tong S(%d)= %.5f",n,s);
    printf("\n");
    s = 0; n = 0;

    //Bai6_d:
    s1 = 1; s2 = 1;
    printf(" S(n)=1/1!-1/2!+....+-1/n! \n");
    printf(" Nhap n= ");
    scanf("%d",&n);

    for(i = 1; i <= n; i += 2)
    {
       for (j = 1; j <= i; j++)
       {
           s1 *= j;
       }
    }

    for(i = 2; i <= n; i += 2)
    {
        for(j = 1; j <= i; j++)
        {
            s2 *= j;
        }
    }

    s = (float)1/s1 - (float)1/s2;
    printf("Tong S(%d)= %.5f", n, s);
    printf("\n");

    return 0;
}

