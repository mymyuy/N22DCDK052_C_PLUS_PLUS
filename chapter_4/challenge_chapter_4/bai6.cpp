#include <iostream>
using namespace std;

int main()
{
    double mass, weight;
    cout << "Nhap khoi luong cua 1 vat: "; cin >> mass;
    weight = mass*9.8;
    if(weight > 1000) cout << "Vat qua nang";
    else if(weight < 10) cout << "Vat qua nhe";
    else cout << "Vat ko qua nang cung ko qua nhe";
    return 0;
}