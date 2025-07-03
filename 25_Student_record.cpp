#include<iostream>
#include<string>
using namespace std;
class Student {
  string name;
  int roll;
  int marks;
  int math = 78;
  int english = 86;
  int science = 98;
  int total;
  public:
  Student() {
    name = "Abhijeet zingare";
    roll = 02;
    total = math+english+science;
  }

  void display() {
    cout<<"Name of Student: "<<name<<endl;
    cout<<"Roll number: "<<roll<<endl;
    cout<<"Marks"<<endl;
    cout<<"Math:"<<math<<endl;
    cout<<"English:"<<english<<endl;
    cout<<"Science:"<<science<<endl;
    cout<<"Total marks "<<total<<endl;

    if(total >= 40) {
      cout<<"PASS"<<endl;
    }
    else {
      cout<<"Fail"<<endl;
      cout << "Percentage: " << (total / 300.0) * 100 << "%" << endl;
    }
  }
  void getAverage() {
    cout<<"The average marks of "<<total/3<<endl;
  }
};
int main() {
  Student obj;
  obj.display();
  obj.getAverage();
  return 0;
}