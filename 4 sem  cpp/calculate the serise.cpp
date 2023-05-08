Write a C++ program to calculate following series:
(1) + (1+2) + (1+2+3) + (1+2+3+4) + ... +(1+2+3+4+...+n)


*/



#include <iostream>
using namespace std;

int main() {
  int i, j, ans=0, sum,num;
  cout<<"Enter the number:";
  cin>>num;

   for(i=1;i<num;i++){
     sum=0;
     for(j=1;j<=i;j++){
       ans = ans + j;
       sum = sum + j;
       cout<<j;
       if(j<i){
      cout<<" + ";
       }
       
     } 
     cout<<" = "<<sum<<endl;
   }
  cout<<"\nthe sum of the series is:"<<ans<<endl;
}