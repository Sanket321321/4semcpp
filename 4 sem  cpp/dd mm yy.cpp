Write a C++ program to create a class Date which contains three data members as dd,mm,yyyy.
Create and initialize the object by using parameterized constructor and display date in dd-monthyyyy format. (Input: 19-12-2014 Output: 19-Dec-2014) Perform validation for month


*/
#include <iostream>
using namespace std;

class date{
public :
int dd, mm, yyyy;

date (int d, int m, int y){
  this->dd = d;
  this->mm = m;
  this->yyyy = y;
}
void display (){
  switch(mm){
    case 1:
    cout<<dd<<"-jan-"<<yyyy;
    break;

    case 2:
    cout<<dd<<"-Feb-"<<yyyy;
    break;

    case 3:
    cout<<dd<<"-Mar-"<<yyyy;
    break;

    case 4:
    cout<<dd<<"-Apr-"<<yyyy;
    break;

    case 5:
    cout<<dd<<"-May-"<<yyyy;
    break;

    case 6:
    cout<<dd<<"-jun-"<<yyyy;
    break; 

    case 7:
    cout<<dd<<"-july-"<<yyyy;
    break;

    case 8:
    cout<<dd<<"-Aug-"<<yyyy;
    break;
   
    case 9:
    cout<<dd<<"-Sep-"<<yyyy;
    break;

    case 10:
    cout<<dd<<"-Oct-"<<yyyy;
    break;

    case 11:
    cout<<dd<<"-Nov-"<<yyyy;
    break;

    case 12:
    cout<<dd<<"-Dec-"<<yyyy;
    break;

    default:
    cout<<"invalid";
  }
}

};

int main() {
   date d1(12,4,2019);
    d1.display();
cout<<endl;
  date d(19,11,2019);
    d.display();
}