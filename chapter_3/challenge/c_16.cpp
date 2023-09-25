// chuong trinh tinh hoa don thue hang quy
#include <iostream>
using namespace std;

int main()
{
    double giaTiTaiSan, Thue;

    cout << "Nhap gia tri tai san: "; cin >> giaTiTaiSan;
    cout << "Nhap thue suat hien tai cho moi $100 tri gia: "; cin >> Thue;

    // tinh va in ket qua
    double assessedValue = giaTiTaiSan*0.6, taxAbleValue = assessedValue - 5000, annualprotertyTax = taxAbleValue*Thue/100,
            quaterlyPayment = annualprotertyTax / 4;
    
    cout << "So tien thue tai san hang nam: " << annualprotertyTax << endl;
    cout << "So tien hang quy: " << quaterlyPayment << endl;

    return 0;
}