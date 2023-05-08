Write a C++ program to create a class employee containing salary as a data member. Write
necessary member functions to overload the operator unary pre and post decrement "--"
for decrementing salary.

*/

#include <iostream>
using namespace std;

class emp{
public :
  double salary;
  emp(double s) {
    salary = s;
  }
void operator --(){
  --salary;
}

void operator --(int){
salary--;
}

void display() {
  cout<<"Salary is:"<<salary<<endl;
}
};



int main() { 
  emp e(3000);
  --e;
 e.display ();

  emp e1 = e;
  e1--;
  e1. display ();

}