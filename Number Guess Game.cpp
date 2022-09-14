#include<stdlib.h>
#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	int number,guess,nguess=1;		
	srand(time(0));
	number=rand()%100+1;
	cout<<"The random number is __";
	
	cout<<"\nGuess the number b/w 1-100";
	do
	{
		cout<<"\n->";
		cin>>guess;
		
		if(guess==number)
		{
			cout<<"Congrats You have found the number in "<<nguess<<" attempts(*-*)";
		}
		else if(guess<number)
		{
			cout<<"Enter higher number please!\n";
		}
		else if(guess>number)
		{
			cout<<"Enter Lower number please!\n";
		}
		else
		{
			cout<<"Wrong attempt";
		}
		nguess++;
	}while(guess!=number);
	
}
