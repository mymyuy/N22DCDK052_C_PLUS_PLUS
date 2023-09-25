#include <iostream>
using namespace std;

int main()
{
    double monthlyPay = 6000, // var to hold the monthly pay
    contribution; // var to hold the amount of contribution

    // calculate 5% contribution
    contribution = monthlyPay*0.05;
    cout << "5 percent is $" << contribution << " per month.\n";

    // calculate 7% contribution
    contribution = monthlyPay*0.07;
    cout << "7 percent is $" << contribution << " per month.\n";
    
    // calculate 10% contribution
    contribution = monthlyPay*0.1;
    cout << "10 percent is $" << contribution << " per month.\n";
    return 0;
}