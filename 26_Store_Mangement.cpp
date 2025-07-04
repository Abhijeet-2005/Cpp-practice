#include<iostream>
using namespace std;
class Item{
  int productId;
  string productName;
  float productPrice;
  public:
  void getData(){
    cout<<"\nEnter product ID :";
    cin>>productId;
    cout<<"Enter product Price :";
    cin>>productPrice;
    cout<<"Enter product Name :";
    cin>>productName;
  }
  void displayData() const {
    cout<<"/nProduct:"<<productId<<"/nProduct Name:"<<productName<<"/nProduct Price:"<<productPrice<<endl;
  }
};
int main() {
    const int n = 3;
    Item products[n];

    cout << "Enter details for " << n << " products:\n";
    for (int i = 0; i < n; i++) {
        cout << "\n--- Product " << i + 1 << " ---";
        products[i].getData();
    }

    cout << "\n\n--- Product List ---";
    for (int i = 0; i < n; i++) {
        products[i].displayData();
    }
    
    return 0;
}