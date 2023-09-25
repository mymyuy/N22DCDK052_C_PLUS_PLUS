#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Nhap vao so nguyen duong n: "; cin >> n;

    for(int i = 1; i <= n ; i++)
    {
        sum += i;
    }
    cout << "Tong cac so tu 1 - n: " << sum;
    return 0;
}