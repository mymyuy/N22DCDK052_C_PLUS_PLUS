#include <iostream>
using namespace std;

const int n = 3;
void sort(string name[], double time[])
{
    for(int i=0; i < n-1;i++)
        for(int j=0; j<n-i-1;j++)
        {
            if(time[j] > time[j+1])
            {
                swap(time[j], time[j+1]);
                swap(name[j], name[j+1]);
            }
        }
}
int main()
{
    string name[n];
    double time[n];
    for(int i=0;i<n;i++){
        cout << "Nhap ten van dong vien thu " << i+1 <<" : "; getline(cin, name[i]);
        cout << "Nhap thanh tich van dong vien thu " << i+1<< " : "; cin >> time[i];
        cin.ignore();
    }
    sort(name, time);
    for(int i=0;i<n;i++)
    {
        cout << "Nguoi ve thu " << i+1 << " : " << name[i] << endl;
    }
    return 0;
}