#include <stdio.h>

void kiemtra(int x)
{
    if(x%2 == 0)
        printf("%d la so chan ",x);
    else
        printf("%d la so le ",x);
}

int main ()
{
    int x;
    printf("Nhap 1 so bat ki: ");
    scanf("%d",&x);

    kiemtra(x);

    return 0;
}
