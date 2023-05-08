Write a C++ program to define a class Bus with the following specifications: Bus No, Bus
Name, No of Seats, Starting point, Destination .Write a menu driven program by using
appropriate manipulators to
a. Accept details of n buses.
b. Display all bus details.
c. Display details of bus from specified starting point to destination

*/
#include<string.h>
#include<iostream>
using namespace std;

class Bus{
public:
int Bus_No,No_of_Seats;
char Bus_Name[20],Starting_point[20], Destination[20];

void display(Bus[], int);
void displayinfo(Bus[], int);
void accept (){
  cout<<"Enter the Bus no:";
  cin>>Bus_No;
  cout<<"Enter the No of seat:";
  cin>>No_of_Seats;
  cout<<"Enter the Bus Name:";
  cin>>Bus_Name;
  cout<<"Enter the Starting point:";
  cin>>Starting_point;
  cout<<"Enter the destination:";
  cin>>Destination; 
 }
};

void Bus::display(Bus b[], int n){
   for(int i=0;i<n;i++){
     cout<<"\ninformation of "<<i+1<<" Bus"<<endl;
     cout<<"Bus No:"<<b[i].Bus_No<<endl;
     cout<<"Bus Name:"<<b[i].Bus_Name<<endl;
     cout<<"Bus no of seat:"<<b[i].No_of_Seats<<endl; 
     cout<<"Bus Starting Point:"<<b[i].Starting_point<<endl;
     cout<<"Bus Destination Point:"<<b[i].Destination<<endl;
   }

}

void Bus::displayinfo(Bus b[], int n){
  char s[20],d[20];
  cout<<"Enter the starting and destination point to find the bus:";
  cin>>s>>d;

  for(int i=0;i<n;i++){
    if(strcmp(b[i].Starting_point,s)==0 && strcmp(b[i].Destination,d)==0){
    cout<<"\nfound information of "<<i+1<<" Bus"<<endl;
     cout<<"Bus No:"<<b[i].Bus_No<<endl;
     cout<<"Bus Name:"<<b[i].Bus_Name<<endl;
     cout<<"Bus no of seat:"<<b[i].No_of_Seats<<endl; 
     cout<<"Bus Starting Point:"<<b[i].Starting_point<<endl;
     cout<<"Bus Destination Point:"<<b[i].Destination<<endl;
    }
  }
}





int main() {
  int n;
  Bus b[50]; 
  cout<<"total bus:";
  cin>>n;

  for(int i=0;i<n;i++){
    cout<<"\nEnter information of the "<<i+1<<" Bus"<<endl;
    b[i].accept();
  }

 b[n].display(b, n);
b[n].displayinfo(b, n);

}