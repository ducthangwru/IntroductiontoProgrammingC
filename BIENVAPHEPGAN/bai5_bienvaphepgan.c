#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 7, b = 10, tam=0;
    tam=a;
    a=b;
    b=tam;
    printf ("a = %d \n", a);
    printf ("b = %d \n", b);
    return 0;
}
