Write a C++ program to subtract two integer numbers of two different classes using friend
function.

*/
#include <iostream>
using namespace std;
class subtract{
public:
int a;
subtract (int x){
  a = x; 
 }
friend void sub(subtract ,subtract );
};

void sub(subtract n, subtract m){ 
  cout<<"Subtract is:"<<n.a - m. a;
}




int main() {
  subtract c(20);
  subtract c1(10);
  sub(c, c1);
}