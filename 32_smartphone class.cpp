#include<iostream>
#include<string>
using namespace std;

class smartphone {
  string brand;
  string model;
  int price;

  public:
  // Default Constructor
  smartphone() {
    brand = "Not Selected";
    model = "Not Selected";
    price = 0;
  }

  // Constructor with one argument
  smartphone(string b) {
    brand = b;
    model = "Default Model";
    price = 10000;
  }

  // Constructor with three arguments
  smartphone(string b, string m, int p) {
    brand = b;
    model = m;
    price = p;
  }

  void showdetail() {
    cout << "Smart Phone: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Price: " << price << " ₹" << endl;
    cout << "----------------------" << endl;
  }
};

int main() {
  smartphone s1; // default constructor
  smartphone s2("Lava"); // one-parameter constructor
  smartphone s3("Lava", "K2", 20000); // full-parameter constructor

  s1.showdetail();
  s2.showdetail();
  s3.showdetail();

  return 0;
}