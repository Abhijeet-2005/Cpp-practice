#include<iostream>
using namespace std;

int main(){
  int* ptr = new int; // dyanamically allocate memory
  *ptr=10; // assign value
  
  cout<<"the value  "<<*ptr<<endl;
  delete ptr; //free memory
  ptr=nullptr; // good practice
  
  
  retrun 0;
}