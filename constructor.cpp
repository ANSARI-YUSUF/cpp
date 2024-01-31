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

};


int main()
{
	num n(10,20);
	num w=num(30,70);
	n.show();
	w.show();
	return 0;
}
