#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter array size:";
  cin>>n;
  
  int *arr = new int[n]; // dynamically allocate memory
  
  cout<<"enter "<<n<<" element ";
  for(int i=0; i < n;i++){
    cin >> arr[i];

  }
  cout<<"you entered:";
 for(int i=0; i < n;i++){
    cout<<arr[i]<<" ";

  }
  delete arr;
  arr= nullptr;
  
  return 0;
}
