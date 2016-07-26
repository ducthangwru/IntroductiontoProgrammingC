#include <stdio.h>
#include <string.h>

int main()
{
    char DocSo[10][10] = {"khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    int i, n, x;

    printf("Nhap so: ");
    scanf("%d", &n);

    x = n;

    while(x != 0)
    {
        printf("%s ", DocSo[x%10]);
        x /= 10;
    }

    return 0;

}


