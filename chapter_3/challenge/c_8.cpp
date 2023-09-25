// chuong trinh tinh so luong widget
#include <iostream>
using namespace std;

int main()
{
    double widgetWeigh = 12.5, palletWeight_1, palletWeight_2, numberOfWidget;
    // va in ket qua ra man hinh
    cout << "Enter the weigh of pallet(include all widgets): "; cin >> palletWeight_1;
    cout << "Enter the weigh of itself (only pallet weigh): "; cin >> palletWeight_2;
    cout << "The number of widgets is: " << (palletWeight_1-palletWeight_2)/widgetWeigh;
    return 0;
}