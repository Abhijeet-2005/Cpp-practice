//"Harry Video #25 - Complex Number (Passing Object)"
// Code from Harry Video #25


#include<iostream>
using namespace std;

class Complex {
    int a, b;

public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    void setDataBySum(Complex o1, Complex o2) {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber() {
        cout << "Complex number is " << a << " + " << b << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c2.setData(3, 4);
    c3.setDataBySum(c1, c2);
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}