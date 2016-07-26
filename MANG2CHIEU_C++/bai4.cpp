#include <iostream>
#include <string>
using namespace std;

void dsTen(string Ten[][51], int *pn)
{
    cout<<"Nhap so ten: ";
    cin>>*pn;
    cout<<endl;

    for(int i = 0; i < *pn; i++)
    {
        cout<<"Nhap vao ten ["<<i+1<<"]: ";
        cin.ignore();
        getline(cin, Ten[i][51]);
    }
}

void XuatDs(string ds[][51], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<ds[i]<<endl;
    }
}

void SapXep(string ds[][51], int n)
{
    string tam = "";
    for(int i = 0;i < n; i++)
    {
        for(int j = i; j < n; j++)
            if(ds[i][0] > ds[j][0])
            {
                ds[i].append(tam);
                ds[j].append(ds[i]);
                tam.append(ds[j]);
            }
    }
}
int main()
{
    string s[20][51];
    int n;

    dsTen(s, &n);
    XuatDs(s, n);
    SapXep(s, n);
    XuatDs(s, n);

    return 0;
}
