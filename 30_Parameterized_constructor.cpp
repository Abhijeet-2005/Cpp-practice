#include<iostream>
using namespace std;
class student {
  string name;
  int roll;
  string branch;
  public:
  student(string n, int r, string b) {
    name = n;
    roll = r;
    branch = b;

  }
  void showdetails() {
    cout<<"Student Name: "<<name<<endl;
    cout<<"Roll Number: "<<roll<<endl;
    cout<<"Branch: "<<branch<<endl;
  }
};
int main() {
  student s("Abhijeet zinagre", 02, "CSE-Aiml");
  s.showdetails();
  return 0;
}#include<iostream>
using namespace std;
class student {
  string name;
  int roll;
  string branch;
  public:
  student(string n, int r, string b) {
    name = n;
    roll = r;
    branch = b;

  }
  void showdetails() {
    cout<<"Student Name: "<<name<<endl;
    cout<<"Roll Number: "<<roll<<endl;
    cout<<"Branch: "<<branch<<endl;
  }
};
int main() {

  student s1("Abhijeet zinagre", 02, "CSE-Aiml");
  s1.showdetails();
  student s2("Simran Zingare", 12, "CSE-Aiml");
  s2.showdetails();


  student s3("Sayali zinagare", 34, "CSE-Aiml");
  s3.showdetails();

  return 0;
}