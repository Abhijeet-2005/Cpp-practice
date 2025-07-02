#include <iostream>
using namespace std;
class Rectangle
{
  private:
  int length;
  int breadth;
  friend int calculateArea(Rectangle); // Friend function declared
  public:
  void setData(int l, int b) {
    length = l;
    breadth = b;
  }
};
// Friend function definition
int calculateArea(Rectangle r) {
  return r.length * r.breadth;
}
int main() {
  Rectangle obj;
  obj.setData(2, 5);

  cout << "Area is: " << calculateArea(obj) << endl;

  return 0;
}