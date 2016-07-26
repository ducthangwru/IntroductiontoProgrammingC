#include <stdio.h>

int Func (int *px)
{
    return 7;
}

int main()
{
    int x = 5;
    int k = Func (&x);

    printf ("x = %d \n", x); // in ra số 5
    printf ("k = %d \n", k); // in ra số 7
    return 0;
}


