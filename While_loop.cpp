#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter your number to create table:";
  cin>>n;
  int i=1;
  while(i<=10){
    cout<<n<<"x"<<i<<"="<<n*i<<endl;
    i++;
  }
  
  return 0;
}