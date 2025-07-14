#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class simplecalculator {
public:
int a,b;
void getdata(){
cout<<"Enter number 1st:";
cin>>a;
cout<<"Enter number 2nd:";
cin>>b;
}
void menu(){
int choice;
do{
cout<<"----Calculator options---\n";
cout<<"1.Addition: \n";
cout<<"2.Substract:\n";
cout<<"3.Multiple:\n";
cout<<"4.Divide:\n";
cout<<"5.Exit-----\n";

cout<<"Enter your choice:";  
  cin>>choice;  
  switch(choice){  
  case 1: 
  cout<<"Addtion:"<<(a+b)<<endl;  
   
  break;  
  case 2:  
  cout<<"Substraction:"<<(a-b)<<endl; 
break;  
  case 3:  
  cout<<"Multiplicatin:"<<(a*b)<<endl;
  break;  
  case 4: 
      if(b!=0)
  cout<<"Dividion:"<<(a/b)<<endl;  
   else
   cout<<"cannot divide by zero"<<endl;
  break;  
case 5: 
cout<<"---Exiting calculator---"<<endl;
break;
default:
cout<<"invalid choice ";
}
}while(choice!=5);

}
};

class scientificcalculator : public simplecalculator
{
public:
void menu2(){
int choice;
do{
cout<<"----Calculator options for advance---\n";
cout<<"1.power: \n";
cout<<"2.modulus:\n";
cout<<"3.Max:\n";
cout<<"4.Min:\n";
cout<<"5.Exit-----\n";


cout<<"Enter your choice:";  
  cin>>choice;  
  switch(choice){
  case 1:{  
  cout<<"Power:"<<pow(a,b)<<endl;  
break;
  }  
   
  case 2:{  
  cout<<"Modulus:"<<fmod(a,b)<<endl;  
   break;      
  }  
  
  case 3: {  
  cout<<"Maxima:"<<fmax(a,b)<<endl;  
  break;      
  }  
   
  case 4:{  
  cout<<"Minima:"<<fmin(a,b)<<endl;  
        
  } 
  case 5:
cout<<"Exit--calculator"<<endl;  
  break;  
  default:  
  cout<<"invalid choice"<<endl;
   }
 }while(choice!=5);
 }
};
int main(){
scientificcalculator obj1;
obj1.getdata();
obj1.menu();
obj1.menu2();
return 0;
}