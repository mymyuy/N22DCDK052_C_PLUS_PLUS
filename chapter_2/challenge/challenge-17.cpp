#include <iostream>
using namespace std;

int main()
{
    float price = 750, amonut = 35, tax = 0.02;
    //tinh va in ket qua ra man hinh
    cout << "So tien tra rieng cho co phieu: " << price*amonut << endl;
    cout << "So tien phai tra(bao gom thue): " << price*amonut + price*amonut*tax;
    return 0;
}