#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std; 

struct myArray
{
	int total_size;
	int used_size;
	int *ptr;
};

void createarr(struct myArray *a, int Tsize, int Usize)
{
	a->total_size=Tsize;
	a->used_size=Usize;
	a->ptr=(int *)malloc(Tsize*sizeof(int)); 
}

void GetVal(struct myArray *a)
{
	cout<<"Enter Values:\n";
	for(int i=0;i<a->used_size;i++)
	{
		cin>>a->ptr[i];
	}
}

void Show(struct myArray *a)
{
	cout<<"\nValues in array are:\n";
	for(int i=0;i<a->used_size;i++)
	{
		cout<<a->ptr[i]<<"\n";
	}
}

int main()
{
	struct myArray M;
	createarr(&M,10,5);
	GetVal(&M);
	Show(&M);
	return 0;
}
