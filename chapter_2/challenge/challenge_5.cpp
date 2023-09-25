#include <iostream>
using namespace std;

int main()
{
    int data[] = {28, 32, 37, 24, 33}; //dung mang de luu gia tri
    double sum = 0; // khoi tao bien sum = 0
    // chay vong lap for tinh tong gia tri cac phan tu
    for(int i=0;i<5;i++)
    {
        sum += data[i];
    }
    // tinh gia tri trung binh
    sum /= 5;
    cout << "Gia tri trung binh: " << sum; // in ra gia tri trung binh
    return 0;
}