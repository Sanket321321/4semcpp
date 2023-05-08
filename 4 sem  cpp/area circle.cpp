Write a C++ program to print area of circle, square and rectangle using inline function. 
*/
#include<iostream>
using namespace std;

inline int circlearea()
{
  int r;
  cout<<"Enter The Radius:";
  cin>>r;
  cout <<"Area of the Circle is:"<<3.14 * r * r<<endl;
  return 0;
}

inline int rectanglearea()
{
  int l, w;
  cout<<"Enter The Length:";
  cin>>l;

 cout<<"Enter the Width:";
  cin>>w;

  cout <<"Area of the Rectangle is:"<< l*w<<endl;
  return 0;
}


inline int squrearea()
{
  int side;
  cout<<"Enter The side:";
  cin>>side;
  cout <<"Area of the Square is:"<< side * side<<endl;
  return 0;
}



int main() 
{
  circlearea() ;
  rectanglearea();
  squrearea();
 return 0;
}