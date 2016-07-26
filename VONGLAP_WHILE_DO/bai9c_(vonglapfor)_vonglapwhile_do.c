#include<stdio.h>

int main()
{
    int i = 1,j = 1,n;
    printf(" Nhap chieu cao n= ");
    scanf("%d",&n);

    do
	{
		j = 1;
		do
		{
			printf(" * ");
			j++;
		}
		while(j <= i);

		printf("\n");
		i++;
	}
	while(i <= n);

    return 0;
}
