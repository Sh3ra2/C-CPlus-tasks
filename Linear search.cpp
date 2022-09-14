#include<iostream>
using namespace std;
int main()
{
	int a[2][3],i,j,s,flag=0;
	
	cout<<"Name: Sheraz Ali\n"
	<<"Roll no: 19101002-204\n"
	<<"Class:BSCS(Grey)3rd semester\n\n";
	
	cout<<"Enter 6 values in 2d array:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"Values in 2d array are:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"Enter value you want to search in 2d array:";
	cin>>s;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==s)
			{
				cout<<"Value'"<<s<<"' has been found at row no."
				<<i+1<<" and column no."<<j+1;
				flag++;
			}
		}
	}
	if(flag==0)
	{
		cout<<"Value not found";
	}
}
