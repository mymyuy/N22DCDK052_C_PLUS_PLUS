#include <iostream>
using namespace std;

int main()
{
    // vars to hold the regular price, the discount, the sale price
    double regularPrice = 59.95, discount, salePrice;
    
    //calculate 20% of discount.
    discount = regularPrice*0.2;
    //caculate the sale price
    salePrice = regularPrice - discount;

    cout << "Regular price: $" << regularPrice << endl;
    cout << "Discount amount: $" << discount << endl;
    cout << "sale price: $" << salePrice << endl;
    return 0;
}