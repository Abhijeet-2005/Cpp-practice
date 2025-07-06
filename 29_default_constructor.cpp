#include<iostream>
using namespace std;
class student {
  string name;
  int roll;
  string deparment;
  string yes;
  public:
  student(void);
  void showdetails() {
    cout<<"Enter 'yes' if you want detail:";
    cin>>yes;
    if(yes == "yes") {
      cout<<"Student Name"<<name<<endl;
      cout<<"Roll number : "<<roll<<endl;
      cout<<"Deparment of student:"<<deparment<<endl;
    }
    else {
      cout<<"----invalid input please enter 'yes' ----"<<endl;
    }
  }
};
student ::student(void) {

  name = "Abhijeet Zingare";
  roll = 2;
  deparment = "CSE-Aiml";

}
int main() {
  student obj;
  obj.showdetails();

  return 0;
}