Write the definition for a class Cylinder that contains data members radius and height. The class
has the following member functions:
a. void setradius(float) to set the radius of data member.
b. void setheight(float) to set the height of data member.
c. float volume( ) to calculate and return the volume of the cylinder.
Write a C++ program to create cylinder object and display its volume.
*/


#include<iostream>
using namespace std;

class cylinder {
public:
 float r, h;

void setradius(float radius){
  r = radius;
}

void setheight (float height) {
  h = height;
}

float volume (){
  return 3.14*r*r*h;
}


};

int main(){
  cylinder c1;
  c1.setradius (6);
  c1.setheight (7); 
  cout<<"volume of the cylinder is:"<<c1.volume();
}