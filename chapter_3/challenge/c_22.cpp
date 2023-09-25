//chuong trinh tinh sin cos tan cua 1 goc
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double angel;
    cout << "Nhap vao so do cua goc: "; cin >> angel;
    cout << "Sin: "  << fixed << setprecision(4) << sin(angel) << endl;
    cout << "Cos: " << fixed << setprecision(4) << cos(angel) << endl;
    cout << "Tan: " << fixed << setprecision(4) << tan(angel) << endl;
    return 0;
}