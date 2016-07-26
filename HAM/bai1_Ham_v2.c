#include<stdio.h>

int tinhtong(int n)
{
    int i,s = 0;
    for(i = 1;i <= n;i++)
        s += i;
    return s;
}

int main()
{
    printf("Tong 10 so tu nhien la: %d",tinhtong(10));

    return 0;
}
