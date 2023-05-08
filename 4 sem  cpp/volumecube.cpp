Write a C++ program to overload function Volume and find Volume of Cube, Cylinder and
Sphere.
*/

#include <iostream>
using namespace std;

int cubevolume(int l, int w,int h){
     int v;
     v = l * w * h;
     return v;
}

float cubevolume(double l, double w, double h){
   double v;
   v = l * w * h;
   return v;
}

float cylindervolume(double r, double h){
   double v;
   v = 3.14 * r * r * h;
   return v;
}

int cylindervolume(int r, int h){
   int  v;
   v = 3.14 * r * r * h;
   return v;
}

int spherevolume(int r, int h){
   int  v;
   v = 3.14 * r * r * h;
   return v;
}

float spherevolume(double r,double h){
   float  v;
   v = 3.14 * r * r * h;
   return v;
}


int main() {
  cout<<"Cube of the volume is:"<<cubevolume(5,8,9)<<endl;

  
  cout<<"cube of the volume is :"<<cubevolume (2.1, 4.5,1.7)<<endl;

cout<<"volume of the cylinder is:"<<cylindervolume(5.1,8.3)<<endl; 

  cout<<"volume of the cylinder is:"<<cylindervolume(5,8)<<endl;

  
  cout<<"volume of the sphere is:"<<spherevolume(5,8)<<endl;

  cout<<"volume of the sphere is:"<<spherevolume(5.3,8.9)<<endl;

}