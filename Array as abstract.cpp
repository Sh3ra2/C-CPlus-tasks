#include<stdlib.h>
#include<iostream>
using namespace std;

class MyArray
{
public:
	
	int Full_size;
	int Used_size;
	int *ptr;
	
	void createarr(int Fsize, int Usize);
};

void MyArray::createarr(int Fsize, int Usize)
{
	Full_size=Fsize;
	Used_size=Usize;
	int *ptr=(int*) malloc (Fsize*sizeof(int));
}

int main()
{
	MyArray A1;
	A1.createarr(10,5);
}
