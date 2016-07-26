#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int x=295, socuoi=x/100, tg=x%100, sodau=tg%10 , sogiua=tg/10;
    printf(" So dao cua %d la: %d%d%d",x,sodau,sogiua,socuoi);
    return 0;
}

