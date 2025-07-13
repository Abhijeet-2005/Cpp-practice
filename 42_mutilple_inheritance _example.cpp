#include<iostream>
using namespace std;
class teacher{
  public:
  string subject;
  teacher(){
  subject="guitar";
  }
};
class singer{
  public:
   string voicetype;
  singer() {
 
  voicetype="A1";
      
  }
};
class person: public teacher,public singer{
  public:
  string name;
  
  void display(){
      name="Abhi";
  cout<<"Name:"<<name<<endl;
  cout<<"Subject:"<<subject<<endl;
  cout<<"Voice type:"<<voicetype<<endl;
}
  
};
int main(){
   person p;
   p.display();
  return 0;
}