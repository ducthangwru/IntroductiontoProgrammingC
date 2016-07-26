#include <stdio.h>
#include <string.h>

int main()
{
    char TenSo[10][10]={"khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    int n;

    printf("Nhap so: ");
    scanf("%d", &n);

    if(n < 10)
        printf("%s ", TenSo[n]);
    else if (n < 20)
        printf("Muoi %s", TenSo[n%10]);
    else
        printf(" %s muoi %s ",TenSo[n/10],TenSo[n%10]);

    return 0;

}
