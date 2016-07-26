#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;

    //Bai8_a:
    for (j = 1; j <= 7; j++)
        printf ("* ");

    printf("\n \n \n \n");

    //Bai8_b:
    for(i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
            printf ("* ");

        printf("\n");
    }

    return 0;
}
