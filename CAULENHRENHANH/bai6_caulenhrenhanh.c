#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,D;
    printf(" Phuong trinh co dang Ax^2 + Bx + C = 0\n");
    printf(" Nhap A= ");
    scanf("%f",&a);
    printf(" Nhap B= ");
    scanf("%f",&b);
    printf(" Nhap C= ");
    scanf("%f",&c);
    D=pow(b,2)-4*a*c;

    if (a == 0)
    {
      if (b == 0)
      {
        if (c == 0) printf("Phuong trinh vo so nghiem ");
        else printf("Phuong trinh vo nghiem ");
      }
      else
      {
        if(c == 0) printf("Phuong trinh co nghiem x= 0");
        else printf("Phuong trinh co nghiem x= %.2f",-b/a);
      }
    }
    else
    {
      if( D<0 ) printf("Phuong trinh vo nghiem");
      else if ( D== 0) printf("Phuong trinh co nghiem la: x= %.2f",-b/(2*a));
      else printf (" Phuong trinh co nghiem x1= %.2f x2= %.2f",(-b-sqrt(D))/(2*a),(-b+sqrt(D))/(2*a));
    }
    return 0;
}
