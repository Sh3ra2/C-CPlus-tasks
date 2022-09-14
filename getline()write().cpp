#include<iostream>
using namespace std;
int main()
{
	char name[20];
	cout<<"Enter your name:";
	cin.getline(name,10);
	cout<<"\nIn name for write:";
	cout.write(name,6);
	cout<<"\nIn name in getline:"<<name;
}
