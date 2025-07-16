#include<iostream>
using namespace std;

class Student {
protected:
    int roll_number;
public:
    void set_number(int a) {
        roll_number = a;
    }
    void print_number() {
        cout << "Your roll number is: " << roll_number << endl;
    }
};

// Use virtual to avoid duplication of Student
class Test : virtual public Student {
protected:
    float maths, physics;
public:
    void set_marks(float m1, float m2) {
        maths = m1;
        physics = m2;
    }
    void print_marks() {
        cout << "Marks in Maths: " << maths << endl;
        cout << "Marks in Physics: " << physics << endl;
    }
};

class Sports : virtual public Student {
protected:
    float score;
public:
    void set_score(float sc) {
        score = sc;
    }
    void print_score() {
        cout << "Your PT score is: " << score << endl;
    }
};

class Result : public Test, public Sports {
private:
    float total;
public:
    void display() {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main() {
    Result harry;
    harry.set_number(420);
    harry.set_marks(94.0, 90.0);
    harry.set_score(9);
    harry.display();
    return 0;
}