#include<iostream>
using namespace std;


class ashis;
class yusuf{
	int a=100;
	friend void datti(yusuf,ashis);
};

class ashis{
	int b=1000;
	friend void datti(yusuf,ashis);
};

void datti(yusuf y,ashis as)
{
	cout<<"sum:"<<y.a+as.b;
}


int main ()
{
	yusuf y1;
	ashis a1;
datti(y1,a1);
	return 0;
	
}

