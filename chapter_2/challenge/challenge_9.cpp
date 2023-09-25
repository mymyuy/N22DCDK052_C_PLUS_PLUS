#include <iostream>
using namespace std;

int main()
{
    // dung ham sizeof() tinh va in ra kich thuoc cua tung kieu du lieu
    cout << "Kich thuoc cua kieu du lieu int: " << sizeof(int) << " byte" << endl;
    cout << "Kich thuoc cua kieu du lieu double: " << sizeof(double) << " byte" << endl;
    cout << "Kich thuoc cua kieu du lieu float: " << sizeof(float) << " byte" << endl;
    cout << "Kich thuoc cua kieu du lieu char: " << sizeof(char) << " byte" << endl;
    return 0;
}