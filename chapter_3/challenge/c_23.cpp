// chuong trinh tinh tien loi ban co phieu
#include <iostream>
using namespace std;

int main()
{
    // tinh toan tien mua, ban, tien tra hoa hong, tien loi
    int slMua = 1000, slBan = 1000;
    double gia_mua_1_cp = 45.5, gia_ban_1_cp = 56.9, tienHoaHong = 0.02;
    double tienMuaCP = slMua*gia_mua_1_cp, tienBanCP = slBan*gia_ban_1_cp,
    tienHoaHongMua = tienMuaCP*tienHoaHong, tienHoaHongBan = tienBanCP*tienHoaHong,
    tienLoi= tienBanCP-tienHoaHongBan - tienMuaCP - tienHoaHongMua;
    // in kq ra man hinh
    cout << "So tien mua CP: " << tienMuaCP << endl;
    cout << "Tien tra hoa hong khi mua: " << tienHoaHongMua << endl;
    cout << "So tien ban CP: " << tienBanCP << endl;
    cout << "Tien tra hoa hong khi ban: " << tienHoaHongBan << endl;
    cout << "Tong tien hoa hong: " << tienHoaHongBan+tienHoaHongMua << endl;
    cout << "Tien lai: " << tienLoi << endl;
    return 0;
}