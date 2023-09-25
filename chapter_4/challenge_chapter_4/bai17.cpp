#include <iostream>
using namespace std;

const int n = 3;
void sort(double height[], string day[])
{
    for(int i=0;i<n;i++)
        for(int j=0;j<=n-i-1;j++)
        {
            if(height[j] < height[j+1])
            {
                swap(height[j], height[j+1]);
                swap(day[j], day[j+1]);
            }
        }
}
int main()
{
    string name;
    string day[n]; 
    double height[n];
    cout << "Nhap ten van dong vien: "; getline(cin, name);

    for(int i = 0; i < n; i++)
        do
        {
            cout << "Nhap ngay dat ki luc thu " << i+1 << " : "; getline(cin, day[i]);
            cout << "Nhap ki luc thu " << i+1 << " (m): "; cin >> height[i];
            cin.ignore();
        } while (height[i] < 2 || height[i] > 5);
    sort(height, day);

    for(int i=0;i<n;i++)
    {
        cout << i+1 <<". " << height[i] << "m"  << " : Ngay dat ki luc: " << day[i] << endl;
    }
    
    return 0;
}