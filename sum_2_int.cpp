#include<stdio.h>
#include<iostream>
using namespace std;

int sum(int a)
{
	int num;
	int sum;
	while(a!=NULL)
	{
		num=a%10;
		a=a/10;
		sum=sum+num;
	
		
	}
		return sum;
}

int main()
{
//	cout<<"hello ";

int sum2;

sum2=sum(456);

sum2=sum2+sum(678);
cout<<"sum="<<sum2;


	
	return 0;
}
