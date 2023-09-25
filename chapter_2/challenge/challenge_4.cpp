#include <iostream>
using namespace std;

int main()
{
    double percent_of_tax = 0.0675, percent_of_tip = 0.2, total_bill, meat_cost = 88.67, tip, tax;

    tax = meat_cost * percent_of_tax; // tinh tien thue
    tip = (tax + meat_cost)*percent_of_tip; // tinh tien boa
    total_bill = meat_cost + tax + tip; // tong hoa don
    cout << "Tien thue: " << tax << endl;
    cout << "Tien boa: " << tip << endl;
    cout << "Tong hoa don: " << total_bill;
    return 0;
}