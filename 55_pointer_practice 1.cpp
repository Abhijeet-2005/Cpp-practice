#include<iostream>
using namespace std;
class car{
  string name;
  int price;
  public:
  void setData(){
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the price: ";
    cin>>price;
  
  }
  void showData(){
    cout<<"Name:"<< name<<endl;
    cout<<"Price:"<< price<<endl;
  }
};
int main(){
  car c1;
  car *ptr = &c1;
  ptr->setData();
  ptr->showData();
  return 0;
}