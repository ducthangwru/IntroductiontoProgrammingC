#include<stdio.h>
#include<stdlib.h>
int main()
{
    int thang, nam, a;
    printf(" Nhap thang,nam: ");
    scanf("%d %d",&thang,&nam);
    a=nam/100;
    if (a %4 == 0)
    {
        if (thang == 2 && nam %4 == 0)
          printf(" Thang %d nam %d co 29 ngay",thang,nam);
        else
          if (thang == 2 && nam %4 != 0)
            printf("Thang %d nam %d co 28 ngay",thang,nam);
          else
            if (thang == 4 || thang == 6 || thang == 9||thang == 11)
              printf("Thang %d nam %d co 30 ngay",thang,nam);
            else
              printf("Thang %d nam %d co 31 ngay",thang,nam);
    }
    else
    {
        if (thang == 2 )
          printf("Thang %d nam %d co 28 ngay",thang,nam);
        else
          if (thang == 4 || thang == 6 || thang == 9||thang == 11)
            printf("Thang %d nam %d co 30 ngay",thang,nam);
          else
            printf("Thang %d nam %d co 31 ngay",thang,nam);
    }
    return 0;
}

