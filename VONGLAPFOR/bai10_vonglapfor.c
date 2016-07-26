#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,s = 0;
    //Bai10_a:
    printf(" Nhap vao 1 so x = ");
    scanf("%d",&x);
    printf(" Cac uoc cua %d la: ",x);

    for(i = 1; i <= x/2; i++)
        if(x%i == 0)
        {
            s+=i;
            printf("%d  ",i);
        }

    printf("\n Tong cac uoc cua %d la: %d",x,s);
    printf("\n \n \n");
    s = 0; x = 0;

    //Bai10_b:
    printf(" Nhap vao 1 so x = ");
    scanf("%d",&x);

    for(i = 1; i <= x/2; i++)
        if(x %i == 0)
            s += i;

    if(x == s)
        printf("%d la so hoan hao",x);
    else
        printf(" %d khong phai la so hoan hao",x);

    return 0;
}
