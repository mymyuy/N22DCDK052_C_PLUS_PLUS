#include <iostream>
using namespace std;

int main()
{
    float mat_hang[5], tax = 0.07, total;
    mat_hang[0] = 15.95; mat_hang[1] = 24.95; mat_hang[2] = 6.95; mat_hang[3] = 12.95; mat_hang[4] = 3.95;
    // tinh tong tien hang
    for(int i=0;i<5;i++)
    {
        total += mat_hang[i];
    }
    // tinh va in ra tien hang, tien thue, tong tien
    // cout.precision(3);
    cout << "Tong so tien hang: " << total << endl;
    cout << "Tien thue: " << total*tax << endl;
    cout << "Tong so tien phai tra: " << total + total*tax;
    return 0;
}