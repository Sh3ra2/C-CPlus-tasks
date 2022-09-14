#include<iostream>
using namespace std;

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
		int n1 = m - l + 1;
	int n2 = r - m;

	// Create temp arrays
	int L[n1], R[n2];

	// Copy data to temp arrays L[] and R[]
	for (int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	
	for (int j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	// Merge the temp arrays back into arr[l..r]
	// Initial index of first subarray
	int i = 0;
	// Initial index of second subarray
	int j = 0;

	// Initial index of merged subarray
	int k = l;

	while (i < n1 && j < n2) 
	{
		if (L[i] <= R[j]) 
		{
			arr[k] = L[i];
			i++;
		}
		else 
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy the remaining elements of
	// L[], if there are any
	while (i < n1) 
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of
	// R[], if there are any
	while (j < n2) 
	{
		arr[k] = R[j];
		j++;
		k++;
	} 
}

// l is for left index and r is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int arr[],int l,int r)
{
	if(l>=r)
	{
		return;//returns recursively
	}
	
	int m =l+ (r-l)/2;
	mergeSort(arr,l,m);
	mergeSort(arr,m+1,r);
	merge(arr,l,m,r);
}

// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
}

// Driver code
int main()
{
	
	int arr[100],s;
	cout<<"Enter size of Array:\n";
	cin>>s;
	cout<<"Enter Numbers:\n";
	for(int i=0;i<s;i++)
	{
		cout<<i+1<<": ";
		cin>>arr[i];
	}
	

	cout << "\nGiven array is \n";
	printArray(arr, s);
	
	mergeSort(arr, 0, s - 1);

	cout << "\n\nSorted array is \n";
	printArray(arr, s);
	return 0;
}
