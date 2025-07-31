#include<iostream>
using namespace std;
class course{
  protected:
    string title;
    float rating;
    public:
    course(string t,float R):title(t),rating(R){}
    virtual void info()=0;
};
class codingcourse: public course{
  int video;
  public:
  codingcourse(string s,float R,int v): course(s,R),video(v){}
  void info(){
    cout<<"Video Title:"<<title<<endl;
    cout<<"Rating:"<<rating<<"/5"<<endl;
    cout<<"no.of video :"<<video<<endl;
  }
  
};
class desgincourse : public course{
  int price;
  public:
  desgincourse(string s,float R,int p): course(s,R),price(p){}
  void info(){
    cout<<"Design Title:"<<title<<endl;
    cout<<"Rating:"<<rating<<"/5"<<endl;
    cout<<"Price :"<<price<<endl;
  }
};
int main(){
  course *c1= new codingcourse("CPP Master classes",4.7,56);
  course *c2= new desgincourse("Gem da classe",4.8,2570);
  c1->info();
  c2->info();
  return 0;
}