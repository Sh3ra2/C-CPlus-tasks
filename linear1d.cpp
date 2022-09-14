#include<iostream>
using namespace std;
int main()
{
	int a[6],i,j,s,flag=0;
	
	
	cout<<"Enter 6 values in  array:\n";
		for(j=0;j<6;j++)
		{
			cin>>a[j];
		}
	
	
	cout<<"Values in array is:\n";
	
		for(j=0;j<6;j++)
		{
			cout<<" "<<a[j];
		}
		cout<<"\n";
	
	cout<<"Enter value you want to search in array:";
	cin>>s;
		for(j=0;j<6;j++)
		{
			if(a[j]==s)
			{
				cout<<"Value'"<<s<<"Has been found at "<<j+1;
			}
		}
	
}
