#include<iostream>
using namespace std;
class animal{
  public:
  string name;
 
  void speak(){
     name="Downey";
  }

};
class Dog: public animal{
    public:
  string bread;
  
  Dog(){
    bread="Labra";
    speak();
  }
};
class petdog: public Dog{
    public:
  string ownername;
  petdog(){
       ownername="Abhi";
  }
 
  void display(){
    
    cout<<"Animal Name:"<<name<<endl;
    cout<<"Bread:"<<bread<<endl;
    cout<<"Owner Name:"<<ownername<<endl;
  }
};
int main(){
  petdog obj;
  obj.display();
  
  return 0;
}