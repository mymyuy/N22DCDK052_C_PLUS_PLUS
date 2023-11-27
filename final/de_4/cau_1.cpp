#include <iostream>
using namespace std;

class Bike {
    private:
        char* brand; // hiệu xe
    public:
        virtual void move(int t1) {
        cout << brand << ":" << t1*12 << " ";
    Bike(){
		char s[4]="Bike";
		this->brand=new char[5];
		for(int i=0;i<5;i++){
			this->brand[i]=s[i];
		}
	}
	Bike(char s[]){
		this->brand=new char[strlen(s)+1];
		for(int i=0;i<strlen(s);i++){
			this->brand[i]=s[i];
		}
		this->brand[strlen(s)]=0;
	}
	~Bike(){
		if(this->brand){
			delete[] this->brand;
		}
	}
	EBike(char s[]):Bike("EBike"){}
}
};
class EBike : public Bike {
    public: void move(int t2) {
        Bike::move(t2*2);
}
};

void display(Bike& a, EBike& b) {
    a.move(2);
    b.move(2);
}
int main() {
    EBike b1, b2;
    display(b1, b2);
    return 0;
}