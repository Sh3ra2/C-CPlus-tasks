#include<iostream>
#include<fstream>

using namespace std;

class Student
{
private:
	int admno;
	char name[20];
	char gender;
	int std;
	float marks;
	
public:
	
	void buy();
	void getData();
	void showData();
	int getAdmno(){return admno;}
	
}s;

void Student::getData()
{
	cout<<"\n\n.....Enter Student Details......\n";
	cout<<"Enter Admission No.	: "; 		cin>>admno;
	cout<<"Enter Student Name	: "; 		cin.ignore(); cin.getline(name,20);
	cout<<"Enter Gender		: ";			cin>>gender;
	cout<<"Enter semester		: ";		cin>>std;
	cout<<"Enter CGPA		: "; 			cin>>marks;
	cout<<endl;
}

void Student::showData()
{
	cout<<"\n\n.......Student Details......\n";
	cout<<"Admission No.		: "<<admno<<endl;
	cout<<"Student Name		: "<<name<<endl;
	cout<<"Gender			: "<<gender<<endl;
	cout<<"Semester		: "<<std<<endl;
	cout<<"CGPA			: "<<marks<<endl;
	cout<<endl;
}

void addData()
{
	ofstream fout;
	fout.open("Students.txt",ios::binary|ios::out|ios::app);
	s.getData();
	fout.write((char*)&s,sizeof(s));
	fout.close();
	cout<<"\n\nData Successfully Saved to File....\n";
}

void displayData()
{
	ifstream fin;
	fin.open("Students.txt",ios::in|ios::binary);
	while(fin.read((char*)&s,sizeof(s)))
	{
		s.showData();
	}
	fin.close();
	cout<<"\n\nData Reading from File Successfully Done....\n";
}

void searchData()
{
	int n, flag=0;
	ifstream fin;
	fin.open("Students.txt",ios::in|ios::binary);
	cout<<"Enter Admission Number you want to search : ";
	cin>>n;
	
	while(fin.read((char*)&s,sizeof(s)))
	{
		if(n==s.getAdmno())
		{
			cout<<"The Details of Admission No. "<<n<<" shown herewith:\n";
			s.showData();
			flag++;
		}
	}
	fin.close();
	if(flag==0)
		cout<<"The Admission No. "<<n<<" not found....\n\n";
	cout<<"\n\nData Reading from File Successfully Done....\n";
}

void deleteData()
{
	int n, flag=0;
	ifstream fin;
	ofstream fout;

	fin.open("Students.txt",ios::in|ios::binary);
	fout.open("TempStud.txt",ios::out|ios::app|ios::binary);
	
	cout<<"Enter admission number you want to delete : ";
	cin>>n;
	
	while(fin.read((char*)&s,sizeof(s)))
	{
		if(n==s.getAdmno())
		{
			cout<<"The following admission No. "<<n<<" has been deleted:\n";
			s.showData();
			flag++;
		}
		else
		{
			fout.write((char*)&s,sizeof(s));
		}
	}
	fout.close();
	fin.close();
	if(flag==0)
		cout<<"The Admission No. "<<n<<" not found....\n\n";
	remove("Students.txt");
	rename("tempStud.txt","Students.txt");
}

void modifyData()
{
	int n, flag=0, pos;
	ifstream fio;

	fio.open("Students.txt",ios::in|ios::out|ios::binary);
	
	cout<<"Enter Admission Number you want to Modify : ";
	cin>>n;
	
	while(fio.read((char*)&s,sizeof(s)))
	{
		pos=fio.tellg();   //tellg is used to read data from file to program from current location
		if(n==s.getAdmno())
		{
			cout<<"The Following Admission No. "<<n<<" will be modified with new data:\n";
			s.showData();
			cout<<"\n\nNow Enter the New Details....\n";
			s.getData();
			fio.seekg(pos-sizeof(s));   //seekg is used to move cursor to desired location for reading
			fio.write((char*)&s,sizeof(s));
			flag++;
		}
	}
	fio.close();
	
	if(flag==0)
	{
		cout<<"The Admission No. "<<n<<" not found....\n\n";
	}
}

int main()
{
	int ch;
	do
	{
		system("cls");
		cout<<".................Shop Managment System................\n";
		cout<<"======================================================\n";
		cout<<"0. Exit from Program\n";
		cout<<"1. Add Data\n";
		cout<<"2. Show Data\n";
		cout<<"3. Search Data\n";
		cout<<"4. Delete Data\n";
		cout<<"5. Modify Data\n";
		cout<<"Enter your choice  : ";
		cin>>ch;
		system("cls");
		switch(ch)
		{
			case 1: 
			{
				addData();
			} 
			break;
			case 2: 
			{
				displayData(); 
			}
			break;
			case 3: 
			{
				searchData(); 
			}
			break;
			case 4: 
			{
				deleteData();
			} 
			break;
			case 5: 
			{
				modifyData();
			} 
			break;
		}
		system("pause");
	}while(ch);
}
