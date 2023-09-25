#include <iostream>
using namespace std;

int main()
{
    const double SOSIA = 1.1, SOSIW = 4.9, SOSIS = 16.4;

    cout << "Medium\t\t\t\tSpeed\n"
         << "--------------------------------------------------------\n"
         << "Air\t\t\t\t1,100 feet per second\n"
         << "Water\t\t\t\t4,900 feet per second\n"
         << "Steel\t\t\t\t16,400 feet per second\n";
    int lc;
    cout << "Nhap lua chon (1/2/3): "; cin >> lc;
    double distance;
    cout << "Nhap khoang cach: "; cin >> distance;
    switch (lc)
    {
    case 1: {
        cout << "Thoi gian: " << distance/SOSIA << "s";
        break;
    }
    case 2: {
        cout << "Thoi gian: " << distance/SOSIW << "s";
        break;
    }
    case 3: {
        cout << "Thoi gian: " << distance/SOSIS << "s";
        break;
    }
    default:
        break;
    }
    return 0;
}