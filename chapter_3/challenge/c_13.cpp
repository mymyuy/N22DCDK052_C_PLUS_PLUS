// chuong trinh chuyen doi USD sang EUR va YEN
#include <iostream>
using namespace std;

int main()
{
    const double YEN_PER_USD = 98.83, EUR_PER_USD = 0.74;
    double usd;
    //nhap thong tin
    cout << "Nhap dollar: "; cin >> usd;
    // in ket qua ra man hinh
    cout << "Sau khi chuyen doi:\n";
    cout << "YEN: " << usd*YEN_PER_USD << endl;
    cout << "EUR: " << usd*EUR_PER_USD;
    return 0;
}