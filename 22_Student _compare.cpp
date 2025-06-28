#include <iostream>
using namespace std;

class Student {
  public:
    string name;
    int marks;

    void setData(string n, int m) {
        name = n;
        marks = m;
    }
};

int main() {
    Student s1, s2;

    s1.setData("Abhi", 85);
    s2.setData("Ravi", 78);

    if (s1.marks > s2.marks) {
        cout << s1.name << " has more marks than " << s2.name << endl;
    } else if (s1.marks < s2.marks) {
        cout << s2.name << " has more marks than " << s1.name << endl;
    } else {
        cout << "Both " << s1.name << " and " << s2.name << " have same marks." << endl;
    }

    return 0;
}