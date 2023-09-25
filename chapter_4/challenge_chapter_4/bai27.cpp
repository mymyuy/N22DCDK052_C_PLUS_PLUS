#include <iostream>
#include <string>
using namespace std;

int main() {
    string month;
    double minutes_used;

    cout << "Enter the month (e.g., January, February, etc.): ";
    cin.ignore();  // Clear the input buffer
    getline(cin, month);

    // Chuyển đổi tên tháng thành chữ thường để so sánh dễ dàng hơn
    for (char &c : month) {
        c = tolower(c);
    }

    // Khai báo và khởi tạo biến lưu trữ số phút tối đa cho tháng
    double max_minutes = 0;

    // Xác định số phút tối đa cho tháng
    if (month == "january" || month == "march" || month == "may" ||
        month == "july" || month == "august" || month == "october" ||
        month == "december") {
        max_minutes = 31 * 24 * 60;  // 31 days
    } else if (month == "april" || month == "june" || month == "september" ||
               month == "november") {
        max_minutes = 30 * 24 * 60;  // 30 days
    } else if (month == "february") {
        max_minutes = 28 * 24 * 60;  // 28 days (for simplicity, not considering leap years)
    } else {
        cout << "Invalid month name. Please enter a valid month." << endl;
        return 1;
    }

    // Nhập số phút sử dụng và kiểm tra tính hợp lệ
    cout << "Enter the number of minutes used: ";
    cin >> minutes_used;

    if (minutes_used < 0 || minutes_used > max_minutes) {
        cout << "Invalid number of minutes. Please enter a value between 0 and " << max_minutes << " minutes." << endl;
        return 1;
    }

    // Calculate the total cost for each package
    double cost_A = 39.99 + max(0.0, minutes_used - 450) * 0.45;
    double cost_B = 59.99 + max(0.0, minutes_used - 900) * 0.40;
    double cost_C = 69.99;

    // Find the optimal package
    char optimal_package;
    double min_cost = cost_A;

    if (cost_B < min_cost) {
        min_cost = cost_B;
        optimal_package = 'B';
    }

    if (cost_C < min_cost) {
        optimal_package = 'C';
    }

    // Display the optimal package and potential savings
    cout << "The optimal package for you is Package " << optimal_package << "." << endl;

    if (optimal_package == 'A') {
        cout << "You could save $" << cost_B - cost_A << " with Package B." << endl;
        cout << "You could save $" << cost_C - cost_A << " with Package C." << endl;
    } else if (optimal_package == 'B') {
        cout << "You could save $" << cost_C - cost_B << " with Package C." << endl;
    }

    return 0;
}
