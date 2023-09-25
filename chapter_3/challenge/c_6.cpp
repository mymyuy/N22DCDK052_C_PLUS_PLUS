// chuong trinh tinh nguyen lieu can de lam n cai banh quy
#include <iostream>
using namespace std;

int main()
{
    // nguyen lieu can de lam 1 cai banh quy
    const double sugar = 1.5,
                 butter = 1,
                 flour = 2.75;
    int n;
    cout << "Ban muon lam bao nhieu banh quy: "; cin >> n;
    // tinh va in ket qua ra man hinh
    cout << "So luong nguyen lieu:\n";
    cout << sugar*n << " chen duong\n";
    cout << butter*n << " chen bo\n";
    cout << flour*n << " chen bot\n";
    return 0;
}