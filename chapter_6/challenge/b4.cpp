#include <iostream>
#include <string>
using namespace std;

const int zone = 5;

int getNumOfAccident(string s)
{
    int n;
    cout << "Nhap so vu tai nan khu vuc " << s << " : ";
    do
    {
        cin >> n;
        if(n < 0)
            cout << "So vu tai nan khong duoc nho hon 0: ";
    } while (n < 0);
    return n;
}
void findLowest(int a[], string b[])
{
    int min = a[0];
    string name;
    for(int i = 1; i < zone; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            name = b[i];
        }
    }
    cout << "Khu vuc co so vu tai nan it nhat: " << name << endl;
}
int main()
{
    string name[] = {"Bac", "Nam", "Dong", "Tay", "Trung tam"};
    int numOfAccident[zone];

    for(int i = 0; i < zone; i++)
    {
        numOfAccident[i] = getNumOfAccident(name[i]);
    }
    findLowest(numOfAccident, name);
    return 0;
}