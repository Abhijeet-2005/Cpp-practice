#include<iostream>
using namespace std;

int sum(int n){
  if(n<=1) return 0;
  return n+sum(n-1);
}
int main(){
  int a;
  cout<<"Enter the number you want to sum :";
  cin>>a;
  cout<<"the sum from 1 to  "<< a <<" is "<<sum(a)<<endl;
  
  return 0;
}

