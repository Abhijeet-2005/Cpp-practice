#include<iostream>
using namespace std;
class employee{
public:
employee(){
cout<<"employee contructor called"<<endl;
}
~employee(){
cout<<"employee destructor called"<<endl;
}
};
class manager:public employee{
public:
manager(){
cout<<"manager contructor called"<<endl;
}
~manager(){
cout<<"manager destructor called"<<endl;
}
};
class developer: public employee{
public:
developer(){
cout<<"developer contructor called"<<endl;
}
~developer(){
cout<<"developer destructor called"<<endl;
}
};
int main(){
manager obj1;
developer obj2;

return 0;
}

