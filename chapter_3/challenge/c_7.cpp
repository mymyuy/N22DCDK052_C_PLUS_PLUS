// chuong trinh tinh doanh thu phong ve
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    const int priceOfAldult = 10, priceOfChild = 6; // gia ve nguoi lon, gia ve tre em
    string nameMovie; // ten phim
    int adultTikets, childTickets; // so ve nguoi lon, tre em da ban
    cout << "Nhap ten phim: "; getline(cin, nameMovie); // dung getline de nhan vao khoang trang (dau cach)
    cout << "So luong ve nguoi lon da ban: "; cin >> adultTikets;
    cout << "So luong ve tre em da ban: "; cin >> childTickets;

    //tinh va in thong tin ra man hinh
    double loiNhuanChung = adultTikets*priceOfAldult + childTickets*priceOfChild;
    int m = 30;
    cout << left << setw(m) << "Ten phim:" << nameMovie << endl;
    cout << left << setw(m) << "So ve nguoi lon da ban:" << adultTikets << endl;
    cout << left << setw(m) << "So ve tre em da ban:" << childTickets << endl;
    cout << left << setw(m) << "Loi nhuan chung:" << "$" << loiNhuanChung << endl; 
    cout << left << setw(m) << "Loi nhuan rong phong ve:" << "$" << loiNhuanChung*0.2 << endl;
    cout << left << setw(m) << "Loi nhuan nha phan phoi:" << "$" << loiNhuanChung*0.8 << endl;

    return 0;
}