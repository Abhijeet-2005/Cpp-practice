#include<iostream>
using namespace std;

  int main(){
    int Percentage;
    cout<<"Enter your Percentage to check your Grade:"<<endl;
    cin>>Percentage;
    if(Percentage>=90){
      cout<<"You got the Grade A+😊"<<endl;
      
    }else if(Percentage>=80){
      cout<<"You got the Grade A😄"<<endl;
      
    }else if(Percentage>=70){
      cout<<"You got the Grade B😀"<<endl;
      
    }else if(Percentage>=60){
      cout<<"You got the Grade C🙂"<<endl;
      
    }else if(Percentage>=50){
      cout<<"You got the Grade D😐"<<endl;
    
       }else{
      cout<<"Your got the 😞Grade: F(Fail)"<<endl;
      
    }
  return 0;
}