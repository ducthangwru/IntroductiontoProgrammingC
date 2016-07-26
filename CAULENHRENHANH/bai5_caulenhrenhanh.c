#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    printf("Phuong trinh co dang: Ax + B = 0 \n");
    printf(" Nhap A= ");
    scanf("%d",&a);
    printf(" Nhap B= ");
    scanf("%d",&b);
    if (a == 0)
    {
        if (b == 0) printf("Phuong trinh vo so nghiem ");
        else printf("Phuong trinh vo nghiem ");
    }
    if (a != 0)
    {
        if (b == 0) printf("Phuong trinh co nghiem x= 0");
        else printf("Phuong trinh co nghiem x= %.2f",(float)-b/a);
    }
    return 0;
}
