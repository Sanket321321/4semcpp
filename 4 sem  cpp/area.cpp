Write a C++ program to create a class Shape with functions to find area of the shape and display
the name of the shape and other essential components of the class. Create derived classes circle,
rectangle and trapezoid each having overridden function area and display. Write a suitable
program to illustrate Virtual Function


*/

#include<iostream>
using namespace std;

class shape{
public:
virtual int area(){
  return 0;
}
virtual int display (){
  return 0;
}
};

class circle:public shape{
float r=4, a;
int area(){
  a = 3.14*r*r;
  return 0;
}

int display() 
{
  cout<<"Area of the circle is:"<<a<<endl;
return 0;

}

};

class ractangle:public shape{
  int w, l, a;
public:
  ractangle(int a, int b){
    w = a;
    l = b;
  }

int area(){ 
  a = l * w;
  return 0;
}

int display () {
  cout<<"Area of the ractangle is:"<<a<<endl;
  return 0;
}
};

class trapezoid:public shape{
public:
int a, b, ans;
trapezoid(int x, int y){
  a = x;
  b=y;
}

int area(){
  ans = ((a+a)/2)*b;
  return 0;
}

int display () 
{
  cout<<"Area of the trapezoid is: "<<ans<<ans;
  return 0;
}

};



int main() 
{
  shape *a, s;
  circle c;
  ractangle r(21, 34);
  trapezoid t(3, 6);
  a = &s;
  a->area();

  a = &c;
  a->area();
  a->display(); 

  a = &r;
  a->area() ;
  a->display() ;

  a = &t;
  a->area() ;
  a->display() ;
  
}