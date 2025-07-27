#include<iostream>
using namespace std;

class Student {
    string name;
    int roll;
    float marks;

public:
    void setData(string name, int roll, float marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }

    void getData() {
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << roll << endl;
        cout << "Marks: " << marks << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    Student s[3];  // array of 3 student objects
    string name;
    int roll;
    float marks;

    for (int i = 0; i < 3; i++) {
        cout << "Enter details for student " << i+1 << ":" << endl;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no.: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;

        s[i].setData(name, roll, marks);
    }

    cout << "\nDisplaying student data:\n";
    for (int i = 0; i < 3; i++) {
        s[i].getData();
    }

    return 0;
}