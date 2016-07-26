#include <iostream>
using namespace std;

void NhapMang(int a[][100], int *pm, int *pn)
{
    cout<<" Nhap so hang: ";
    cin>> *pm;

    cout<<" Nhap so cot: ";
    cin>> *pn;

    for(int i = 0; i < *pm; i++)
        for(int j = 0; j < *pn; j++)
        {
            cout<<" a["<<i+1<<"]["<<j+1<<"] = ";
            cin>> a[i][j];
        }
}

void XuatMang(int a[][100], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        cout<<a[i][j]<<"\t";

        cout<<endl;
    }
}

void TimMax(int a[][100], int m, int n)
{
    int max = a[0][0];

    for(int i = 0; i < m; i++)
        for(int j = 0; j< n; j++)
        {
            if(a[i][j] > max)
                max = a[i][j];
        }

    cout<<" Gia tri MAX = "<<max;
}

int main()
{
    int a[100][100], m ,n;

    NhapMang(a, &m, &n);
    XuatMang(a, m, n);
    TimMax(a, m, n);

    return 0;
}
