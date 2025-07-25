#include<iostream>
using namespace std;
class book{
    string title;
    float price;
    public:
      void getData(string title,float price){
        this->title=title;
        this->price=price;
        
      }
      void showtData(){
        cout<<"Book title:"<<title<<endl;
        cout<<"Book price:"<<price<<"Rs"<<endl;
        cout<<"----------------------"<<endl;
      }
};
int main(){
  book b1;
  string title;
  float price;
  cout<<"Enter book title:";
        cin>>title;
        cout<<"Enter book price:";
        cin>>price;
           cout<<"----------------------"<<endl;
  b1.getData(title,price);
  b1.showtData(); 
  
  return 0;
}