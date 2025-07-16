#include<iostream>
using namespace std;
class person{
  public:
    string name;
    void setname(string n){
      name=n;
    }
    void printn(){
      cout<<"Name:"<<name<<endl;
    }
};
class employe: virtual public person{
  public:
    long salary;
    void setsalary(long s){
      salary=s;
    }
    void prints(){
      cout<<"salary:"<<salary<<endl;
    }
};
class trainer : virtual public person {
  public:
    int tra;
    void set_t(int t){
      tra=t;
      
    }
    void showt(){
      cout<<"No.of Trainer:"<<tra<<endl;
    }
};
class manager: public employe,public trainer{
  public:
  void display(){
    printn();
    prints();
    showt();
  }
};
int main(){
  manager m1;
    m1.setname("Abhijeet");
    m1.setsalary(20000);
    m1.set_t(9);
    m1.display();
  return 0;
}
