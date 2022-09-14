#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;

int game(char You, char Comp)
{
	if(You=='s' && Comp=='w')
	{
		return 1;
	}
	else if(You=='s' && Comp=='g')
	{
		return -1;
	}
	else if(You=='g' && Comp=='w')
	{
		return -1;
	}
	else if(You=='g' && Comp=='s')
	{
		return 1;
	}
	else if(You=='w' && Comp=='s')
	{
		return -1;
	}
	else if(You=='w' && Comp=='g')
	{
		return 1;
	}
	
}

int main()
{
	int number, Ywin=0, Cwin=0;
	char you,comp;
	
	srand((time(0)));
	number=rand()%100+1;
	if(number<33)
	{
		comp='s';
	}
	else if(number>33 && number<66)
	{
		comp='w';
	}
	else
	{
		comp='g';
	}
	
	do
	{
		system("cls");
		cout<<"\n\n\t\t\tWelcome to the game\n";
		cout<<"Enter \nw for Water \ns for Snake \ng for Gun\n-->";
		cin>>you;
		
		int result=game(you, comp);
		cout<<"\nYou chose "<<you<<" Computer chose "<<comp;
		
		if(you==comp)
		{
			cout<<"\n\n----Match Draw----";
		}
		else if(result==1)
		{
			cout<<"\n\n----You Win----";
			Ywin++;
		}
		else
		{
			cout<<"\n\n----You lose----";
			Cwin++;
		}
		
		cout<<"\nYour score is :"<<Ywin<<":\nComputer's score is :"<<Cwin<<":\n";
		system("pause");
	}while(you);
}
