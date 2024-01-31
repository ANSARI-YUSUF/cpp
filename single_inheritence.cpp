#include<iostream>
using namespace std;

class base{
	int a; // not inheritent
	public:
		int b; // inheritent
		void get_ab();
		int get_a(void);
		void show_a(void);
}; 

class derived : public base  //public inheritent

{
	int c;
	public:
		void mul(void);
		void show(void);
		
};
//----------------------------------------------------
void base::get_ab(void)
{
	a=5;
	b=10;
}
			int base::get_a()
			{
				return a;
			}
			
					void base::show_a()
					{
						cout<<"a= "<<a<<"\n";
					}
					
					
					
//-----------------------------------
	void derived::mul()
	{
		c= b * get_a();
	}

			void derived::show()
			{
				cout<<"a= "<<get_a()<<"\n";
				cout<<"b= "<<b<<"\n";
				cout<<"c= "<<c<<"\n";
			}
//-------------------------------------
int main(){
	derived d;
	
	d.get_ab();
	
	d.mul();
	
	d.show_a();
	
	d.show();
	
	cout<<"----------------\n";
	
	d.b=20;
	
	d.mul();
	
	d.show();
	
	return 0;
}
