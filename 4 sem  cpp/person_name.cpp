.Write a C++ program to create a class Person that contains data members as Person_Name, City,
Mob_No. Write a C++ program to perform following functions:
a. To accept and display Person information
b. To search the Person details of a given mobile number
c. To search the Person details of a given city.
(Use Function Overloading)

*/



#include <iostream>
#include<string.h>
using namespace std;

class person {
public:
char Person_Name[30], City[20],Mob_No[11];



//To accept and display Person information
void accept() 
{
  cout<<"Enter the Person name:";
  cin>>Person_Name;

  cout<<"Enter the city Name:";
  cin>>City;

  cout<<"Enter the Mobile Number:";
  cin>>Mob_No;
  
}

//To search the Person details of a given mobile number 
void display (person p[],int size, char m[]){

for(int i=0;i<size;i++){
  if(strcmp(p[i].Mob_No,m)==0){
    cout<<"Person name:"<<p[i].Person_Name<<endl;

    cout<<"city:"<<p[i].City<<endl;

    cout<<"Mobile No:"<<p[i].Mob_No<<endl;
  }
}
}

//To search the Person details of a given city.
void display (person p[],char m[],int size){

for(int i=0;i<size;i++){
  if(strcmp(p[i].City,m)==0){
    cout<<"Person name:"<<p[i].Person_Name<<endl;

    cout<<"city:"<<p[i].City<<endl;

    cout<<"Mobile No:"<<p[i].Mob_No<<endl;
  }
}
}
};

int main() {
  person p[40];
  int n;

  cout<<"Enter the Total number of person:";
  cin>>n;

  for(int i=0;i<n;i++){
    p[i].accept();
  }

  p[n].display(p, n, "967385");
  p[n].display(p,"pune",n);
}