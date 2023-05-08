Write a C++ program to create a class Number which contains two integer data members. Create
and initialize the object by using default constructor, parameterized constructor. Write a
member function to display maximum from given two numbers for all objects.


*/

#include <iostream>
using namespace std;

class number {
public:
 int n1, n2;
 
number(int a, int b){ 
   n1 = a;
   n2 = b;
}

number() {
   n1 = 20;
   n2 = 30;
 } 


int max(){
  if(n1 > n2){
    cout<<"Greater is: "<<n1<<endl;
  }
  else{
    cout<<"Greater is: "<<n2<<endl;
  }
  return 0;
}

};

int main() {

number n;
n.max() ;

number n1(200, 78);
 n1. max() ;
}