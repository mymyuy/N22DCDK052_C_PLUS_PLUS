#include <iostream>
using namespace std;

int main()
{
    double speed, time;
    cout << "Nhap toc do(mph): "; cin >> speed;
    cout << "Nhap thoi gian(h): "; cin >> time;
    
    cout << "Time\t\t\t\tDistance" << endl;
    for(int i = 1; i <= time; i++)
    {
        cout << i << "\t\t\t\t" << speed*i << endl;
    }
    return 0;
}