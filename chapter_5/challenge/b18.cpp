#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    // Mo tep de doc du lieu dan so
    ifstream inputFile("People.txt");
    
    if (!inputFile) {
        cout << "Khong the mo duoc tep People.txt." << endl;
        return 1;
    }
    
    cout << "SU TANG TRUONG DAN SO PRAIRIEVILLE" << endl;
    cout << "(Moi * tuong duong 1,000 nguoi)" << endl;
    
    int year, population;
    
    // Doc va hien thi du lieu dan so
    while (inputFile >> year >> population) {
        cout << year << " ";
        cout << setw(population / 1000) << setfill('*') << "*" << endl;
    }
    
    // Dong tep
    inputFile.close();
    
    return 0;
}
