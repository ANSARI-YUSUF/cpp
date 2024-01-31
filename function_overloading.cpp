#include<iostream>
using namespace std;
//declaring prototype
int fo(int);//i prototype
float fo(float,int);//ii ptype
double fo(double,float,double);//iii ptype
long fo(long,double,int,float);//iiii pty

int main()
{
	cout<< "1="<<fo(10)<<endl;
		cout<< "2="<<fo(10.50,10)<<endl;
			cout<< "3="<<fo(10.90,10.50,10.40)<<endl;
				cout<< "4="<<fo(100l,10.50,10,10.50)<<endl;
	return 0;
}

//function defination
int fo(int a)
{
	
	return (a*a*a);
}
float fo(float b,int c)
{
	return (3.145678*b*c);
	
}
double fo(double d,float e,double f)
{
	return(5.5*d*e*f);
}
long fo(long g,double h,int i,float j)
{
	return(g*h*i*j);
}
