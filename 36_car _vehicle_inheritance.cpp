#include<iostream>
using namespace std;
class vehicle{
  public:
  string brand;
  int year;
  void showDetail(string b,int y){
    brand=b;
    year=y;
    cout<<"Brand:"<<brand<<endl;
    cout<<"Year:"<<year<<endl;
  }
};
class car: public vehicle{
  public:
  string model;
  void showcarDetail(string m){
    model=m;
    cout<<"Model:"<<model<<endl;
    cout<<"_____________________"<<endl;
  }
};
int main(){
  car c1,c2;
  c1.showDetail("Suzuki",2018);
  c1.showcarDetail("S.Presso");
  
  c2.showDetail("Suzuki",2016);
  c2.showcarDetail("Creata");
  
  return 0;
}