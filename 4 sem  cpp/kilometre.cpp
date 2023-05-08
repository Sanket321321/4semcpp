Write a C++ programto create a class Distance which contains data members as kilometer, meter.
Write a program to perform the following functions
a.To accept distance
b.To display distance
c.To overload > operator to compare two distance
*/
#include <iostream>
using namespace std;

class distance {
   public:
    int km, m;
  void accept () 
   {
      cout<<"Enter the kilometers & meter:";
      cin>>km>>m;
    }
  void display () {
    cout<<"kilometers:"<<km<<endl;
    cout<<"meter is:"<<m<<endl;
    m = m + (km * 1000);
    //cout<<m;
   }
int operator >(distance d){
  return m > d.m;
}
};

int main() {
 class distance d, d1;
  d.accept() ;
  d. display ();

  d1.accept();
  d1.display();

  if(d > d1){ 
    cout<<"d distance is more then d1";
  }
  else{
    cout<<"d distance is less then d1";
  }

}