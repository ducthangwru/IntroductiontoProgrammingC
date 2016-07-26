#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,s = 1;

    //bang cuu chuong 2:
    for(i = 1; i < 10; i++)
    {
        printf("2  x  %d = %d \n",i,2*i);
    }

    s = 1;
    printf("\n");

    //bang cuu chuong 2-->9:
    for(i = 2; i < 10; i++)
    {
        for(j = 1; j < 10; j++)
            printf("%d  X  %d = %d \n",i,j,i*j);
        printf("\n");
    }

    return 0;
}
