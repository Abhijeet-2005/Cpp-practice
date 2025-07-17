#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator {
  protected:
  float a,
  b;
  public:
  void setData(float x, float y) {
    a = x;
    b = y;
  }
  void operations() {
    cout << "The value of a + b is: " << a + b << endl;
    cout << "The value of a - b is: " << a - b << endl;
    cout << "The value of a * b is: " << a * b << endl;
    if (b != 0)
    cout << "The value of a / b is: " << a / b << endl;
    else
    cout << "Division by zero is not allowed." << endl;
  }
};

class ScientificCalculator {
  protected:
  float x;
  public:
  void setScientificData(float z) {
    x = z;
  }
  void scientificOperations() {
    cout << "The value of sin(x) is: " << sin(x) << endl;
    cout << "The value of cos(x) is: " << cos(x) << endl;
    cout << "The value of exp(x) is: " << exp(x) << endl;
    if (x > 0)
    cout << "The value of log(x) is: " << log(x) << endl;
    else
    cout << "Log not defined for non-positive x." << endl;
  }
};

class HybridCalculator: public SimpleCalculator, public ScientificCalculator {
  public:
  void displayAll() {
    cout << "\n--- Simple Calculator Output ---\n";
    operations();
    cout << "\n--- Scientific Calculator Output ---\n";
    scientificOperations();
  }
};

int main() {
  HybridCalculator calc;

  // Set values
  calc.setData(10, 2); // for simple calculator
  calc.setScientificData(2.0); // for scientific calculator

  // Display results
  calc.displayAll();

  return 0;
}