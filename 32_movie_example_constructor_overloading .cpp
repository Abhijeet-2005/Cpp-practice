#include<iostream>
#include<string>
using namespace std;
class movie {
  string name;
  string director;
  int dur;
  public:

  movie(){
    name = "No seltected movie";
    director="N/A";
    dur=0;
  }
  movie(string n){
    name = n;
    director="N/A";
    dur=140;
  }
  movie(string n, string d, int du) {
    name = n;
    director = d;
    dur = du;
  }
  void showdetail() {
    cout<<"Movie name:"<< name<<endl;
    cout<<"Director:"<< director<<endl;
    cout<<"Duration:"<< dur<<" min\n"<<endl;
  }
};
int main() {
  movie m1;
  m1.showdetail();
  
  movie m2("Inception");
  m2.showdetail();
  
  movie m3("Baubhali", "ss rajmoli", 120);
  m3.showdetail();
  return 0;
}