#include<iostream>
using namespace std;
class book{
  string title;
  string author;
  public:
  // parametarized constructor
  book(string t,string a){ 
    title=t;
    author=a;
  }
  //copy conatructor
  book(const book &b){
    title=b.title;
    author=b.author;
   
  }
  void display(){
    cout<<"The book title:"<< title<<endl;
    cout<<"Author Name:"<< author<<endl;
     cout<<"-------------------------"<<endl;
  }
};

int main(){
  book b1("Trust","Ravi sagar");
  book b2=b1;
  b1.display();
  b2.display();
  return 0;
  
}