reate a base class Flight containing protected data members as Flight_no, Flight_Name. Derive
a class Route(Source, Destination) from class Flight. Also derive a class Reservation (no_seats,
class, fare, travel_date) from Route. Write a C++ program to perform the following necessary
functions.
a. Enter details of n reservations.
b. Display reservation details of Business class.
*/
#include<string.h>
#include <iostream>
using namespace std;

class flight {
protected:
int fno;
char fname[30];

void accept() 
{
  cout<<"Enter the Flight No:";
  cin>>fno;

  cout<<"Enter the Flight Name:";
  cin>>fname;
}

void display() {
  cout<<"Flight No:"<<fno<<endl;
  cout<<"Flight Name:"<<fname<<endl;
}
};

class route:protected flight {
protected:
 string source, des;

void getdata(){
  flight:accept();
  cout<<"Enter the Source Place:";
  cin>>source;
  cout<<"Enter the Destination place:";
  cin>>des;
 }

void putdata(){
  flight:display() ;
  cout<<"source place:"<<source<<endl;
  cout<<"Destination place:"<<des<<endl;
 }
};

class reservation:public route{
public :
int  no_seats,fare;
string travel_date;
char cla[59];
void revdata() 
{
  route:getdata();
  cout<<"Enter the No_of_seat:";
  cin>>no_seats;
  cout<<"Enter the Class Name:";
  cin>>cla;
  cout<<"Enter the Fare:";
  cin>>fare;
  cout<<"Enter the t_date:";
  cin>>travel_date;    
}

void revdisplay(reservation a[],int size) {
  for(int i=0;i<size;i++)
    {
      cout<<"\ninfo of the "<<i+1<<" flight"<<endl;
  cout<<"Flight No:"<<a[i].fno<<endl;
  cout<<"Flight Name:"<<a[i].fname<<endl;
cout<<"source place:"<<a[i].source<<endl;
  cout<<"Destination place:"<<a[i].des<<endl;

  cout<<"No_of_seat:"<<a[i].no_seats<<endl;
  cout<<"Class Name:"<<a[i].cla<<endl;
  cout<<"Fare:"<<a[i].fare<<endl;
  cout<<"t_date:"<<a[i].travel_date<<endl;
    }
}


void revdisplayspecific(reservation a[], int size){
  for(int i=0;i<size;i++){
    if(strcmp(a[i].cla,"first") == 0){
    cout<<"Flight No:"<<a[i].fno<<endl;
  cout<<"Flight Name:"<<a[i].fname<<endl;
cout<<"source place:"<<a[i].source<<endl;
  cout<<"Destination place:"<<a[i].des<<endl;

  cout<<"No_of_seat:"<<a[i].no_seats<<endl;
  cout<<"Class Name:"<<a[i].cla<<endl;
  cout<<"Fare:"<<a[i].fare<<endl;
  cout<<"t_date:"<<a[i].travel_date<<endl;
    }
  }
}


};


int main() {
  reservation r[100];
  int n;
  cout<<"Enter the Number of reservation:";
  cin>>n;

  

  for(int i=0;i<n;i++){
    cout<<"\nEnter the "<<i+1<<" flight info"<<endl;
      r[i].revdata();
  }
  
  r[n].revdisplay(r,n);

  cout<<"\nFoundes\n";
  r[n].revdisplayspecific(r, n);
}