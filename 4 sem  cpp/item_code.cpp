Write a C++ program to create a class Item with data members Item_code, Item_name, Item_Price.
Write member functions to accept and display item information and also display number of objects
created for a class. (Use Static data member and Static member function)
*/



#include <iostream>
using namespace std;
class item{
public:
 int Item_code;
char Item_name[30];
double Price;
static int count;

void accept () {

    cout<<"Enter the Item code:";
    cin>>Item_code;

    cout<<"Enter the Item_name:";
    cin>>Item_name;

    cout<<"Enter the Price:";
    cin>>Price;
}
  static void display(){
    count++;
    //cout<<count<<endl;
  }

 static void totalobj(){
   cout<<"Total obj is:"<<count;
 }

};
int item::count;


int main() {
  item a[40];
  int n=2;

  for(int i=0;i<n;i++)
  {
    a[i].accept();
    item::display();  
  }
  item::totalobj();
}