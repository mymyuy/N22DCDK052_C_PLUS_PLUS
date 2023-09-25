// word game
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, age, city, college, job, animal, petName;
    cout << "Nhap ten cua ban: "; getline(cin, name);
    cout << "Tuoi: "; getline(cin, age);
    cout << "Thanh pho ban dang song: "; getline(cin, city);
    cout << "Truong dai hoc ban hoc: "; getline(cin, college);
    cout << "Cong viec cua ban: "; getline(cin, job);
    cout << "Loai thu cung ban nuoi: "; getline(cin, animal);
    cout << "Ten cua no: "; getline(cin, petName);
    cout << "\nThere once was a person named " << name << " who lived in " << city << ". At the age of " << age << ", " << name << " went to college at " << college << ". " << name << " graduated and went to work as a " << job << ". Then, " << name << " adopted a(n) " << animal << " named " << petName << ". They both lived happily ever after!";
    return 0;
}