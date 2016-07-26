#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("Nhap vao 3 so: ");
    scanf("%d %d %d",&a,&b,&c);
    max = a;
    if (max < b)
      max = b;
    if (max < c)
      max = c;
    printf("  %d la so lon nhat!",max);
    return 0;
}
