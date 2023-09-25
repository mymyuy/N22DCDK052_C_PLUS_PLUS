#include <iostream>
using namespace std;

int main()
{
    double food_calories, fat_weight, fat_calories;
    do
    {
        cout << "Nhap calories cua thuc pham: "; cin >> food_calories;
        cout << "Nhap khoi luong chat beo co trong thuc pham: "; cin >> fat_weight;
    } while (food_calories < 0 || fat_weight < 0);
    
    fat_calories = fat_weight*9;
    double ratio = fat_calories/food_calories;
    
    if(ratio <= 0.3) cout << "The food is low in fat";
    else if(ratio > 1) cout << "Wrong input";
    else if(ratio > 0.3) cout << "The food is high in fat";
    return 0;
}