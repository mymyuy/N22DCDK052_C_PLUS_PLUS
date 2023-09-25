#include <iostream>
using namespace std;

string color(string s1, string s2)
{
    if((s1=="red" && s2 == "blue") || (s2=="red" && s1 == "blue")) return "purple";
    if((s1=="red" && s2 =="yellow") || (s2=="red" && s1 =="yellow")) return "organge";
    if((s1=="blue" && s2=="yellow") ||  (s2=="blue" && s1=="yellow"))  return "green";
    return "error";
}
int main()
{
    string s1, s2;
    cout << "Nhap 2/3 mau de tron(red, blue, yellow): "; cin >> s1 >> s2;
    cout << "New color is " << color(s1,s2);
    return 0;
}