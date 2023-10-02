#include <iostream>
#include <fstream>

using namespace std;

const int NUM_MONTHS = 3;
const int NUM_DAYS = 30;

void readWeatherData(char weatherData[NUM_MONTHS][NUM_DAYS]) {
    ifstream inputFile("RainOrShine.txt");

    if (!inputFile.is_open()) {
        cerr << "Error opening file.\n";
        exit(1);
    }

    for (int i = 0; i < NUM_MONTHS; ++i) {
        for (int j = 0; j < NUM_DAYS; ++j) {
            inputFile >> weatherData[i][j];
        }
    }

    inputFile.close();
}

void displayWeatherReport(const char weatherData[NUM_MONTHS][NUM_DAYS]) {
    int rainyDays[NUM_MONTHS] = {0};
    int cloudyDays[NUM_MONTHS] = {0};
    int sunnyDays[NUM_MONTHS] = {0};

    for (int i = 0; i < NUM_MONTHS; ++i) {
        for (int j = 0; j < NUM_DAYS; ++j) {
            switch (weatherData[i][j]) {
                case 'R':
                    rainyDays[i]++;
                    break;
                case 'C':
                    cloudyDays[i]++;
                    break;
                case 'S':
                    sunnyDays[i]++;
                    break;
            }
        }
    }

    // In bao cao
    for (int i = 0; i < NUM_MONTHS; ++i) {
        cout << "Month " << i + 1 << ":\n";
        cout << "  Rainy Days: " << rainyDays[i] << "\n";
        cout << "  Cloudy Days: " << cloudyDays[i] << "\n";
        cout << "  Sunny Days: " << sunnyDays[i] << "\n\n";
    }

    // Tìm thang co nhieu ngay mua nhat
    int maxRainyDaysMonth = 0;
    for (int i = 1; i < NUM_MONTHS; ++i) {
        if (rainyDays[i] > rainyDays[maxRainyDaysMonth]) {
            maxRainyDaysMonth = i;
        }
    }

    cout << "The month with the most rainy days is Month " << maxRainyDaysMonth + 1 << " with "
         << rainyDays[maxRainyDaysMonth] << " rainy days.\n";
}

int main() {
    char weatherData[NUM_MONTHS][NUM_DAYS];

    // doc du lieu tu file
    readWeatherData(weatherData);

    // hien thi bao cao 
    displayWeatherReport(weatherData);

    return 0;
}
