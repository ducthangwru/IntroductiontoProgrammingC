#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,h;

    //Bai9_c:
    printf(" Nhap do cao h= ");
    scanf("%d",&h);

    for(i = 1; i <= h; i++)
    {
        for(j = 1; j <= i; j++)
            printf("* ");

        printf("\n");
    }

    printf("\n \n \n");
    h = 0;

    //Bai9_d;
    printf(" Nhap do cao h= ");
    scanf("%d",&h);

    for (i = 1;i <= h; i++)
    {
        for (j = 1; j <= h; j++)
        {
            if (j <= h-i)
                printf("   ");
            else
                printf(" * ");
        }

        printf("\n");
    }

    return 0;
}
