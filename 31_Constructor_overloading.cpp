#include<iostream>
using namespace std;
class book{
  public:
  string n;
  string b;
  book(){
    n="-------";
    b="-------";
  }
  book(string x,string y){
    n=x;
    b=y;
  }
  book(string x){
    n=x;
  }
  void showdetail(){
    cout<<"this book name is "<<n<<" branch of "<<b<<endl;
  }
};
int main(){
  book b1;
  b1.showdetail();
  
  book b2("c masterclass","c++ master class");
  b2.showdetail();
  
  book b3("Master book ");
  b3.showdetail();
  

  return 0;
  
}