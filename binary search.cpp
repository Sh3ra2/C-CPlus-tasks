#include<iostream>
using namespace std;
int main()
{
	int first=0,middle=0,last,search,n,i,array[50],j,temp;
	
	cout<<"Enter size of array:";
	cin>>n;
	
	cout<<"Enter Your Numbers:\n";
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	
	cout<<"\nEnter Number To Search:";
	cin>>search;
	
	last=n-1;
	
	while(first<=last)
	{
		middle=(first+last)/2;
		
		if(array[middle]<search)
		{
			first=middle+1;
		}
		else if(array[middle]==search)
		{
			cout<<"'"<<search<<"' found at location "<<(middle+1);
			break;
		}
		else
		{
			last=middle-1;
		}
	}
	
	if(first>last)
	{
		cout<<search<<" Not Found";
	}	
}
