#include <iostream>
using namespace std;

int main()
{
    double company_Sales = 8600000, EC_sales;

    // tinh % doanh thu cua East Coast
    EC_sales = company_Sales * 0.58;
    cout.precision(20); // hien thi 20 so sau dau thap phan
    cout << "Doanh thu du doan: " << EC_sales;
    return 0;
}