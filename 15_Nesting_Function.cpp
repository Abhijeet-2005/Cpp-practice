##include <iostream>
using namespace std;
class circle
{

  float area;
  private:
  float radius;
  public:
  void inputRadius() {
    cout<<"Enter radius of circle: ";
    cin>>radius;
  }
  void calculateArea() {
    area = 3.14*radius*radius;
    cout<<"The area of cirlce is "<<area<<endl;
  }
  void displayArea() {
    calculateArea();
  }
};

int main() {
  circle c1;
  c1.inputRadius();
  c1.displayArea();
  return 0;
}