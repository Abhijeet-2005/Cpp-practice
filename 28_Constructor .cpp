#include<iostream>
using namespace std;
class Complex{
  int a,b;
  public:
  Complex(void);
  void printnumber(){
    cout<<"the complex nimber is "<<a<<" + "<<b<<"i";
    
  }
};

 Complex ::Complex(void){
  a=10;
  b=6;
  
}
int main(){
  Complex c1;
  c1.printnumber();
  return 0;
}