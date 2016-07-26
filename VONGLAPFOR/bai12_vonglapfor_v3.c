#include <stdio.h>
#include <conio.h>
int main()
{
      int a, b, x, y;
      printf("Nhap a=");
      scanf("%d", &a);

      printf("Nhap b=");
      scanf("%d", &b);

      x = a; y = b;

      for( ; a!=b ; )
      {
          if (a > b)
            a = a - b;
          else if (b > a)
            b = b - a;
      }
      printf("UCLN cua %d va %d la: %d ",x,y,a);
      return 0;

}
