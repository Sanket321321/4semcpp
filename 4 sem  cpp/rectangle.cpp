Write a C++ program to create two classes Rectangle1 and Rectangle2. Compare area of both the
rectangles using friend function
*/ 

#include<iostream>
using namespace std;

class rac2;

class rac1{
public:
  int l, w, a;
  rac1(int a, int b){
     l = a;
     w = b;
     a = l*w;
  }
friend int com(rac1 ,rac2 );
};

class rac2{ 
public:
int l, w, a;
   
  rac2(int a, int b){
     l = a;
     w = b;
     a = l*w;
  }
};

int com(rac1 r1, rac2 r2){
  if(r1.a > r2.a){
    cout<<"rac1 is greater" ;
  }
  else{
    cout<<"rac2 is greater";
  }
  return 0;
}

int main() 
{
  rac1 r1(3, 6);
  rac2 r2(6,2);
  com(r1, r2);
  return 0;
}