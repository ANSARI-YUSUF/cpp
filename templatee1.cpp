
#include<iostream>
using namespace std;
//deriveing template

template<class t,int size>
class array
{
	t a[size];
		
		public:
			//method for inserion of arrays
			void insert()
			{
				cout<<"\n insert the value in arrays::\n";
				for(int i=0 ; i<size;i++)
				{
					cout<<"enter values:";
					cin>>a[i];
				}
				cout<<"\n\n";
			}
			//method for displaying array
			void display()
			{
				for(int i=0;i<size;i++)
				{
					cout<<a[i]<<",";
				}
			}
			
			//method for sorting the array
			
			void sort()
			{
				for(int i=0;i<size-1;i++)
				{
					for(int j=size-1;i<j;j--)
					{
						if(a[j]<a[j-1])
						{
							swap(a[j],a[j-1]);
						}
					}
				}
			}
};
int main()
{
	cout<<"hello world";
	//for int template
	array<int,4> arr;
	arr.insert();
	cout<<"before sorting:";
	arr.display();
	arr.sort();
	cout<<"\n\n\nafter sorting:";
	arr.display();
	
	
	//for float template
		array<float,4> farr;
	farr.insert();
	cout<<"before sorting:";
	farr.display();
	farr.sort();
	cout<<"\n\n\nafter sorting:";
	farr.display();
	
		
	//for char template
		array<char,4> carr;
	carr.insert();
	cout<<"before sorting:";
	carr.display();
	carr.sort();
	cout<<"\n\n\nafter sorting:";
	carr.display();
	
	return 0;
}
