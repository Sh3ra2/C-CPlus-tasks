#include<iostream>
using namespace std;

int main()
{
	int count=0;
	char ch;
	cout<<"input text:";
	while(ch!='\n')
	{
		cin.get(ch);
		cout.put(ch);
		count++;
	}
	cout<<"Number of inputs"<<count-1;
}
