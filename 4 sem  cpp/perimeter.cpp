Write a C++ program to accept length and width of a rectangle. Calculate and display perimeter
as well as area of a rectangle by using inline function.
  */




#include <iostream>
using namespace std;


inline int calculate() {
  int l, w;
  cout<<"Enter the width and length:";
  cin>>l>>w;
  int perimeter ,area;
  area = l * w;
  cout<<"Area of ractangle is:"<<area<<endl;
 perimeter = 2*(l+w);
  cout<<"perimeter of ractangle is:"<<perimeter<<endl;
  return 0;
}


int main() {
  calculate () ;
}