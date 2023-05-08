Write a C++ program to read two float numbers. Perform arithmetic binary operations +,-,*,/ on
these numbers using inline function. Display the resultant value.
*/



#include <iostream>
using namespace std;
inline void add(){
  float a, b;
  cout<<"Enter the 2 float number:";
  cin>>a>>b;
 cout<<"Addition of two number is:"<<a+b<<endl;
}

inline void sub(){
  float a, b;
  cout<<"Enter the 2 float number:";
  cin>>a>>b;
 cout<<"subtraction of two number is:"<<a-b<<endl;
}

inline void mul(){
  float a, b;
  cout<<"Enter the 2 float number:";
  cin>>a>>b;
 cout<<"Multiplication of two number is:"<<a*b<<endl;
}

inline void div(){
  float a, b;
  cout<<"Enter the 2 float number:";
  cin>>a>>b;
 cout<<"division of two number is:"<<a/b<<endl;
}


int main() 
{
  add();
  sub();
  mul();
  div();

}