// chuong trinh tinh doanh thu tien ve san van dong
#include <iostream>
using namespace std;

int main()
{
    const int classA = 15, // gia ve hang A
              classB = 12, // gia ve hang B
              classC = 9;  // gia ve hang C
    int sold_A, sold_B, sold_C; // so luong ve ban duoc
    cout << "Enter the number of tickets were sold of class A: "; cin >> sold_A;
    cout << "Enter the number of tickets were sold of class B: "; cin >> sold_B;
    cout << "Enter the number of tickets were sold of class C: "; cin >> sold_C;
    // tinh va in ket qua
    cout << "Income of class A: $" << sold_A*classA << endl;
    cout << "Income of class B: $" << sold_B*classB << endl;
    cout << "Income of class C: $" << sold_C*classC << endl;
    return 0;
}