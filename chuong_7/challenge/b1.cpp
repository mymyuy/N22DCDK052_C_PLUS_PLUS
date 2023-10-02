#include <iostream>
using namespace std;
#define n 10

void find_largest_smallest(double a[], double &l, double &s) // ham so lon nhat, nho nhat
{
    l = s = a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i] > l) l = a[i];
        if(a[i] < s) s = a[i];
    }
}
int main()
{
    double nums[n], largest, smallest;
    cout << "Nhap 10 so: ";
    for(int i=0; i < n; i++)
    {
        cin >> nums[i];
    }
    // goi ham
    find_largest_smallest(nums, largest, smallest);
    cout << "So lon nhat: " << largest << endl << "So nho nhat: " << smallest << endl;
    return 0;
}