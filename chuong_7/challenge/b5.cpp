#include <iostream>
#include <limits>

using namespace std;

const int NUM_MONKEYS = 3;
const int NUM_DAYS = 5;

void inputData(double foodData[NUM_MONKEYS][NUM_DAYS]) {
    for (int i = 0; i < NUM_MONKEYS; ++i) {
        cout << "Enter the food data for Monkey " << i + 1 << " (in pounds) for each day of the week:\n";
        for (int j = 0; j < NUM_DAYS; ++j) {
            do {
                cout << "Day " << j + 1 << ": ";
                cin >> foodData[i][j];

                if (foodData[i][j] < 0) {
                    cout << "Please enter a non-negative value.\n";
                }
            } while (foodData[i][j] < 0);
        }
    }
}

double calculateAverage(const double foodData[NUM_MONKEYS][NUM_DAYS]) {
    double total = 0;
    for (int i = 0; i < NUM_MONKEYS; ++i) {
        for (int j = 0; j < NUM_DAYS; ++j) {
            total += foodData[i][j];
        }
    }
    return total / (NUM_MONKEYS * NUM_DAYS);
}

double findLeast(const double foodData[NUM_MONKEYS][NUM_DAYS]) {
    double least = numeric_limits<double>::max();
    for (int i = 0; i < NUM_MONKEYS; ++i) {
        for (int j = 0; j < NUM_DAYS; ++j) {
            if (foodData[i][j] < least) {
                least = foodData[i][j];
            }
        }
    }
    return least;
}

double findGreatest(const double foodData[NUM_MONKEYS][NUM_DAYS]) {
    double greatest = numeric_limits<double>::min();
    for (int i = 0; i < NUM_MONKEYS; ++i) {
        for (int j = 0; j < NUM_DAYS; ++j) {
            if (foodData[i][j] > greatest) {
                greatest = foodData[i][j];
            }
        }
    }
    return greatest;
}

int main() {
    double foodData[NUM_MONKEYS][NUM_DAYS];

    // Nhap du lieu tu nguoi dung
    inputData(foodData);

    // Tinh va in ra kq
    cout << "\nAverage amount of food eaten per day by the whole family of monkeys: " << calculateAverage(foodData) << " pounds\n";
    cout << "The least amount of food eaten during the week by any one monkey: " << findLeast(foodData) << " pounds\n";
    cout << "The greatest amount of food eaten during the week by any one monkey: " << findGreatest(foodData) << " pounds\n";

    return 0;
}
