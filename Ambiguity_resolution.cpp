#include<iostream>
using namespace std;

class A {
  public:
  void greet() {
    cout << "Hello from A" << endl;
  }
};

class B {
  public:
  void greet() {
    cout << "Hello from B" << endl;
  }
};

class C: public A, public B {
  // Both greet() are inherited → ambiguity
};

int main() {
  C obj;

  // obj.greet(); ❌ This will cause ambiguity

  // ✅ Resolving ambiguity using scope resolution
  obj.A::greet(); // Output: Hello from A
  obj.B::greet(); // Output: Hello from B

  return 0;
}