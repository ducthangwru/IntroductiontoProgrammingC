#include <stdio.h>

int main()
{
    int h, i, j;
    do
    {
    printf("Nhap chieu cao h = ");
    scanf("%d", &h);
    }
    while(h < 3);

    for(i = 1; i <= h; i++)
    {
        for(j = 1; j <= h; j++)
        {
            if(j == 1 || i == h || i == j)
                printf(" * ");
            else
                printf("   ");
        }

        printf("\n");
    }
    return 0;
}

