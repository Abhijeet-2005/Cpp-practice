#include<iostream>
using namespace std;
int count;
class Home{
  public:
  Home(){
     count++;
     cout<<"The home is constructed.     Number:-"<<count<<endl;
    }
  ~Home(){
      cout<<"The home is destroyed.Number:-"<<count<<endl;
      count--;
    }
};
int main(){
  cout<<"Main started!"<<endl;
   Home h1;
   {
  cout<<"Home is being constructed inside block"<<endl;
  Home h2;
   }
  cout<<"Back to main!"<<endl;
  
  
  return 0;
}