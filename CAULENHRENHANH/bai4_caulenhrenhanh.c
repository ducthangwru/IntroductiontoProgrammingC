#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("Nhap vao 1 so nguyen x= ");
    scanf("%d",&x);
    if(x%2 == 0) printf(" %d la so chan ",x);
    else printf(" %d la so le ",x);
    return 0;
}
