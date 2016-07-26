#include <stdio.h>

void ChangeValue(int *x)
{
    *x = 4;
}
int main()
{
    int x = 0;

    ChangeValue(&x);

    printf ("%d", x); // in ra số 4

    return 0;
}

