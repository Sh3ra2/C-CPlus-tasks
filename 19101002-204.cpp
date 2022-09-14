#include <iostream>

using namespace std;

int main()
{
    int arr[100],i,num;
    cout<<"How many numbers do you want for set creation:";
    cin>>num;
    
	cout<<"\n---Enter The Numbers---\n";
    for(i=0; i<num; i++)
	{
        cin>>arr[i];
    }
    
	cout<<"\nFollowing is a Set of Even numbers in the given numbers:\n";
	cout<<"\t\tE={";
    for(i=0; i<num; i++)
	{
        if(arr[i]%2==0)
		{
            cout<<arr[i]<<"   ";
        }
    }
    cout<<"}";
    
	cout<<"\n\nFollowing is a Set of positive Odd Numbers in the given numbers:\n";
    cout<<"\t\tO={";
	for(i=0; i<num; i++)
	{
        if (arr[i]%2==1)
		{
            cout<<arr[i]<<"   ";
        }
    }
    cout<<"}";
    
    cout<<"\n\nFollowing is a Set of Ten's' numbers in the given numbers:\n";
	cout<<"\t\tT={";
    for(i=0; i<num; i++)
	{
        if(arr[i]%10==0)
		{
            cout<<arr[i]<<"   ";
        }
    }
    cout<<"}";
    
    cout<<"\n\nFollowing is a Set of Hundred's' numbers in the given numbers:\n";
	cout<<"\t\tH={";
    for(i=0; i<num; i++)
	{
        if(arr[i]%100==0)
		{
            cout<<arr[i]<<"   ";
        }
    }
    cout<<"}";
}
