#include<iostream>
using namespace std;
class employee{
  protected:
  string name;
  int employeeID;

};

class manager: protected employee{
  public:
  void setdata();
  void showdetail();
};
void manager:: setdata({
    name="Abhijeet zingare";
    employeeID=1025;
  }
 void manager:: showdetail(){
   cout<<"Name:"<<name<<endl;
   cout<<"Employee ID:"<<employeeID<<endl;
   cout<<"-----------------------"<<endl;
 }
int main(){
  manager m;
  m.setdata();
  m.showdetail();
  return 0;
}