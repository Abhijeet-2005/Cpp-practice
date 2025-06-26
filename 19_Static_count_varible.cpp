// main.cpp
#include <iostream>
using namespace std;

class Student {
    int roll;
    static int count;

public:
    void setData() {
        cout << "Enter Roll No: ";
        cin >> roll;
        count++;
    }

    void getData() const {
        cout << "Roll No: " << roll << endl;
    }

    static void showCount() {
        cout << "Total students: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2;
    s1.setData();
    s2.setData();
    s1.getData();
    s2.getData();
    Student::showCount();
    return 0;
}