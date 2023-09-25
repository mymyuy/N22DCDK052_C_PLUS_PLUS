#include <iostream>
using namespace std;

int main()
{
    int second;
    cout << "Nhap vao so giay: "; cin >> second;
    if(second >= 86400)
        cout << "The days is: " << second/86400;
    else if(second >= 3600)
        cout << "The hours is " << second/3600;
    else if(second >= 60)
        cout << "The minutes is " << second/60;
    else
        cout << "The second is " << second;
    return 0;
}