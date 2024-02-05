#include<iostream>
using namespace std;

int main()
{
	int a[4][3];
//	cout<<"hello";
for(int i=0;i<4;i++)
{
	for(int j=0;j<3;j++)
	{
		cin>>a[i][j];
		
	}
	cout<<"\n";
	}
	cout<<"\n\n";
	
	for(int i=0;i<4;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<a[i][j]<<" ";
				
			}
	cout<<"\n";
	}
	int zero,nonzero;
	//spare matrix 4 3 4
	for(int i=0;i<4;i++)
	{
		for(int j=0;i<3;i++)
		{
			if(a[i][j]!=0)
			{
				nonzero=nonzero+1;
			}
			else{
				zero=zero+1;
			}
		}
	}

		int sparse[nonzero][3],k;
		
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(a[i][j]!=0)
				{
					sparse[k][0]=i;
					sparse[k][1]=j;
					sparse[k][2]=a[i][j];
					k++;
					
				}
			}
		}
		
		cout<<"sparse matrix:\n";
			for(int i=0;i<nonzero;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<a[i][j]<<" ";
				
			}
			cout<<"\n";
		}
	
	return 0;
}
