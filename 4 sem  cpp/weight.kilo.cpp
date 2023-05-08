Create a base class Conversion. Derive three different classes Weight (Gram, Kilogram), Volume
(Milliliter, Liter), Currency (Rupees, Paise) from Conversion class. Write a program to perform
read, convert and display operations. (Use Pure virtual function)
*/

#include <iostream>
using namespace std;

class conversation {
 virtual void convert()=0; 
virtual void display() =0;
};

 class Currency :public conversation{
public:
 int rupees,paise;

 void convert(){
   cout<<"Enter the Rupees and Paise:";
   cin>>rupees>>paise;
   paise += (rupees * 100);
 }

 void display() {
   cout<<"Total paise is:"<<paise<<endl;
 }
};

class Weight:public conversation{
public:
 int gram,kg;

 void convert(){
   cout<<"Enter the gram and kilogram:";
   cin>>kg>>gram;
   gram += (kg * 1000);
 }

 void display() {
   cout<<"Total paise is:"<<gram<<endl;
 }
};

class Volume:public conversation{
public:
 int Milliliter, Liter;

 void convert(){
   cout<<"Enter the Milliliter& Liter :";
   cin>>Milliliter>>Liter ;
   Milliliter += (Liter * 1000);
 }

 void display() {
   cout<<"Total paise is:"<<Milliliter<<endl;
 }
};


int main() {
  Currency c;
  c.convert() ;
  c. display() ;
 
  Weight w;
  w. convert() ;
  w. display () ;

   
  Volume v;
  v. convert() ;
  v. display () ;
  

  
}