#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    string fileName;
    cout << "Enter the file name: ";
    cin >> fileName;

    ifstream inputFile(fileName);

    if (!inputFile.is_open()) {
        cerr << "Error opening file.\n";
        return 1;
    }

    vector<double> numbers;
    double number;

    // doc du lieu tu file
    while (inputFile >> number) {
        numbers.push_back(number);
    }

    inputFile.close();

    if (numbers.empty()) {
        cerr << "No numbers found in the file.\n";
        return 1;
    }

    // tim so nho nhat va lon nhat
    double minNumber = numbers[0];
    double maxNumber = numbers[0];
    double total = 0;

    for (double num : numbers) {
        if (num < minNumber) {
            minNumber = num;
        }
        if (num > maxNumber) {
            maxNumber = num;
        }
        total += num;
    }

    // tinh trung binh
    double average = total / numbers.size();

    // hien thi ket qua
    cout << "Lowest number: " << minNumber << endl;
    cout << "Highest number: " << maxNumber << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;

    return 0;
}
