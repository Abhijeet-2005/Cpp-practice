// Code from CodeWithHarry YouTube video (#23)
// Used for learning and understanding object memory allocation using arrays in C++
#include <iostream>
using namespace std;

class Shop {
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter() {
        counter = 0;
    }

    void setPrice() {
        cout << "Enter ID of item no. " << counter + 1 << ": ";
        cin >> itemId[counter];
        cout << "Enter price of the item: ";
        cin >> itemPrice[counter];
        counter++;
    }

    void displayPrice() {
        cout << "\n--- Item Price List ---\n";
        for (int i = 0; i < counter; i++) {
            cout << "Item ID: " << itemId[i]
                 << " → Price: ₹" << itemPrice[i] << endl;
        }
    }
};

int main() {
    Shop dukaan;
    dukaan.initCounter();

    // Add 3 items (you can increase this if needed)
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();

    // Show all added items
    dukaan.displayPrice();

    return 0;
}