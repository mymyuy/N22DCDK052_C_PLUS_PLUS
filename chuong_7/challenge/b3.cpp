#include <iostream>
using namespace std;
#define n 5

void bimbimbambam(int a[], int &t, int &h, int &l) //ham tinh tong doanh so, vi tri san pham co
// doanh thu cao nhat, thap nhat
{
    t = a[0];
    h = l = 0;
    for(int i=1; i<n; i++)
    {
        t += a[i];
        if(a[i] > a[h]) h = i;
        if(a[i] < a[l]) l = i;
    }
}

int main()
{
    string type[] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int sale[n], total, highest, lowest;
    cout << "Nhap doanh so ban hang cho cac loai san pham sau" << endl;
    for(int i=0; i<n; i++)
    {
        cout << type[i] << " : ";
        do
        {
            cin >> sale[i];
            if(sale[i] < 0) cout << "Doanh so khong duoc nho hon 0!" << endl;
        } while (sale[i] < 0);
    }
    //goi ham
    bimbimbambam(sale, total, highest, lowest);
    // in thong tin
    for(int i=0; i<n; i++)
    {
        cout << "Doanh so cua " << type[i] << " : " << sale[i] << endl;
    }
    cout << "Tong doanh so: " << total << endl
    << "San pham co doanh so cao nhat: " << type[highest] << endl
    << "San pham co doanh so thap nhat: " << type[lowest] << endl;
    return 0;
}