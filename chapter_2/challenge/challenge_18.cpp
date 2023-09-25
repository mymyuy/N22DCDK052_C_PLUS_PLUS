#include <iostream>
using namespace std;

int main()
{
    int sl_kh = 16500, kh_mua_nuoc, kh_cam_quyt;
    kh_mua_nuoc = sl_kh*0.15; // tinh so luong khach hang mua nuoc moi tuan
    kh_cam_quyt = kh_mua_nuoc*0.58; // tinh so luong khach hang thich uong huong cam quyt
    // in ket qua
    cout << "So luong khach hang mua nuoc tang luc moi tuan: " << kh_mua_nuoc << endl;
    cout << "So luong khach hang thich uong huong cam quyt: " << kh_cam_quyt;
    return 0;
}