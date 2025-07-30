#include<iostream>
using namespace std;
class student{
  string name;
  int roll;
  float marks;
  public:
  void setData(){
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the roll number:";
    cin>>roll;
    cout<<"Enter the marks:";
    cin>>marks;
  }
  void displayData(){
    cout<<"Name:"<<name<<endl;
    cout<<"Roll number:"<<roll<<endl;
    cout<<"Marks:"<<marks<<endl;
  cout<<"________________"<<endl;
  }
};
int main(){
  student s[3];
  student *ptr=s;
  for(int i=1;i<3;i++){
    cout<<"Student"<<i<<endl;
    (ptr+i)->setData();
    
  }
  cout<<"----student detail----"<<endl;
  for(int i=1;i<3;i++){
    cout<<"Students "<<i<<endl;
    (ptr+i)->displayData();
  }
  return 0;
}