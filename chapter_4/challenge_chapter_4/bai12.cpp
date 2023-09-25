#include <iostream>
using namespace std;

int main()
{
    const double _20percent = 0.2, _30percent = 0.3, _40percent = 0.4, _50percent = 0.5; 

    int sl, price = 99;
    do
    {
        cout << "Nhap so luong pham mem ban mua: "; cin >> sl;

    } while (sl <= 0);
    if(sl > 99)
        cout << "Gia tien: $" << sl*price -sl*price*_50percent;
    else if(sl > 49)
        cout << "Gia tien: $" << sl*price -sl*price*_40percent;
    else if(sl > 19)
        cout << "Gia tien: $" << sl*price -sl*price*_30percent;
    else if(sl > 9)
        cout << "Gia tien: $" << sl*price -sl*price*_20percent;
    else
        cout << "Gia tien: $" << sl*price;
    return 0;
}