#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<iostream>
#include<fstream>

using namespace std;

static int v=0;

class first
{
public:
	
	long long int cel;
	int roll , clas , birt , spas , gadm ;
	char name[30] , fatnam[30] , adres[30] , gend , sname[30];
	float per , utmark,mtmark,etmark,ttmark,ktmark,btmark,ptmark,pstmark,itmark , eomark,momark,uomark,tomark,komark,bomark,pomark,psomark,iomark , ctmark,comark;
	
	void get_data();
	void giv_data();
	void giv_clas();
	void mag_mark();
	void get_mark();
	void show_mark();
	
	int admin_view();
	int student_view();
	
	int geclas()
	{
		return clas; 
	}
	
	int gerol()
	{
		return roll;
	}
	
	int gespas()
	{
		return spas;
	}
	
}set[100];

void first::get_mark()
{
	
	cout<<"Admission No.	   :"; cin>>set[v].spas;
	
	cout<<"\nEnter marks for Urdu\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].utmark;
	cout<<"Enter obtained marks       :"; cin>>set[v].uomark;
	
	cout<<"\nEnter marks for Math\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].mtmark;
	cout<<"Enter obtained marks       :"; cin>>set[v].momark;
	
	cout<<"\nEnter marks for English\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].etmark;
	cout<<"Enter obtained marks       :"; cin>>set[v].eomark;
	
	cout<<"\nEnter marks for Pak.studies\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].pstmark;
	cout<<"Enter obtained marks       :"; cin>>set[v].psomark;
	
	cout<<"\nEnter marks for Islamyat\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].itmark;
	cout<<"Enter obtained marks       :"; cin>>set[v].iomark;
	
	cout<<"\nEnter marks for Physics\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].ptmark;
	cout<<"Enter obtained marks       :"; cin>>set[v].pomark;	
	
	cout<<"\nEnter marks for Biology\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].btmark;
	cout<<"Enter obtained marks       :"; cin>>set[v].bomark;
	
	cout<<"\nEnter marks for Chemistry\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].ktmark;
	cout<<"Enter obtained marks       :"; cin>>set[v].komark;
	
	cout<<"\nEnter marks for Computer\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].ttmark;
	cout<<"Enter obtained marks       :"; cin>>set[v].tomark;
	
	set[v].ctmark = set[v].utmark + set[v].mtmark + set[v].etmark + set[v].ttmark + set[v].ktmark + set[v].btmark + set[v].ptmark + set[v].pstmark + set[v].itmark;
	set[v].comark = set[v].uomark + set[v].momark + set[v].eomark + set[v].tomark + set[v].komark + set[v].bomark + set[v].pomark + set[v].psomark + set[v].iomark;
	
	set[v].per =100*set[v].comark/set[v].ctmark;
	
}

void in_mark()
{
	int a;
	int flag=0;
	ifstream fin;
	fin.open("test.txt",ios::binary|ios::out);
	cout<<"Enter Admission no. you would like to Check:";
	cin>>a;
	
	while(fin.read((char*)&set,sizeof(set)))
	{
		if(a==set[v].gerol())
		{
			set[v].get_mark();
			flag++;
		}
	}
	fin.close();
	if(flag==0)
	{
		cout<<"\n.....Admission no. not found.....\n";
	}
	cout<<"\n.....Data Searching Complete.....\n";
}

void first::show_mark()
{
	
	cout<<"\n\t\t\t\tUrdu\t\t"; 
	cout<<set[v].utmark<<"\t\t";
	cout<<set[v].uomark<<endl;
	
	cout<<"\t\t\t\tMath\t\t"; 
	cout<<set[v].mtmark<<"\t\t";
	cout<<set[v].momark<<endl;
	
	cout<<"\t\t\t\tEnglish\t\t"; 
	cout<<set[v].etmark<<"\t\t";
	cout<<set[v].eomark<<endl;
	
	cout<<"\t\t\t\tPak.studies\t"; 
	cout<<set[v].pstmark<<"\t\t";
	cout<<set[v].psomark<<endl;
	
	cout<<"\t\t\t\tIslamyat\t"; 
	cout<<set[v].itmark<<"\t\t";
	cout<<set[v].iomark<<endl;
	
	cout<<"\t\t\t\tPhysics\t\t"; 
	cout<<set[v].ptmark<<"\t\t";
	cout<<set[v].pomark<<endl;	
	
	cout<<"\t\t\t\tBiology\t\t"; 
	cout<<set[v].btmark<<"\t\t";
	cout<<set[v].bomark<<endl;
	
	cout<<"\t\t\t\tChemistry\t"; 
	cout<<set[v].ktmark<<"\t\t";
	cout<<set[v].komark<<endl;
	
	cout<<"\t\t\t\tComputer\t"; 
	cout<<set[v].ttmark<<"\t\t";
	cout<<set[v].tomark<<endl;
	
	
	cout<<"\nTotal marks    :"<<set[v].ctmark;
	cout<<"\nObtained marks :"<<set[v].comark;
	cout<<"\nPercentage     :"<<set[v].per;
	 
}

void disply_mark()
{
	int a , b , flag=0;
	cout<<"\nShow Grade-Book For Roll No. :";
	cin>>a;
	ifstream fin;
	fin.open("test.txt",ios::in|ios::binary);
	cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"----------------------------------------------------GRADE BOOK----------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\n\t\t\t\t Subject     Total Marks     Obtained Marks";
	cout<<"\n\t\t\t\t---------------------------------------------";
	
	while(fin.read((char*)&set[v],sizeof(set[v])))
	{
		if(a==set[v].gespas())
		{
			set[v].show_mark();
			flag++;
		}
	}
	fin.close();
	
	cout<<"\n------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"-------------------------------------------ALL DATA HAS BEEN DISPLAYED--------------------------------------------------"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
	
	if (flag==0)
	{
		cout<<"\n..There Is No Student With This Admission Number..\n";
	}
}


int main()
{
	int a;
	
	cout<<"Imark\ndisplay\n--->";
	cin>>a;
	if(a==1)
	{
		in_mark();
	}
	else if(a==2)
	{
		disply_mark();
	}
	else
	{
		cout<<"\nError\n";
	}
}
