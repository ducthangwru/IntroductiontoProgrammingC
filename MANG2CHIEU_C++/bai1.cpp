
#include <iostream>
using namespace std;

void NhapMang(int a[][100], int *pm, int *pn)
{
    cout<<"Nhap so hang m = ";
    cin>>*pm;

    cout<<"Nhap so cot n = ";
    cin>>*pn;

    for(int i = 0; i < *pm; i++)
        for(int j = 0; j < *pn; j++)
        {
            cout<<"a["<<i+1<<"]["<<j+1<<"] = ";
            cin>>a[i][j];
        }
}

void XuatMang(int a[][100], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }
}

void TinhTong(int a[][100], int m, int n)
{
    int s = 0;

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            s += a[i][j];

    cout<<"Tong cac phan tu la: "<<s;
}

int main()
{
    int a[100][100], m, n;

    NhapMang(a, &m, &n);
    XuatMang(a, m , n);
    TinhTong(a, m, n);

    return 0;
}
