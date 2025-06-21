#include<iostream>
using namespace std;
int add(int a, int b) {
  return(a+b);
}
int add(int a, int b, int c) {
  return(a+b+c);
}
int add(double a, int b) {
  return(a+b);
}
int main() {
  cout<<"the sum of 3 and 5 is "<<add(3,5)<<endl;
  cout<<"the sum of 3,5 and 7 is "<<add(3,5,7)<<endl;
  cout<<"the sum of 3.5 and 5 is "<< add(3.5,5)<<endl;
  return 0;
}