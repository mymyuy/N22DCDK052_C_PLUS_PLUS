#include <iostream>
#include <string>

using namespace std;

class IFace {
public:
    virtual void show() = 0;
    virtual IFace* clone() = 0;
    virtual ~IFace() {}
};

class Face : public IFace {
private:
    string shape;

protected:
    string getShape();

public:
    Face() : shape("") {} // Thêm hàm tạo mặc định
    Face(string sh) : shape(sh) {}

    void show() override {
        cout << "Shape: " << shape << endl;
    }

    IFace* clone() override {
        return new Face(*this);
    }
};

class EyedFace : public IFace {
private:
    static int objectCount;
    string shape;
    int eyes;

public:
    EyedFace(string sh, int e) : shape(sh), eyes(e) {
        objectCount++;
    }

    ~EyedFace() {
        objectCount--;
    }

    void show() override {
        cout << "Shape: " << shape << ", Eyes: " << eyes << endl;
    }

    IFace* clone() override {
        return new EyedFace(*this);
    }

    static int getObjectCount() {
        return objectCount;
    }
};

int EyedFace::objectCount = 0;

void testFace(IFace* fc) {
    IFace* a[3] = { fc, fc->clone(), fc->clone() };
    for (int i = 0; i < 3; i++) {
        a[i]->show();
    }
    cout << "The same 3 lines?" << endl;
}

int main() {
    Face fc;
    Face fc1("Rectangle");
    testFace(&fc1);

    EyedFace ef1("Round", 2);
    testFace(&ef1);

    // Kiểm tra số lượng đối tượng EyedFace
    cout << "Number of EyedFace objects: " << EyedFace::getObjectCount() << endl;

    return 0;
}
