#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double area;

    do {
        // Hiển thị menu
        cout << "Geometry Calculator" << endl;
        cout << "1. Calculate the Area of a Circle" << endl;
        cout << "2. Calculate the Area of a Rectangle" << endl;
        cout << "3. Calculate the Area of a Triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: // Tính diện tích hình tròn
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;

                if (radius < 0) {
                    cout << "Error: Radius cannot be negative." << endl;
                } else {
                    area = 3.14159 * pow(radius, 2);
                    cout << "The area of the circle is: " << area << endl;
                }
                break;
            case 2: // Tính diện tích hình chữ nhật
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;

                if (length < 0 || width < 0) {
                    cout << "Error: Length and width cannot be negative." << endl;
                } else {
                    area = length * width;
                    cout << "The area of the rectangle is: " << area << endl;
                }
                break;
            case 3: // Tính diện tích tam giác
                double base, height;
                cout << "Enter the length of the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;

                if (base < 0 || height < 0) {
                    cout << "Error: Base and height cannot be negative." << endl;
                } else {
                    area = 0.5 * base * height;
                    cout << "The area of the triangle is: " << area << endl;
                }
                break;
            case 4: // Kết thúc chương trình
                cout << "Goodbye!" << endl;
                break;
            default: // Xử lý lựa chọn không hợp lệ
                cout << "Error: Please enter a valid choice (1-4)." << endl;
        }
    } while (choice != 4);

    return 0;
}
