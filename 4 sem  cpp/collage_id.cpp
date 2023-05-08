Create a class College containing data members as College_Id, College_Name,
Establishment_year, University_Name. Write a C++ program with following functions
a. Accept n College details
b. Display College details of specified University
c. Display College details according to Establishment year (Use Array of Objects and
Function Overloading).
*/



#include<string.h>
#include <iostream>
using namespace std;
class college {
public:
int College_Id; 
char College_Name[30],
Establishment_year[30], University_Name[30];

void accept();
void displaydetails(college[],char[] ,int); 
void displaydetails(college[],int); 
};

//Accept n College details
void college::accept() {

  cout<<"Enter the College Id:";
  cin>>College_Id;

  cout<<"Enter the college Name:";
  cin>>College_Name;

  cout<<"Enter the University Name:";
  cin>>University_Name;


  cout<<"Enter the Establishment_year:";
  cin>>Establishment_year;
} 

//Display College details of specified University
void college::displaydetails(college a[],char name[], int size){

  for(int i=0;i<size;i++) {
    if(strcmp (a[i].University_Name,name)==0)
    {
      cout<<"College Id:"<<a[i].College_Id<<endl;

      cout<<"College Name:"<<a[i].College_Name<<endl;

      cout<<"University_Name:"<<a[i].University_Name<<endl;

      cout<<"Establishment_year:"<<a[i].Establishment_year<<endl;
    }
  }
}

//Establishment year
void college::displaydetails(college c[],int size){

  college y;
  for(int i=0;i<size-1;i++)
    {
      for(int j=0;j<size-i-1;j++){ 
        if(c[j].Establishment_year <  c[j+1].Establishment_year){
         y =  c[j];
        c[j] = c[j+1];
        c[j+1]= y;
        }
      }
    }
   for(int i=0;i<size;i++) {
      cout<<"College Id:"<<c[i].College_Id<<endl;

      cout<<"College Name:"<<c[i].College_Name<<endl;

      cout<<"University_Name:"<<c[i].University_Name<<endl;

      cout<<"Establishment_year:"<<c[i].Establishment_year<<endl;
    }
}

int main() 
{
  college c[50];
  int n=2;

  for(int i=0;i<n;i++){
    c[i].accept() ;
  }

  c[n].displaydetails(c, "sppu",n);
  c[n].displaydetails(c, n) ;
}