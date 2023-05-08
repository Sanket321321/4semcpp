Q1.Write a C++ program to create a class Mobile which contains data members as Mobile_Id,
Mobile_Name, Mobile_Price. Create and Initialize all values of Mobile object by using
parameterized constructor. Display the values of Mobile object.
*/
#include<iostream>
#include<string.h>
using namespace std;

class mobile {
public:
int Mobile_Id,Mobile_Price;
string Mobile_Name ;
  mobile(int i, int p, string n) { 
    Mobile_Id=i;
    Mobile_Price=p;
    Mobile_Name = n;
  }

void display () {
  cout<<"Mobile Name:"<<Mobile_Name<<endl;
  cout<<"Mobile Id:"<<Mobile_Id<<endl;
  cout<<"Mobile prize:"<<Mobile_Price<<endl;
}
};




int main() {
  mobile m(1, 15000,"poco");
 m. display() ;

}