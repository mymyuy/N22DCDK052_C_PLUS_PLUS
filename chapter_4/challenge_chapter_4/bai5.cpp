#include <iostream>
using namespace std;

int main()
{
    double weight, height, bmi; // weight tinh bang pound va height tinh bang icnh
    cout << "Nhap can nang(pound) va chieu cao(inch): "; cin >> weight >> height;
    bmi = weight*730/(height*height); // tinh bmi
    
    // so sanh va in kq ra man hinh
    if(bmi < 18.5)
        cout << "Ban thieu can";
    else if(bmi > 25)
        cout << "Ban thua can";
    else 
        cout << "Ban co can nang li tuong";
    return 0;
}