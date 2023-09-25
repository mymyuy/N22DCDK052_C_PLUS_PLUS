#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int employeeNumber;
    double grossPay, stateTax, federalTax, ficaWithholdings;
    
    // Khoi tao cac bien tong
    double totalGrossPay = 0.0, totalStateTax = 0.0, totalFederalTax = 0.0, totalFicaWithholdings = 0.0, totalNetPay = 0.0;

    cout << "Nhap thong tin bao cao thanh toan hang tuan (Nhap ma nhan vien 0 de ket thuc):\n";

    while (true) {
        cout << "Ma nhan vien: ";
        cin >> employeeNumber;

        // Kiem tra dieu kien ket thuc
        if (employeeNumber == 0) {
            break;
        }

        cout << "Gross pay: ";
        cin >> grossPay;
        
        // Kiem tra tinh hop le cua gross pay
        if (grossPay < 0) {
            cout << "Gross pay khong hop le. Vui long nhap lai.\n";
            continue;
        }

        cout << "State tax: ";
        cin >> stateTax;
        
        // Kiem tra tinh hop le cua state tax
        if (stateTax < 0 || stateTax > grossPay) {
            cout << "State tax khong hop le. Vui long nhap lai.\n";
            continue;
        }

        cout << "Federal tax: ";
        cin >> federalTax;
        
        // Kiem tra tinh hop le cua federal tax
        if (federalTax < 0 || federalTax > grossPay) {
            cout << "Federal tax khong hop le. Vui long nhap lai.\n";
            continue;
        }

        cout << "FICA withholdings: ";
        cin >> ficaWithholdings;
        
        // Kiem tra tinh hop le cua FICA withholdings
        if (ficaWithholdings < 0 || ficaWithholdings > grossPay) {
            cout << "FICA withholdings khong hop le. Vui long nhap lai.\n";
            continue;
        }

        // Tinh toan net pay va cap nhat cac tong
        double netPay = grossPay - stateTax - federalTax - ficaWithholdings;
        totalGrossPay += grossPay;
        totalStateTax += stateTax;
        totalFederalTax += federalTax;
        totalFicaWithholdings += ficaWithholdings;
        totalNetPay += netPay;
    }

    // Hien thi tong cac so lieu
    cout << "\nTong Gross Pay: $" << totalGrossPay << endl;
    cout << "Tong State Tax: $" << totalStateTax << endl;
    cout << "Tong Federal Tax: $" << totalFederalTax << endl;
    cout << "Tong FICA Withholdings: $" << totalFicaWithholdings << endl;
    cout << "Tong Net Pay: $" << totalNetPay << endl;

    return 0;
}
