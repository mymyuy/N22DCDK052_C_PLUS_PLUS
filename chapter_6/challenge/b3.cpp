#include <iostream>
#include <string>
using namespace std;

const int soLuongCuaHang = 4;

double getSale(string s)
{
    double val;
    cout << "Nhap doanh thu cua hang " << s << " : "; 
    do
    {
        cin >> val;
        if( val < 0)
        {
            cout << "Doanh thu khong be hon 0! Moi nhap lai: ";
        }
    } while (val < 0);
    return val;
}
void findHighest(double a[], string b[])
{
    double max = a[0];
    string name;
    for(int i = 1; i < soLuongCuaHang; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            name = b[i];
        }
    }
    cout << "Bo phan co doanh thu cao nhat " << name << endl;
}
int main()
{
    string name[] = {"Dong Bac", "Dong Nam", "Tay Bac", "Tay Nam"};
    double companySales[soLuongCuaHang];

    for(int i = 0; i < soLuongCuaHang; i++)
    {
        companySales[i] = getSale(name[i]);
    }
    findHighest(companySales, name);
    return 0;
}