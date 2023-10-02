#include <iostream>
#include <vector>
using namespace std;

void bimbimbambam(int arr[], int n) // ham in ra cac so lon hon n
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] > n)
        cout << arr[i] << " ";
    }
}
int main()
{
    const int size = 10;
    int arr[size], n;
    cout << "Nhap 10 so: ";
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    cout << "Nhap so n: "; cin >> n;
    cout << "Cac so lon hon n: ";
    //goi ham
    bimbimbambam(arr, n);
    return 0;
}