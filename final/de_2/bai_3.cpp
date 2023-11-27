#include <cmath>
#include <cstdio>

class Function {
public:
    virtual double Value(double x) = 0;
    virtual double Derive(double x) = 0;
};

class Sin : public Function {
public:
    double Value(double x) override {
        return sin(x);
    }

    double Derive(double x) override {
        return cos(x);
    }
};
// lớp Sin mới sau khi sửa
class Sin_v2 : public Function {
private:
    // Khai báo một biến static để lưu trữ đối tượng duy nhất
    static Sin_v2* instance;

    // Khai báo constructor và destructor là private để ngăn việc tạo đối tượng từ bên ngoài
    Sin_v2() {}
    ~Sin_v2() {}

public:
    // Phương thức getInstance để lấy đối tượng duy nhất
    static Sin_v2* getInstance() {
        if (instance == nullptr) {
            instance = new Sin_v2();
        }
        return instance;
    }

    double Value(double x) override {
        return sin(x);
    }

    double Derive(double x) override {
        return cos(x);
    }
};

// Khởi tạo đối tượng static
Sin_v2* Sin_v2::instance = nullptr;

// Hàm hỗ trợ in thông tin về đối tượng Sin_v2
void printSin_v2_Info(double x) {
    Sin_v2* s = Sin_v2::getInstance();
    printf("sin(x) = %f; sin'(x) = %f\n", s->Value(x), s->Derive(x));
}

class Cos : public Function {
public:
    double Value(double x) override {
        return cos(x);
    }

    double Derive(double x) override {
        return -sin(x); // Đạo hàm của cos(x) là -sin(x)
    }
};

double DeriveProduct(Function* f, Function* g, double x) {
    if (f != nullptr && g != nullptr) {
        return f->Derive(x) * g->Value(x) + f->Value(x) * g->Derive(x);
    }
    return 0;
}

double DeriveSum(Function* f, Function* g, double x) {
    if (f != nullptr && g != nullptr) {
        return f->Derive(x) + g->Derive(x);
    }
    return 0;
}

double DeriveQuotient(Function* f, Function* g, double x) {
    if (f != nullptr && g != nullptr) {
        double f_prime = f->Derive(x);
        double g_prime = g->Derive(x);
        double f_value = f->Value(x);
        double g_value = g->Value(x);

        // (f/g)'(x) = (f'(x)*g(x) - f(x)*g'(x)) / (g(x)*g(x))
        return (f_prime * g_value - f_value * g_prime) / (g_value * g_value);
    }
    return 0;
}

double DeriveComposition(Function* f, Function* g, double x) {
    if (f != nullptr && g != nullptr) {
        double f_prime_at_gx = f->Derive(g->Value(x));
        double g_prime = g->Derive(x);

        // (f ∘ g)’(x) = f’(g(x)) * g’(x)
        return f_prime_at_gx * g_prime;
    }
    return 0;
}


int main() {
    double x = 3.14 / 6; // PI/6

    Sin* s = new Sin();
    Cos* c = new Cos();

    printf("sin(x) = %f; sin'(x) = %f\n", s->Value(x), s->Derive(x));
    printf("cos(x) = %f; cos'(x) = %f\n", c->Value(x), c->Derive(x));

    double y1 = DeriveProduct(s, s, x);
    printf("DeriveProduct(s, s, x) = %f\n", y1);

    double y2 = DeriveSum(s, c, x);
    printf("DeriveSum(s, c, x) = %f\n", y2);

    double y3 = DeriveQuotient(s, c, x);
    printf("DeriveQuotient(s, c, x) = %f\n", y3);

    double y4 = DeriveComposition(s, c, x);
    printf("DeriveComposition(s, c, x) = %f\n", y4);

    printSin_v2_Info(x); // su dung lop Sin moi da duoc sua

    delete s;
    delete c;

    return 0;
}
