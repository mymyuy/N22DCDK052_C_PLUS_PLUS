#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen duong n: "; cin >> n;
    cout << "Cot A" << setw(2*n) << "Cot B\n";
    for(int i = 1; i <= n; i++)
    {
        for(int j=1; j <= i; j++) cout << "+"; // in cot A
        cout << setw(2*n); // in khoang trang 
        for(int k=n; k >= i; k--) cout << "+"; // in cot B
        cout << endl; // xuong dong
    }
    return 0;
}