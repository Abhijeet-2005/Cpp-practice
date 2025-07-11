#include<iostream>
using namespace std;
class person{
  public:
  string name;
  int age;
  void showPersonDetail(){
      name="Abhijeet Zingare";
      age=19;
      cout<<"Name:"<<name<<endl;
      cout<<"Age:"<<age<<endl;
  }
};
class student : public person{
  public:
     int rolln;
      void showstudentDetail(){
        rolln=002;
        cout<<"Roll no."<<rolln<<endl;
    
 }
};
class Engineeringstudent: public student{
  public:
  string branch;
  string collegeName;
  void showEngineeringstudentdetail(){
    branch="CSE-AIML";
    collegeName="JIT Nagpur";
    cout<<"Branch"<<branch<<endl;
    cout<<"Collage Name: "<<collegeName<<endl;
        cout<<"--------------"<<endl;
  }
};
int main(){
  Engineeringstudent obj;
  obj.showPersonDetail();
  obj.showstudentDetail();
  obj.showEngineeringstudentdetail();
  
  return 0;
}