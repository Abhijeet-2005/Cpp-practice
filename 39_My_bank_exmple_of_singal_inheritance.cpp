#include<iostream>
using namespace std;
class Account {
  public:
  string accountholderName;
  long long accountNumber;
  void setaccountDetail();
};
void Account :: setaccountDetail() {
  accountholderName = "Abhijeet z";
  accountNumber = 3339778782982;
}
class savingAccount: public Account {
  public:
  int balance;
  float intrestRate;
  int intrest;
  
  void setsavingaccount();
  void calculateintrestrate();
  void displaydetail();

};
void savingAccount :: setsavingaccount() {
  balance = 10000;
  intrestRate = 6.8;

}
void savingAccount :: calculateintrestrate() {
  intrest = intrestRate*balance;

}
void savingAccount :: displaydetail() {
  cout<<"Name: "<<accountholderName<<endl;
  cout<<"Account number:"<<accountNumber<<endl;
  cout<<" Balance :"<<balance<<endl;
  cout<<"Intrest Rate:"<<intrestRate<<"%"<<endl;
  cout<<"Intrest:"<<intrest<<endl;
}

int main() {
  savingAccount obj;
  obj.setaccountDetail();
  obj.setsavingaccount();
  obj.calculateintrestrate();

  obj.displaydetail();
  return 0;
}