#include<iostream>
using namespace std;

class num{

int a;
int b;
	
	public:
		num(int x,int y)
		{
			a=x;
			b=y;
		}
			show()
		{
			cout<<a<<" "<<b;
		}
		num (num &n)
		{
			 a=n.a;
			 b=n.b;
			//cout<<endl<<"sum:"<<sum;
		}
	

};


int main()
{
	num n(10,20);
	
	num t=n;
	n.show();
	cout<<"\n";
	t.show();
	

	return 0;
}
