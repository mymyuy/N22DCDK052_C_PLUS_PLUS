#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double prev_money = 2500; // khoi tao bien prev_money de giu gia tri tien nam truoc da dong
    cout << "Nam\t\t\t\tSo tien can dong" << endl;
    for(int i = 1; i <= 6; i++)
    {
        prev_money = prev_money + prev_money*0.04; // so tien nam nay dong = so tien nam truoc cong voi lai suat 4%
        cout << 2023 + i << "\t\t\t\t" << prev_money << endl;
    }
    return 0;
}