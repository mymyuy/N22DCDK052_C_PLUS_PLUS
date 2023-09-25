#include <iostream>
using namespace std;

// chuong trinh chinh
int main()
{
    long double apple;

    // ham sizeof() tra ve kich thuoc cua 1 bien hoac kich thuoc cua 1 kieu du lieu

    cout << "The size of an interger is " << sizeof(int);
    cout << " byte.\n";
    cout << "The size of long interger is " << sizeof(long);
    cout << " byte.\n";
    cout << "An apple can eaten in " << sizeof(apple);
    cout << " byte!\n";
    /*output:
    The size of an interger is 4 byte.
    The size of long interger is 4 byte.
    An apple can eaten in 16 byte!
    */
    return 0;
}