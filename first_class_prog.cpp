#include<iostream>
using namespace std;

class yusuf//makeing class
{
	char name[30];
	int id;
	
	public:
		void getdata(void);
		void display(void);

};
void yusuf ::getdata(void)
{
	int i;
	for(i=0;i<3;i++)
	{
	
	cout <<"\nname:";
	cin>>name;
	cout<<"\nid";
	cin>>id;
	}
}
void yusuf ::display(void)
{
	cout <<"\nname:"<<name;
	cout<<"\nid:"<<id;
}

int main()
{
	
	yusuf p;
	
	
	
	p.getdata();
	p.display();
	
	return 0;
}
