Write a C++ program to interchange values of two integer numbers (use call by reference)
*/



#include <iostream>
using namespace std;

void interchange(int &a, int &b){
  int t ;
  t=a;
  a=b;
  b=t;
  cout<<"a: "<<a<<" b: "<<b<<endl;
}


int main() {
  int a, b;
  cout<<"Enter the 2 number:";
  cin>>a>>b;
  cout<<"a: "<<a<<" b: "<<b<<endl;
  cout<<" After change:"<<endl;
  interchange(a, b);
}