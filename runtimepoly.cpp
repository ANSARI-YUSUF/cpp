#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class person{
string adhar_card;
string phone_no;
string name;
string gender;
int age;
public:
virtual set_data(){
cout<< "enter name of person: ";
cin>> name;
cout<< "enter adhar card of person: ";
cin>> adhar_card;
cout<< "enter phone number of person: ";
cin>> phone_no;
cout<< "enter gender of person: ";
cin>> gender;
cout<< "enter age of person: ";
cin>> age;
}
virtual get_data(){
cout<<"\n\n"<<"name:"<< name<<"\n adhar no:"<< adhar_card <<"\nphone_no:"<< phone_no << "\ngender:"<<gender <<"\nage:"<<age;
}
};

class student: public person{
int roll_no;
string course;
float fees;
public:
set_data(){
person::set_data();
cout<<"enter roll number of student: ";
cin>> roll_no;
cout <<"enter course of the student: ";
cin>>course;
cout<<"enter fees of the student: ";
cin >> fees;
}
get_data(){
cout<<"\n\n"<<"\nroll no:"<<roll_no<<"\n\ncource:"<<course<<"\n\nfees:"<<fees;
}
};

class faculty: public person{
int id;
string subject;
float salary;
public:
set_data(){
person::set_data();
cout<<"enter faculty id: ";
cin>>id;
cout <<"enter subject of faculty: ";
cin>>subject;
cout<<"enter salary of faculty: ";
cin >> salary;
}
get_data(){
cout<<"\n\n"<<"\n\nid:"<<id<<"\n\nsubject:"<<subject<<"\n\nsalary"<<salary;
}
};
int main(){
person *p [100];
int lim;
cout<<"enter how many no  of data you want to enter:";
cin>>lim;
char op;
for(int i; i<=lim; i++)
{
cout<<"enter s for student and f for faculty: ";
cin>>op;
switch(op){
case 's':
p[i] = new student;
p[i]->set_data();
break;
case 'f':
p[i] = new faculty;
p[i]->set_data();
break;
default:
cout<<"enter valid input";
}

}
for(int i=0;i<=lim;i++)
{
p[i]->get_data();
}
return 0;
}

