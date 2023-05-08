
create aclass collage conaning data member as collage-id,collage-name



#include <iostream>
using namespace std;


class student{

 char name[30];
 int rno;
 float per;
public:
 void accept() ;
 void display() ;
};

void student::accept() 
{
  cout<<"Enter the student name:";
  cin>>name;
  cout<<"Enter the student roll no:";
  cin>>rno;
  cout<<"Enter the pecentage of the student:";
  cin>>per;
}

void student::display() 
{
  cout<<"name :"<<name<<endl;
  cout<<"roll no:"<<rno<<endl;
  cout<<"percentage:"<<per<<endl;
}

int main()
{
   student s;
  s.accept();
  cout<<endl<<"information of the student :"<<endl;
  s. display();
  return 0;
}