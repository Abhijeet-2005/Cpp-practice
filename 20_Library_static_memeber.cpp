#include <iostream>
#include <string>
using namespace std;

class Library {
    string title;
    string authorname;
    static int bookcount;

public:
    void getData() {
        cout << "Enter book title: ";
        cin >> title;
        cout << "Enter author name: ";
        cin >> authorname;
        bookcount++;
    }

    void setData() {
        cout << "Book title: " << title << ", Author: " << authorname << endl;
    }

    static void showCount() {
        cout << "Total books: " << bookcount << endl;
    }
};

int Library::bookcount = 0;

int main() {
    Library l1, l2;

    l1.getData();
    l2.getData();

    l1.setData();
    l2.setData();

    Library::showCount();

    return 0;
}