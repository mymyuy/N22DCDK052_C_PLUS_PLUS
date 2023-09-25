#include <iostream>
using namespace std;

int main()
{
    int n; // luu so tang cua khach san
    double numOfRooms = 0, NumOfUsedRooms = 0; // luu tong so phong va tong so phong co khach
    do // kiem tra dieu kien so tang ko dc be hon 1
    {
        cout << "Khach san co bao nhieu tang: "; cin >> n;
        if(n < 1)
            cout << "So tang phai lon hon 1" << endl;
    } while (n < 1);
    
    int rooms, usedRooms;
    for(int i = 1; i <= n; i++)
    {
        if(i==13) continue;
        do // kiem tra dieu kien so phong ko dc be hon 10
        {
            cout << "Tang " << i << " co bao nhieu phong: "; 
            cin >> rooms;
            if(rooms < 10)
                cout << "So phong khong be hon 10" << endl;
        } while (rooms < 10);
        do // kiem tra dieu kien so phong da sd ko dc lon hon so phong 1 tang
        {
            cout << "So phong da duoc su dung: "; 
            cin >> usedRooms;
            if(usedRooms > rooms)
                cout << "So phong da su dung ko lon hon tong so phong\n";
        } while (usedRooms > rooms);
        
        numOfRooms += rooms;
        NumOfUsedRooms += usedRooms;
    }
    cout << "So phong cua khach san: " << numOfRooms << endl;
    cout << "So phong co khach: " << NumOfUsedRooms << endl;
    cout << "So phong trong: " << numOfRooms-NumOfUsedRooms << endl;
    cout << "Ti le phong co khach: " << 100*NumOfUsedRooms/numOfRooms << "%";
    return 0;
}