#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int x=295,a,sodau,sogiua,socuoi;
    a=x;
    sodau=x%10;
    x=x/10;
    sogiua=x%10;
    socuoi=x/10;
    printf(" So dao cua %d la: %d%d%d",a,sodau,sogiua,socuoi);
    return 0;
}

