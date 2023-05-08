Write a C++ program to check minimum and maximum of two integer number (use inline
function and conditional operator)
*/

#include <iostream>
using namespace std;
inline int  max() {
  int a, b;
  cout<<"Enter the Two number:";
  cin>>a>>b;
  if(a>b){
  cout<<"greater:"<<a;
  }
else{
  cout<<"greater:"<<b;
}
  return 0;
}

inline int min() {
  int a, b;
  cout<<"\nEnter the Two number:";
  cin>>a>>b;
  if(a<b){
  cout<<"smaller:"<<a;
  }
  else{
    cout<<"smaller:"<<b;
  }
  return 0;
}


int main() {
  max();
  min();
}