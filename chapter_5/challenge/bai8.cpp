#include <iostream>
using namespace std;

int main()
{
    bool flag = true;
    while (flag)
    {
        int lc;
        cout << "Moi chon phep tinh\n1. Cong\n2. Tru\n3. Nhan\n4. Chia\n5. Thoat\n";
        cin >> lc;
        double a, b;
        switch (lc)
        {
        case 1: {
            cout << "Nhap so 2 de thuc hien: "; cin >> a >> b;
            cout << "Ket qua: " << a+b << endl;
            break;
        }
        case 2: {
            cout << "Nhap so 2 de thuc hien: "; cin >> a >> b;
            cout << "Ket qua: " << a-b << endl;
            break;
        }
        case 3: {
            cout << "Nhap so 2 de thuc hien: "; cin >> a >> b;
            cout << "Ket qua: " << a*b << endl;
            break;
        }
        case 4: {
            do
            {
                cout << "Nhap so 2 de thuc hien: "; cin >> a >> b;
                if(b==0)
                    cout << "So thu hai phai khac 0" << endl;
            } while (b==0);
            cout << "Ket qua: " << a/b << endl;
            break;
        }
        case 5: {
            flag = false;
            break;
        }
        default: {
            cout << "Gia tri khong hop le";
            flag = false;
            break;
        }
        }
    }
    return 0;
}