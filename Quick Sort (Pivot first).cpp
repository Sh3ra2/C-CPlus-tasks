#include<iostream>
using namespace std;

int partition1(int *a,int start,int end)

{

	int pivot=a[start],p1=start+1,i,temp;

	for(i=start+1;i<=end;i++)
	{
		if(a[i]<pivot)
	 	{
        	if(i!=p1)
      		{  
            	temp=a[p1];
            	a[p1]=a[i];
            	a[i]=temp;
      		}
			p1++;
    	}
	}

        a[start]=a[p1-1];
        a[p1-1]=pivot;

return p1-1;
}

void Quicksort(int *a,int start,int end)
{
	int p1;
	if(start<end)
	{
    	p1=partition1(a,start,end);
		Quicksort(a,start,p1-1);
    	Quicksort(a,p1+1,end);
	}
}

int main()
{
    int n;
    cout<<"Quick Sort In Pivot As First";
    cout<<"\nEnter number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:\n";
    
	for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
     
	Quicksort(a,0,n-1);
      
	cout<<"After Quick Sort the array is:\n";
      
	for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
    }
    
	return 0;
}
