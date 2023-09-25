#include <iostream>
using namespace std;

int main()
{
    int a;
    do
    {
        cout << "Nhap 1 so trong khoang tu 1 - 10: "; cin >> a;
        if(a < 1 || a > 10)
            cout << "Nhap sai moi nhap lai!\n";
    } while (a < 1 || a > 10);

    switch (a)
    {
    case 1: {
        cout << "So la ma cua " << a << " la: I";
        break;
    }
    case 2: {
        cout << "So la ma cua " << a << " la: II";
        break;
    }
    case 3: {
        cout << "So la ma cua " << a << " la: III";
        break;
    }
    case 4: {
        cout << "So la ma cua " << a << " la: IV";
        break;
    }
    case 5: {
        cout << "So la ma cua " << a << " la: V";
        break;
    }
    case 6: {
        cout << "So la ma cua " << a << " la: VI";
        break;
    }
    case 7: {
        cout << "So la ma cua " << a << " la: VII";
        break;
    }
    case 8: {
        cout << "So la ma cua " << a << " la: VIII";
        break;
    }
    case 9: {
        cout << "So la ma cua " << a << " la: IX";
        break;
    }
    case 10: {
        cout << "So la ma cua " << a << " la: X";
        break;
    }
    default: {
        break;
    }
    }
    return 0;
}