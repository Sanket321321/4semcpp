Create a class Fraction containing data members as Numerator and Denominator.
Write a program to overload operators ++ , -- and * to increment, decrement a Fraction and
multiply two Fraction respectively. (Use constructor to initialize values of an object)
*/

#include <iostream>
using namespace std;

class Fraction {
  public:
   int Numerator , Denominator;
   Fraction(int a, int b) {
     Numerator = a;
     Denominator = b;
   }
  Fraction (){
    
  } ;
  void operator ++(){
    Numerator++;
    Denominator++;
  }

  void operator --(){
    Numerator--;
    Denominator--;
  }

 Fraction operator *(Fraction f){
    Fraction a;
   a.Numerator = Numerator * f. Numerator;
   a.Denominator = Denominator * f. Denominator;
   return a;
  }

void display () {
  cout<<"Numerator:"<<Numerator<<endl;
  cout<<"Denominator"<<Denominator<<endl;
}
};


int main() {
  Fraction f(2, 3);

  cout<<"Before the ++ operator:\n";
 f.display () ;

  cout<<"after the ++ operator:\n";
  ++f;
  f.display();

  cout<<"after the -- operator:\n";
  --f;
  f. display() ;

  cout<<"after the * operator:\n";
  Fraction f1(1, 2);
  Fraction f3;
  f3 = f1 * f;
  f3.display ();
  
}