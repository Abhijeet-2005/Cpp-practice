#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> number;
  int num;
  cout<<"Enter the 5 number";
  for(int i=0;i<5;i++){
    cin>>num;
    number.push_back(num);
  }
  cout<<"Double number : ";
  for(int i=0;i<number.size();i++){
    cout<< number[i]*2 <<" "<endl;
  }
  cout<<endl;
  return 0;
}