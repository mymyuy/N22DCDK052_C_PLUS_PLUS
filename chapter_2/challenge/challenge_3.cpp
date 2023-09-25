#include <iostream>
using namespace std;

int main()
{
    double price = 95, state_sales_tax = 0.04, country_sales_tax = 0.02, price_after_tax;
    // tinh gia tri mat hang sau thue
    price_after_tax = price + price*state_sales_tax + price*country_sales_tax;
    cout << "Gia tri mat hang sau thue: " << price_after_tax << endl;
    return 0;
}