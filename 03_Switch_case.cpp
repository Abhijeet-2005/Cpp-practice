#include<iostream>
using namespace std;
int main(){
    int percentage;
    cout<<"Enter your Percentage to check your Grade:"<<endl;
    cin >> percentage;
    if(percentage<0){
        cout<<"invalid percentage! Please enter a value between 0 and 100." << endl;
        return 1;//ye nhi likha.toh invalid wlaa msg bhi ayega aur grade F fail wala bhi 
        }
    switch(percentage/10) {
        case 10:
        case 9:
            cout<<"You got the Grade A+ 😊"<< endl;
            break;
        case 8:
            cout<<"You got the Grade A 😄"<< endl;
            break;
        case 7:
            cout<<"You got the Grade B 😀"<< endl;
            break;
        case 6:
            cout<<"You got the Grade C 🙂"<< endl;
            break;
        case 5:
            cout<<"You got the Grade D 😐"<<endl;
            break;
        default:
            cout<<"You got the 😞 Grade: F (Fail)"<<endl;
            break;
    }
return 0;
}