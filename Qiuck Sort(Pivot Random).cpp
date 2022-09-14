#include <cstdlib>
#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
	// pivot
	int pivot = arr[end];

	// Index of smaller element
	int i = (start - 1);

	for (int j = start; j <= end - 1; j++)
	{
		// If current element is smaller
		// than or equal to pivot
		if (arr[j] <= pivot) {

			// increment index of
			// smaller element
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[end]);
	return (i + 1);
}


int partition_r(int arr[], int start, int end)
{
	// Generate a random number in between
	// start .. end

	int random = start + rand() % (end - start);

	// Swap A[random] with A[end]
	swap(arr[random], arr[end]);

	return partition(arr, start, end);
}


void quickSort(int arr[], int start, int end)
{
	if (start < end) {

		/* pi is partitioning index,
		arr[p] is now
		at right place */
		int pi = partition_r(arr, start, end);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, start, pi - 1);
		quickSort(arr, pi + 1, end);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver Code
int main()
{
	int arr[5];
	cout<<"Enter 5 Numbers To Sort:\n";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}

