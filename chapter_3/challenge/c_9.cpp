// chuong trinh tinh luong calo tieu thu
#include <iostream>
using namespace std;

int main()
{
    int slBanhQuy = 30, khauPhan = 10, calories_1_khauphan = 300;
    // 30 banh quy = 10 khau phan 
    // 1 khau phan co 300 calories
    // suy ra calories cua 30 banh quy = 10*300 = 3000    
    // vay 1 banh quy chua 3000/30 = 100 calories
    int calories_1_BanhQuy = (khauPhan*calories_1_khauphan)/30;
    int sl_BanhQuy_da_an;
    // tinh va in ket qua ra man hinh
    cout << "Nhap so luong banh quy ban da an: "; cin >> sl_BanhQuy_da_an;
    cout << "\nLuong calories ban da tieu thu: " << sl_BanhQuy_da_an*calories_1_BanhQuy;
    return 0;
}