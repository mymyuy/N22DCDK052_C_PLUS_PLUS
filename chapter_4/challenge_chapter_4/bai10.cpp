#include <iostream>
using namespace std;

int main()
{
    int thang, nam;
    cout << "Nhap thang va nam: ";
    cin >> thang >> nam;

    switch(thang)
    {
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :{
            cout << "Thang " << thang << " nam " << nam << " co 31 ngay" ;
            break;
        }
        case 4 : case 6 : case 9 : case 11 :{
            cout << "Thang " << thang << " nam " << nam << " co 30 ngay" ;
            break;
        }
        case 2:{
            if ( (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0) )
                cout << "Thang 2 nam " << nam << " co 29 ngay";
            else
                cout << "Thang 2 nam " << nam << " co 28 ngay";
            break;
        }
        default:
            cout << "Thang khong hop le";
    }
    return 0;
}
