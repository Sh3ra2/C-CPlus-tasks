#include<dos.h>
#include<iostream>
#include<fstream>

using namespace std;

static int v=0;

class first
{
public:
	
	long long int cel;
	int roll , clas , birt , spas , ppas;
	char name[30] , fatnam[30] , adres[30] , gend , sname[30];
	float per , utmark,mtmark,etmark,ttmark,ktmark,btmark,ptmark,pstmark,itmark , eomark,momark,uomark,tomark,komark,bomark,pomark,psomark,iomark , ctmark,comark;
	
	void get_data();
	void giv_data();
	void giv_clas();
	void mag_mark();
	void get_mark();
	void show_mark();
	void st_givedata();
	
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


int plus_only(int a)
{
	if(a<0)
	{
		a=-a;
	}
}


int check(int r)

{
    int flag=0;
    ifstream fin("test.txt",ios::in);
    while(!fin.eof())
    {
        fin.read((char*)&set,sizeof(set));
        if(r==set[v].gerol())
        {
            flag=1;
            break;
        }
    }
    fin.close();
    return(flag);
}

void first::get_data()
{
	cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t";
	cout<<".........Enter Student Details........"<<endl;
	cout<<"\t\t\t--------------------------------------\n";
	
	cout<<"\n\t\t\tEnter Admission No.    :";	
	cin>>set[v].roll;
	plus_only(set[v].roll);
	
	cout<<"\n\t\t\tEnter Name             :";	
	cin.ignore(); 
	cin.getline(set[v].name,20);
	
	cout<<"\n\t\t\tEnter Father's Name    :";	
	cin.getline(set[v].fatnam,20);
	
	cout<<"\n\t\t\tEnter Class            :";	
	cin>>set[v].clas;
	plus_only(set[v].clas);
	
	cout<<"\n\t\t\tEnter Gender (M/F)     :";	
	cin>>set[v].gend;
	
	cout<<"\n\t\t\tEnter Cell No          :";	
	cin>>set[v].cel;
	plus_only(set[v].cel);
	
	cout<<"\n\t\t\tEnter DOB (DDMMYYYY)   :";	
	cin>>set[v].birt;
	plus_only(set[v].birt);
	
	cout<<"\n\t\t\tEnter Address          :";	
	cin.ignore(); 
	cin.getline(set[v].adres,30);
	
	cout<<"\n\t\t\tEnter Password         :";   
	cin>>set[v].ppas; 
	plus_only(set[v].ppas);

}

void writ_data()
{
	int r,flag;
    ofstream fout("test.txt",ios::app);
    cout<<"Enter Admission No. For Data Entry:";
    cin>>r;
    plus_only(r);
    flag=check(r);
    
    if(flag)
    {
        cout<<"\n Sorry..!Roll number Already exist\n";
	}
	else
    {
		ofstream fout;
		fout.open("test.txt",ios::binary|ios::out|ios::app);
		set[v].get_data();
		fout.write((char*)&set,sizeof(set));
		fout.close();
		cout<<"\n\nData Successfully Saved To File....\n";
	}
}

void first::giv_data()
{
	
	cout<<"\n.................................................Student details........................................................" << endl;
	cout<<"\n\t\t\t\t\t\tAdmission no. :" << set[v].roll <<endl;
	cout<<"\t\t\t\t\t\tName          :" << set[v].name <<endl;
	cout<<"\t\t\t\t\t\tFather name   :" << set[v].fatnam <<endl;
	cout<<"\t\t\t\t\t\tClass         :" << set[v].clas <<endl;
	cout<<"\t\t\t\t\t\tGender        :" << set[v].gend <<endl;
	cout<<"\t\t\t\t\t\tCell No       :" << set[v].cel <<endl;
	cout<<"\t\t\t\t\t\tDOB           :" << set[v].birt << endl;
	cout<<"\t\t\t\t\t\tAddress       :" << set[v].adres<<endl<<endl ;
	cout<<"\n\t\t\tPassword          :"<< set[v].ppas<<endl<<endl;
}

void first::st_givedata()
{
	cout<<"\n.................................................Student details........................................................" << endl;
	cout<<"\n\t\t\t\t\t\tAdmission no. :" << set[v].roll <<endl;
	cout<<"\t\t\t\t\t\tName          :" << set[v].name <<endl;
	cout<<"\t\t\t\t\t\tFather name   :" << set[v].fatnam <<endl;
	cout<<"\t\t\t\t\t\tClass         :" << set[v].clas <<endl;
	cout<<"\t\t\t\t\t\tGender        :" << set[v].gend <<endl;
	cout<<"\t\t\t\t\t\tCell No       :" << set[v].cel <<endl;
	cout<<"\t\t\t\t\t\tDOB           :" << set[v].birt << endl;
	cout<<"\t\t\t\t\t\tAddress       :" << set[v].adres<<endl<<endl ;
}

void show_data()
{
	ifstream fin;
	fin.open("test.txt",ios::in|ios::binary);
	cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"-----------------------------------------------STUDENT RECORD TABLE-----------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
	while(fin.read((char*)&set,sizeof(set)))
	{
		set[v].giv_data();
	}
	fin.close();
	cout<<"\n------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"-------------------------------------------ALL DATA HAS BEEN DISPLAYED--------------------------------------------------"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
}

void first::giv_clas()
{	
	cout<<set[v].name <<"\t\t";
}

void show_clas()
{
	int a,s;
	int flag=0;
	ifstream fin;
	fin.open("test.txt",ios::binary|ios::out);
	cout<<"Show Data Of Class:";
	cin>>a;
	
	cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"-----------------------------------------------------WELCOME------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
	 
	while(fin.read((char*)&set,sizeof(set)))
	{
		if(a==set[v].geclas())
		{
			flag++;
			cout<<""<<flag<<")";
			set[v].giv_clas();
			s=set[v].clas;
		}
	}
	cout<<"\n\n\t\t\t  .........\\\\\\\\\\ You have "<<flag<<" student/s in class "<<s<<" ////..........";
	cout<<"\n------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"-------------------------------------------ALL DATA HAS BEEN DISPLAYED--------------------------------------------------"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
	fin.close();
	if(flag==0)
	{
		cout<<"\n......Your Class Has Not Been Found.....\n";
	}
	cout<<"\n.....Data Searching Complete.....\n";
}

void serch()
{
	int a , b ;
	int flag=0;
	ifstream fin;
	fin.open("test.txt",ios::binary|ios::out);
	cout<<"Enter Admission no. :";
	cin>>a;
	cout<<"Enter Password :";
	cin>>b;
	
	while(fin.read((char*)&set,sizeof(set)))
	{
		if(a==set[v].gerol() && b==set[v].ppas)
		{
			set[v].giv_data();
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

void st_serch()
{
	int a , b ;
	int flag=0;
	ifstream fin;
	fin.open("test.txt",ios::binary|ios::out);
	cout<<"Enter Admission no. :";
	cin>>a;
	cout<<"Enter Password :";
	cin>>b;
	
	while(fin.read((char*)&set,sizeof(set)))
	{
		if(a==set[v].gerol() && b==set[v].ppas)
		{
			set[v].st_givedata();
			flag++;
		}
	}
	fin.close();
	if(flag==0)
	{
		cout<<"\n.....CHECK ROLL NO. OR PASSWORD.....\n";
	}
	cout<<"\n.....Data Searching Complete.....\n";

}

void delt()
{
	int a;
	int flag=0;
	ifstream fin;
	ofstream w;
	fin.open("test.txt",ios::binary|ios::out);
	w.open("Newtest.txt",ios::binary|ios::app|ios::out);
	cout<<"Enter Admission No. You Would Like To Delete:";
	cin>>a;
	
	while(fin.read((char*)&set,sizeof(set)))
	{
		if(a==set[v].gerol())
		{
			cout<<"\nThe Following Admission No. Would be deleted\n";
			set[v].giv_data();
			flag++;
		}
		else
		{
			w.write((char*)&set,sizeof(set));
		}
	}
	fin.close();
	w.close();
	remove("test.txt");
	rename("Newtest.txt","test.txt");
	if(flag==0)
	{
		cout<<"\n.....Admission No. Not Found.....\n";
	}
}

void modify()
{
	int a , pos;
	int flag=0;
	
	fstream fin;
	
	fin.open("test.txt",ios::in|ios::binary|ios::out);
	
	cout<<"Enter Admission No. You Would Like To Modify:";
	
	cin>>a;
	
	while(fin.read((char*)&set,sizeof(set)))
	{
		pos=fin.tellg();
		if(a=set[v].gerol())
		{
			cout<<"\nThe Following Admission No. Will Be Modified\n";
			set[v].giv_data();
			cout<<"Enter New Data";
			set[v].get_data();
			fin.seekg(pos-sizeof(set));   //seekg is used to move cursor to desired location for reading
			fin.write((char*)&set,sizeof(set));
			flag++;
		}
	}
	fin.close();
	
	if(flag==0)
	{
		cout<<"\n.....Admission No. Not Found.....\n";
	}
}

void first::get_mark()
{
	
	cout<<"Enter Admission Number  :"; cin>>set[v].spas;
	
	cout<<"\nEnter marks for Urdu\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].utmark;
	plus_only(set[v].utmark); 
	cout<<"Enter obtained marks       :"; cin>>set[v].uomark;
	plus_only(set[v].uomark);
	
	cout<<"\nEnter marks for Math\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].mtmark;
	plus_only(set[v].mtmark);
	cout<<"Enter obtained marks       :"; cin>>set[v].momark;
	plus_only(set[v].momark);
	
	cout<<"\nEnter marks for English\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].etmark;
	plus_only(set[v].etmark);
	cout<<"Enter obtained marks       :"; cin>>set[v].eomark;
	plus_only(set[v].eomark);
	
	cout<<"\nEnter marks for Pak.studies\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].pstmark;
	plus_only(set[v].pstmark);
	cout<<"Enter obtained marks       :"; cin>>set[v].psomark;
	plus_only(set[v].psomark);
	
	cout<<"\nEnter marks for Islamyat\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].itmark;
	plus_only(set[v].itmark);
	cout<<"Enter obtained marks       :"; cin>>set[v].iomark;
	plus_only(set[v].iomark);
	
	cout<<"\nEnter marks for Physics\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].ptmark;
	plus_only(set[v].ptmark);
	cout<<"Enter obtained marks       :"; cin>>set[v].pomark;
	plus_only(set[v].pomark);	
	
	cout<<"\nEnter marks for Biology\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].btmark;
	plus_only(set[v].btmark);
	cout<<"Enter obtained marks       :"; cin>>set[v].bomark;
	plus_only(set[v].bomark);
	
	cout<<"\nEnter marks for Chemistry\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].ktmark;
	plus_only(set[v].ktmark);
	cout<<"Enter obtained marks       :"; cin>>set[v].komark;
	plus_only(set[v].komark);
	
	cout<<"\nEnter marks for Computer\n"; 
	cout<<"Enter Total marks          :"; cin>>set[v].ttmark;
	plus_only(set[v].ttmark);
	cout<<"Enter obtained marks       :"; cin>>set[v].tomark;
	plus_only(set[v].tomark);
	
	set[v].ctmark = set[v].utmark + set[v].mtmark + set[v].etmark + set[v].ttmark + set[v].ktmark + set[v].btmark + set[v].ptmark + set[v].pstmark + set[v].itmark;
	set[v].comark = set[v].uomark + set[v].momark + set[v].eomark + set[v].tomark + set[v].komark + set[v].bomark + set[v].pomark + set[v].psomark + set[v].iomark;
	
	set[v].per =100*set[v].comark/set[v].ctmark;
	
}


void in_mark()
{
	
	int r,flag;
    ofstream fout("test.txt",ios::app);
    cout<<"\n\nEnter Admission No. For Grading: ";
    cin>>r;
    flag=check(r); 
    if(flag)
	{
		int a ;
		fstream fmtest;
		fmtest.open("marktest.txt",ios::in|ios::binary|ios::out);
		set[v].get_mark();
		fmtest.write((char*)&set,sizeof(set));
		fmtest.close();
	}
	else
	{
		cout<<"\n\n Sorry..!!!Admission No. doesn't Exist\n\n";
	}
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
	
	int a , flag=0;
	cout<<"\nShow Grade-Book For Roll No. :";
	cin>>a;
	ifstream fin;
	fin.open("marktest.txt",ios::in|ios::binary);
	cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"----------------------------------------------------GRADE BOOK----------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\n\t\t\t\t Subject     Total Marks     Obtained Marks";
	cout<<"\n\t\t\t\t---------------------------------------------";
	
	while(fin.read((char*)&set,sizeof(set)))
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

void delet()
{
	int a;
	int flag=0;
	ifstream fin;
	ofstream w;
	fin.open("marktest.txt",ios::binary|ios::out);
	w.open("temptest.txt",ios::binary|ios::app|ios::out);
	cout<<"\nDelete Marks Of Admission No. :";
	cin>>a;
	
	while(fin.read((char*)&set,sizeof(set)))
	{
		if(a==set[v].gespas())
		{
			cout<<"\nThese Marks Would Be Deleted \n";
			set[v].show_mark();
			flag++;
		}
		else
		{
			w.write((char*)&set,sizeof(set));
		}
	}
	fin.close();
	
	w.close();
	remove("marktest.txt");
	rename("temptest.txt","marktest.txt");
	if(flag==0)
	{
		cout<<"\n.....Admission No. Not Found.....\n";
	}
}

void modif()
{
	int a , pos;
	int flag=0;
	
	fstream fin;
	
	fin.open("marktest.txt",ios::in|ios::binary|ios::out);
	
	cout<<"\nModify Marks Of Admission No. :";
	
	cin>>a;
	
	while(fin.read((char*)&set,sizeof(set)))
	{
		pos=fin.tellg();
		if(a=set[v].gespas())
		{
			cout<<"\nThese Marks Would Be Modified\n";
			set[v].show_mark();
			cout<<"\nEnter New Data\n";
			set[v].get_mark();
			fin.seekg(pos-sizeof(set));   //seekg is used to move cursor to desired location for reading
			fin.write((char*)&set,sizeof(set));
			flag++;
		}
	}
	fin.close();
	
	if(flag==0)
	{
		cout<<"\n.....Admission No. Not Found.....\n";
	}
}

int first::admin_view()
{
	int a;
	system("cls");
	
	do
	{
		system("cls");
		cout<<"\n\n\n\n";
		cout<<"\t\t\t--------------------------------------\n\t\t\t";
		cout<<"WELCOME TO MY ADMINISTRATION AUTHORITY\n\t\t\t";
		cout<<"--------------------------------------\n\t\t\t";
		cout<<"      Enter number of your choice\n\n\t\t\t";
		cout<<"\n\t\t\t\t<<------0.Go Back-----\n\n\t\t\t"
		<<"||1.New Admission.        ||\n\t\t\t||\t\t\t  ||7.Upload Marks.\n\t\t\t"
		<<"||2.Show Students.        ||\n\t\t\t||\t\t\t  ||8.View Marks.\n\t\t\t"
		<<"||3.Show class.           ||\n\t\t\t||\t\t\t  ||9.delete Marks.\n\t\t\t"
		<<"||4.Search student data.  ||\n\t\t\t||\t\t\t  ||10.Modify Marks.\n\t\t\t"
		<<"||5.Delete student data.  ||\n\t\t\t||\t\t\t  ||\n\t\t\t"
		<<"||6.Modify student data.  ||\n\t\t\t||\t\t\t  \n\t\t\t"
		<<"||===> ";
		cin>>a;
		system("cls");
		switch(a)
		{
			case 1:
				{
					writ_data();
				}
				break;	
			case 2:
				{
					show_data();
				}
				break;
			case 3:
				{
					show_clas();
				}
				break;
			case 4:
				{
					serch();
				}
				break;
			case 5:
				{
					delt();
				}
				break;
			case 6:
				{
					modify();
				}
				break;
			case 7:
				{
					in_mark();
				}
				break;
			case 8:
				{
					disply_mark();
				}
				break;	
			case 9:
				{
					delet(); 
				}
				break;
			case 10:
				{
					modif();
				}
				break;
			case 11:
				{
					
				}				
	}
	system("pause");
	}while(a);
}

int admin_login()
{
	system("cls");
	cout<<"\n\n\n\n\t\t\t --------- Admin Login --------";	

	string username;
	string password;

	cout<<"\n\n\t\t\t Enter username : ";
	cin>>username;
	cout<<"\n\t\t\t Enter password : ";
	cin>>password;

	if(username=="admin" && password=="admin@2") 
	{
    	set[v].admin_view();
	}   
	else
	{
		cout<<"\n\n\t\t  ....Please check your Name and password....\n\n";	
	}
}

int student_login()
{
	int a;
	system("cls");
	
	do
	{
		system("cls");
		cout<<"\n\n\n\n";
		cout<<"\t\t\t--------------------------------------\n\t\t\t";
		cout<<"WELCOME TO STUDENT INFORMATION CENTRE\n\t\t\t";
		cout<<"--------------------------------------\n\t\t\t";
		cout<<"      Enter number of your choice\n\n\t\t\t";
		cout<<"\n\t\t\t\t<<------0.Go Back-----\n\n\t\t\t"
		<<"||1.Show Personal Information.\n\t\t\t"
		<<"||2.View marks\n\n\t\t\t"
		<<"||===> ";
		cin>>a;
		system("cls");
		switch(a)
		{
			case 1:
				{
					st_serch();
				}
				break;	
			case 2:
				{
					disply_mark();
				}
				break;				
	}
	system("pause");
	
	}
	while(a);
}

int main()
{
	system("color 1f");
	
	int a;
		
	do
	{
		system("cls");
		cout<<"\n\n\n\n";
		cout<<"\t\t\t--------------------------------------\n\t\t\t";
		cout<<"WELCOME TO MY STUDENT MANAGMENT SYSTEM\n\t\t\t";
		cout<<"--------------------------------------\n\t\t\t";
		cout<<"      Enter number of your choice\n\n\t\t\t";
	
		cout<<"|0|=Exit\n\t\t\t";
		cout<<"|1|=Admin Login\n\t\t\t";
		cout<<"|2|=Student Login\n\n\t\t\t";
		cout<<"Enter Your Choice-->";
		
		cin>>a;
		
		switch(a)
		{
			case 0:
				{
					exit(0);
				}
				break;
			case 1:
				{
					admin_login();
				}
				break;
			case 2:
				{
					student_login();
				}
				break;
			default:
				{
					cout<<"\n\n\t\t\t...Please Select Right Number...\n\n";
				}
		}
		system("pause");
	}while(a);
}
