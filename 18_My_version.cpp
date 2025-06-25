#include <iostream>
using namespace std;

class Store {
    int productId[10];
    int productPrice[10];
    int totalProduct;

public:
    void start() {
        totalProduct = 0;
    }

    void addProduct() {
        cout << "Enter the Product ID: ";
        cin >> productId[totalProduct];
        cout << "Enter the Product Price: ₹";
        cin >> productPrice[totalProduct];
        totalProduct++;
    }

    void showProduct() {
        cout << "\n🛍️ Product List:\n";
        for (int i = 0; i < totalProduct; i++) {
            cout << "\nProduct ID: " << productId[i];
            cout << "\nProduct Price: ₹" << productPrice[i] << endl;
        }
    }
};

int main() {
    Store c;
    c.start();

    for (int i = 0; i < 2; i++) {
        c.addProduct();
    }

    c.showProduct();

    return 0;
}