Write a C++ program to create a class which contains single dimensional integer array of
given size. Define member function to display median of a given array. (Use Dynamic
Constructor to allocate and Destructor to free memory of an object).
*/

#include <iostream>
using namespace std;

class array{
public:
int *a, z;

//constructor
   array(int n) {
     z=n;
     a = new int (n);
   }

void median(){
  for(int i=0;i<z;i++){
    cout<<"Enter the number:";
    cin>>a[i];
  }
  int m = z/2;
  cout<<"median of the array is:"<<a[m]<<endl;
}

//destructor
  ~array() {
     delete a;
  }

};

int main() {
  array a(5);
  a.median ();
}