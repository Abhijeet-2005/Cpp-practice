#include<iostream>
#include<string>
using namespace std;
class Library;
class Student {
  string name;
  public:
  void setnameS() {

    cout<<"Enter student name:";
    cin>>name;

  }
  friend void issuedbook(Student s, Library l);
};
class Library {
  string booktitle;
  public:
  void setnameB() {

    cout<<"Enter the book name:";
    cin>>booktitle;

  }
  friend void issuedbook(Student s, Library l);
};
void issuedbook(Student s, Library l) {
  cout<<"Student "<<s.name<<" has issused the book "<<l.booktitle;
}
int main() {
  Student s1;
  Library b1;
  s1.setnameS();
  b1.setnameB();

  issuedbook(s1, b1);


  return 0;
}