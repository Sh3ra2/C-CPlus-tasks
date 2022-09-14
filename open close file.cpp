#include<iostream>
#include<fstream>

using namespace std;

class dat
{
private:
	char name[20];
	int item , price , num, stoc;

public:
	
	void enter_data();
	void get_data();
	void show_data();
	void display_in();
}s;

void dat::enter_data()
{
	cout<<".....Enter Product Details....."<<endl;
	cout<<"Item number		:"; cin>>num;
	cout<<"Item name		:"; cin>>name;
	cout<<"Stock			:"; cin>>stoc;
	cout<<"Price(per unit)	:";	cin>>price;
}

void dat::show_data()
{
	cout<<"......Product Details....."<<endl;
	cout<<"Item number		:"<<num<<endl;
	cout<<"Item name		:"<<name<<endl;
	cout<<"Stock			:"<<stoc<<endl;
	cout<<"Price(per unit)	:"<<price<<endl;
}

void dat::get_data()
{
	ofstream fout;
	fout.open("data.txt",ios::out|ios::app|ios::binary);
	s.enter_data();
	fout.write((char*)&s,sizeof(s));
	fout.close();
	cout<<"data saved";
}

void dat::display_in()
{
	ifstream fin;
	fin.open("data.txt",ios::out|ios::binary|ios::app);
	while(fin.read((char*)&s,sizeof(s)))
	{
		s.show_data();
	}
	fin.close();
}

int main()
{
	int a;
	while(1)
	{
		system("cls");
		cout<<"==========HELLO========="
		<<"\n\t1.Write data"
		<<"\n\t2.Read data"
		<<"\n\t3.exit"
		<<"\nEnter choice=>";
		cin>>a;
		switch(a)
		{
			case 1: s.get_data(); 		break;
			case 2: s.display_in(); 	break;
			case 3: exit(0); 			break;
		}
		system("pause");
	}
}
