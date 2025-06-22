 #include<iostream>
 #include<string>
using namespace std;
class Books {
  public:
  string title;
  string author_name;
  int pages;
  Books(string t, string a, int p) {
    title = t,
    author_name = a,
    pages = p;
  }
  void showDetails() {
    cout<<"the book name is "<< title<<"and author is "<<author_name<<"pages of book "<<pages<<endl;
  }

};
int main() {
    Books b1("rich dad poor dad","Robert Kiyosaki and Sharon Lechter",568);
    Books b2("think and grow rich ","Napoleon Hill",198);

b1.showDetails();
b2.showDetails();
  return 0;
}