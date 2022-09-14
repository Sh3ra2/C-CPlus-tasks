#include<iostream>
using namespace std;

int size;

int getMaxElement(int a[])
{
    static int i = 0, max =- 9999;  // static int max=a[0] is invalid
    if(i < size)   			// till the last element
    {
        if(max < a[i])
        max = a[i];

        i++;    			// to check the next element in the next iteration
        getMaxElement(a);   // recursive call
    }
    return max;
}

int main()
{
    int arr[1000], max, i;
    cout<<"Enter the size of the array: ";
    cin>>size;
   cout<<"\n\nEnter "<<size<<" elements\n";

    for(i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    max = getMaxElement(arr);   // passing the complete array as parameter
    cout<<"\nLargest element of the array is "<<max<<endl;
    return 0;
}
