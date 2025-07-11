#include<iostream>
using namespace std;
class Teacher { //1st Base class
  public:
    string subject;
    void setSubject(string sub) {
        subject = sub;
    }
};

class Coach { // 2nd Base class
  public:
    string sport;
    void setSport(string s) {
        sport = s;
    }
};

class Person : public Teacher, public Coach { // Derivide class
  public:
    string name;
    void setName(string n) {
        name = n;
    }
    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Sport: " << sport << endl;
    }
};

int main() {
    Person p;
    p.setName("Abhijeet");
    p.setSubject("Maths");
    p.setSport("Basketball");
    p.showDetails();

    return 0;
}