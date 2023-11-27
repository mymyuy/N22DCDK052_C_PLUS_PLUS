#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        a = new int[3];
        for (int i = 0; i < 3; i++)
            a[i] = i + 1;
    }
    ~A() { delete[] a; }

private:
    int *a;
};
void init(A &a) // sua lai ham init
{
    A b;
    a.~A();
    a = b;
}
class Singleton {
public:
    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }

private:
    Singleton() {} 
    ~Singleton() {} 
    Singleton(const Singleton&) = delete; 
    Singleton& operator=(const Singleton&) = delete; 
};
void main()
{
    A obj;
    init(obj);
}