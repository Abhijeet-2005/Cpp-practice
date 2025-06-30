#include<iostream>
using namespace std;

class Complex {
    int a, b;
    friend int sumComplex(Complex, Complex);

public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }
    void displayData() {
        cout << a << " + " << b << "i" << endl;
    }
};

int sumComplex(Complex o1, Complex o2) {
    return o1.a + o2.a;
}

int main() {
    Complex c1, c2;
    c1.setData(1, 4);
    c2.setData(5, 8);

    c1.displayData();
    c2.displayData();

    cout << "Sum of real parts: " << sumComplex(c1, c2) << endl;
    return 0;
}