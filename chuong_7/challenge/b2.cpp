#include <iostream>
using namespace std;
#define month 12

void bimbimbambam(double a[], double &t, double &avg, int &h, int &l) //ham tinh tong, trung binh
// thang co luong mua lon nhat, nho nhat
{
    h = l = 0;
    t = a[0];
    for(int i=1 ; i<month; i++)
    {
        t += a[i];
        if(a[i] > a[h]) h = i;
        if(a[i] < a[l]) l = i;
    }
    h++; l++;
    avg = t/12;
}
int main()
{
    double rainFall[month], total, avg;
    int highest, lowest;
    cout << "Nhap luong mua 12 thang" << endl;
    for(int i=0; i<month; i++)
    {
        cout << "Thang " << i+1 << " : "; cin >> rainFall[i];
    }
    // goi ham
    bimbimbambam(rainFall, total, avg, highest, lowest);
    cout << "Tong luong mua 12 thang: " << total << endl
    << "Luong mua trung binh: " << avg << endl
    << "Thang co luong mua cao nhat: " << highest << endl
    << "Thang co luong mua thap nhat: " << lowest << endl;
    return 0;
}