#include<iostream>
#include<string>
using namespace std;

class ResultCard {
  public:
  string student_name;
  int roll;
  int englishMarks;
  int mathMarks;
  int scienceMarks;
  float p;
   
  ResultCard(string s, int r, int e, int m, int S){
    student_name = s;
    roll = r;
    englishMarks = e;
    mathMarks = m;
    scienceMarks = S;
    p=e+m+S;
    
  }
  void displayResult() {
    cout<<"Student Name:"<<student_name<<endl;
    cout<<"Roll no. :"<<roll<<endl;
    cout<<"Marks English is "<<englishMarks<<endl;
    cout<<"Marks Math is "<<mathMarks<<endl;
    cout<<"Marks science is "<<scienceMarks<<endl;

  }
  void getPercentage() {
   
     float percentage=(p/300)*100;
     cout<<"Percentage of student is "<<percentage<<endl;
    if(percentage>=40) {
      cout<<"Pass ☺️"<<endl;
    } else {
      cout<<"Fail😔"<<endl;
    }
  }
};
  int main() {
    ResultCard s1("Abhijeet",02,67,78,98);
    s1.displayResult();
    s1.getPercentage();
   

    return 0;
  }