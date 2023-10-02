#include <iostream>

using namespace std;

const int SIZE = 3;

bool isLoShuMagicSquare(int square[SIZE][SIZE]) {
    // tinh tong dong dau tien de so sanh
    int sum = 0;
    for (int j = 0; j < SIZE; ++j) {
        sum += square[0][j];
    }

    // kiem tra tong cac dong
    for (int i = 1; i < SIZE; ++i) {
        int rowSum = 0;
        for (int j = 0; j < SIZE; ++j) {
            rowSum += square[i][j];
        }
        if (rowSum != sum) {
            return false;
        }
    }

    // Kiem tra tong cac cot
    for (int j = 0; j < SIZE; ++j) {
        int colSum = 0;
        for (int i = 0; i < SIZE; ++i) {
            colSum += square[i][j];
        }
        if (colSum != sum) {
            return false;
        }
    }

    // kiem tra tong duong cheo
    int mainDiagonalSum = 0;
    for (int i = 0; i < SIZE; ++i) {
        mainDiagonalSum += square[i][i];
    }
    if (mainDiagonalSum != sum) {
        return false;
    }

    int secondaryDiagonalSum = 0;
    for (int i = 0; i < SIZE; ++i) {
        secondaryDiagonalSum += square[i][SIZE - 1 - i];
    }
    if (secondaryDiagonalSum != sum) {
        return false;
    }

    return true;
}

int main() {
    int square[SIZE][SIZE];

    cout << "Enter the elements of the 3x3 matrix:\n";

    // nhap ma tran
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> square[i][j];
        }
    }

    // goi ham thuc thi
    if (isLoShuMagicSquare(square)) {
        cout << "The matrix is a Lo Shu Magic Square.\n";
    } else {
        cout << "The matrix is not a Lo Shu Magic Square.\n";
    }

    return 0;
}
