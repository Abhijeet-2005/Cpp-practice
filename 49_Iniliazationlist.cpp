#include <iostream>
using namespace std;

class Student {
    const int roll;
    string name;
public:
    Student(int r, string n) : roll(r), name(n) {
        cout << "Constructor called\n";
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(101, "Abhi");
    s1.display();
    return 0;
}