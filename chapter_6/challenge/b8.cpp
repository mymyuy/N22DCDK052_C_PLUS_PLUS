#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int coinToss()
{
    return 1 + rand()%2;
}

int main()
{
    srand(time(NULL));
    int n;
    cout << "Ban muon tung dong xu bao nhieu lan: "; cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        if(coinToss() == 1) cout << "Mat ngua\n";
        else cout << "Mat sap\n";
    }
    return 0;
}