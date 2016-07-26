#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a,b;
    printf("Phuong trinh co dang: Ax + B = 0 \n");
    printf(" Nhap A= ");
    scanf("%f",&a);
    printf(" Nhap B= ");
    scanf("%f",&b);

    if (a == 0)
    {
        if (b == 0)
            printf("Phuong trinh vo so nghiem ");
        else
            printf("Phuong trinh vo nghiem ");
    }
    else
    {
        if (b == 0)
            printf("Phuong trinh co nghiem x= 0");
        else
            printf("Phuong trinh co nghiem x= %.2f",(float)-b/a);
    }
    return 0;
}


