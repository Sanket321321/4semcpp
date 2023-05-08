Write a C++ program using class which contains two data members as type integer. Create and
initialize the objects using default constructor, parameterized constructor with default value.
Write a member function to display maximum from given two numbers for all objects

*/
#include <iostream>
using namespace std;
class integer1{
  public:
  int a, b;
  integer1(){
    a = 10;
    b=20;
  }

integer1 (int n1, int n2){
  a=n1;
  b=n2;
}
int maximum (){
  if(a > b)
    cout<<a<<" is maximum number"<<endl;
  else 
    cout<<b<<" is maximum number"<<endl;
  return 0;
}
};



int main() {
  integer1 a;
  a.maximum();

  integer1 i(20, 78);
  i. maximum ();

  
}