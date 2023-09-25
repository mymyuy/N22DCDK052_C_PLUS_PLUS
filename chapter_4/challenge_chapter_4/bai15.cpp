#include <iostream>
using namespace std;

int main()
{
    double kl, kc;
    do
    {
        cout << "Nhap khoi luong don hang va khoang cach van chuyen: "; cin >> kl >> kc;
    } while ((kl <= 0 || kl > 20) || (kc < 10 || kc > 3000));
    
    if(kl > 10)
    {
        cout << "Hoa don: $" << 4 * (int)((kc/501) + 1);
    }
    else if(kl > 6)
    {
        cout << "Hoa don: $" << 3.7 * (int)((kc/501) + 1);
    }
    else if(kl > 2)
    {
        cout << "Hoa don: $" << 2.7 * (int)((kc/501) + 1);
    }
    else 
    {
        cout << "Hoa don: $" << 1.1 * (int)((kc/501) + 1);
    }
    return 0;
}