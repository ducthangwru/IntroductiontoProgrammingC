#include<stdio.h>
#include<conio.h>
int main()
{
    int w, h, i, j;
    printf(" Nhap chieu ngang w= ");
    scanf("%d",&w);

    printf(" Nhap chieu cao h= ");
    scanf("%d",&h);

    for(i = 0; i < w; i++)
    {
        for(j = 0; j < h; j++)
            if(i == 0 && i == w-1)
                printf(" * ");
            else if (i >= 1 && i <= w-2 && j != 0 && j != h-1 )
                printf("   ");
            else
                printf(" * ");

        printf("\n");
    }

    return 0;
}
