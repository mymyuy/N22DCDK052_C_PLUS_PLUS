#include <iostream>
using namespace std;

int main()
{
    int number_of_galloon = 20, avg_miles_per_gallon_in_town = 23.5, avg_miles_per_gallon_on_highway = 28.9;
    // tinh va in ra khoang cah di duoc trong thi tran va tren duong cao toc
    cout << "Khoang cach di duoc trong thi tran: " << number_of_galloon*avg_miles_per_gallon_in_town << " miles" << endl;
    cout << "Khoang cach di duoc tren cao toc: " << number_of_galloon*avg_miles_per_gallon_on_highway << " miles" << endl;
    return 0;
}