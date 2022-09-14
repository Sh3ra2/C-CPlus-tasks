#include<dos.h>
#include<iostream>
#include<fstream>

using namespace std;

static int v=0;

class first
{
public:
	
//================================================================================================================	
	
//===Costumer Attributes=====================================================
	int CostumerID;
	char CostumerName[30], CostumerAddress[50], CostumerEmail[50];
	long long int CostumerPhoneNo;
	
//===Feedback Attributes=====================================================
	int CostumerID, ReservationID;
	char feedback[500];
	long long int FeedbackDateTime;
	
//===Employee Attributes=====================================================
	int EmployeeID, EmployeeAge, EmployeeDOB, EmployeeSalary, OfficeID, EmployeeBonus;
	char EmployeeName[30], FatherName[30], EmployeeAddress[50], EmployeeGender[15], EmployeeEmail[50],EmployeeType[15];
	long long int EmployeePhoneNo;
	
//===Office Attributes========================================================
	int OfficeID;
	long long int OfficePhoneNo;
	char OfficeAddress[50], OfficeEmail[50];
	
//===Reservation Attributes===================================================
	int ReservationID, RentalAmount, CostumerID, EmployeeID, RentHours;
	long long int StartDateTime, EndDateTime, ActualEndDateTime ;
	
//===Car Attributes===========================================================
	int CarID, CarRent, SeatingCapacity;
	char CarName[30], CarType[30], Color[30];
	
//===Payment Attributes=======================================================
	int PaymentID, TotalPayment, Additions, Discount, CostumerID, reservationID;
	long long int PaymentDateTime;

//================================================================================================================

//===Costumer Functions====================================================
	void get_costumerdata();
	void giv_costumerdata();
	int get_costumerID()
	{
		return CostumerID;
	}

//===Employees Functions===================================================
	void get_Employeedata();
	void giv_Employeedata();
	int get_employeeID()
	{
		return EmployeeID;
	}
	int get_EmployeeAge()
	{
		return EmployeeAge;
	}
	
//===Reservations Functions================================================
	void get_Reservationdata();
	void giv_Reservationdata();
	int get_reservationID()
	{
		return ReservationID;
	}
	int get_ReservationStart()
	{
		return StartDateTime;
	}
	int get_ReservationEnd()
	{
		return EndDateTime;
	}
	int get_ReservationActualEnd()
	{
		return ActualEndDateTime;
	}

//===Payment Functions=====================================================
	void get_Paymentdata();
	void giv_Paymentdata();
	int get_paymentID()
	{
		return PaymentID;
	}
	int get_PaymentTime()
	{
		return PaymentTime;
	}
	int get_costumerID()
	{
		return CostumerID;
	}
	int get_reservationID()
	{
		return ReservationID;
	}

//===Car Functions=========================================================
	void get_Cardata();
	void giv_Cardata();
	int get_carID()
	{
		return CarID;
	}

//===Feedback Functions====================================================
	void get_Feedbackdata();
	void giv_Feedbackata();

//===Office Functions======================================================
	void get_Officedata();
	void giv_Officedata();
	int get_OfficeID()
	{
		return OfficeID;
	}

//================================================================================================================
	
//====Admin View + Functions=================================================
	int admin_view();
	int Costumer_manage();
	int Employees_manage();
	int Reservations_manage();
	int Cars_manage();

//===Costumer view + Functions===================================================
	int Costumer_view();
	
	
}set[100];


int plus_only(int a)
{
	if(a<0)
	{
		a=-a;
	}
}

//================================================================================================================
//check for ID
int check_Costumer(int r)
{
    int flag=0;
    ifstream fin("Costumer.txt",ios::in);
    while(!fin.eof())
    {
        fin.read((char*)&set,sizeof(set));
        if(r==set[v].int get_costumerID())
        {
            flag=1;
            break;
        }
    }
    fin.close();
    return(flag);
}

int check_Employee(int r)
{
    int flag=0;
    ifstream fin("Employee.txt",ios::in);
    while(!fin.eof())
    {
        fin.read((char*)&set,sizeof(set));
        if(r==set[v].get_employeeID())
        {
            flag=1;
            break;
        }
    }
    fin.close();
    return(flag);
}

int check_Office(int r)
{
    int flag=0;
    ifstream fin("Office.txt",ios::in);
    while(!fin.eof())
    {
        fin.read((char*)&set,sizeof(set));
        if(r==set[v].getofficeID())
        {
            flag=1;
            break;
        }
    }
    fin.close();
    return(flag);
}

int check_Payment(int r)
{
    int flag=0;
    ifstream fin("Payment.txt",ios::in);
    while(!fin.eof())
    {
        fin.read((char*)&set,sizeof(set));
        if(r==set[v].getpaymentID())
        {
            flag=1;
            break;
        }
    }
    fin.close();
    return(flag);
}

int check_Reservation(int r)
{
    int flag=0;
    ifstream fin("Reservation.txt",ios::in);
    while(!fin.eof())
    {
        fin.read((char*)&set,sizeof(set));
        if(r==set[v].getreservationID())
        {
            flag=1;
            break;
        }
    }
    fin.close();
    return(flag);
}

int check_Car(int r)
{
    int flag=0;
    ifstream fin("Car.txt",ios::in);
    while(!fin.eof())
    {
        fin.read((char*)&set,sizeof(set));
        if(r==set[v].getcarID())
        {
            flag=1;
            break;
        }
    }
    fin.close();
    return(flag);
}

int check_feedback(int r)
{
    int flag=0;
    ifstream fin("Feedback.txt",ios::in);
    while(!fin.eof())
    {
        fin.read((char*)&set,sizeof(set));
        if(r==set[v].getreservationID())
        {
            flag=1;
            break;
        }
    }
    fin.close();
    return(flag);
}
//================================================================================================================

//================================================================================================================
//Get data functions

void first::get_costumerdata()
{
	cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t";
	cout<<".........Enter Costumer Details........"<<endl;
	cout<<"\t\t\t--------------------------------------\n";
	
	cout<<"\n\t\t\tEnter Costumer ID/NIC No:";	
	cin>>set[v].CostumerID;
	plus_only(set[v].CostumerID);
	
	cout<<"\n\t\t\tEnter Name             :";	
	cin.ignore(); 
	cin.getline(set[v].CostumerName,30);
	
	cout<<"\n\t\t\tEnter Address	      :";	
	cin.getline(set[v].CostumerAddress,50);

	cout<<"\n\t\t\tEnter Cell No          :";	
	cin>>set[v].CostumerPhoneNo;
	plus_only(set[v].CostumerPhoneNo);
	
	cout<<"\n\t\t\tEnter Email            :";	
	cin.ignore(); 
	cin.getline(set[v].CostumerEmail,50);
}

void first::get_employeedata()
{
	cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t";
	cout<<".........Enter Employee Details........"<<endl;
	cout<<"\t\t\t--------------------------------------\n";
	
	cout<<"\n\t\t\tEnter Employee ID/NIC  :";	
	cin>>set[v].EmployeeID;
	plus_only(set[v].EmployeeID);
	
	cout<<"\n\t\t\tEnter Name             :";	
	cin.ignore(); 
	cin.getline(set[v].EmployeeName,30);
	
	cout<<"\n\t\t\tEnter Father's Name    :";	
	cin.getline(set[v].FatherName,30);
	
	cout<<"\n\t\t\tEnter Salary           :";	
	cin>>set[v].Salary;
	plus_only(set[v].Salary);
	
	cout<<"\n\t\t\tEnter Gender (M/F)     :";	
	cin>>set[v].gend;
	
	cout<<"\n\t\t\tEnter Cell No          :";	
	cin>>set[v].EmployeePhoneNo;
	plus_only(set[v].EmployeePhoneNo);
	
	cout<<"\n\t\t\tEnter DOB (DDMMYYYY)   :";	
	cin>>set[v].EmployeeDOB;
	plus_only(set[v].EmployeeDOB);
	
	cout<<"\n\t\t\tEnter Address          :";	
	cin.ignore(); 
	cin.getline(set[v].EmployeeAddress,50);
	
	cout<<"\n\t\t\tEnter Email            :";	
	cin.ignore(); 
	cin.getline(set[v].EmployeeEmail,50);
}

void first::get_Cardata()
{
	cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t";
	cout<<".........Enter Car Details........"<<endl;
	cout<<"\t\t\t--------------------------------------\n";
	
	cout<<"\n\t\t\tEnter Car No.            :";	
	cin>>set[v].CarID;
	plus_only(set[v].CarID);
	
	cout<<"\n\t\t\tEnter Car Name          :";	
	cin.ignore(); 
	cin.getline(set[v].CarName,30);
	
	cout<<"\n\t\t\tEnter Car Type          :";	
	cin.getline(set[v].CarType,30);
	
	cout<<"\n\t\t\tEnter Car Color         :";	
	cin.getline(set[v].CarColor,30);
	
	cout<<"\n\t\t\tCar Seating Capacity    :";	
	cin>>set[v].SeatingCapacity;
	plus_only(set[v].roll);
	
	cout<<"\n\t\t\tEnter Car Rent.         :";	
	cin>>set[v].CarRent;
	plus_only(set[v].CarRent);
}

void first::get_Reservationdata()
{
	cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t";
	cout<<".........Enter Reservation Details........"<<endl;
	cout<<"\t\t\t--------------------------------------\n";
	
	cout<<"\n\t\t\tEnter reservation ID.         :";	
	cin>>set[v].ReservationID;
	plus_only(set[v].ReservationID);
	
	cout<<"\n\t\t\tEnter costumer ID.            :";	
	cin>>set[v].CostumerID;
	plus_only(set[v].CostumerID);
	
	cout<<"\n\t\t\tEnter Employee ID.            :";	
	cin>>set[v].EmployeeID;
	plus_only(set[v].EmployeeID);
	
	cout<<"\n\t\t\tEnter Rent hours.             :";	
	cin>>set[v].RentHours;
	plus_only(set[v].RentHours);
	
	cout<<"\n\t\t\tEnter rental Amount.          :";	
	cin>>set[v].RentalAmount;
	plus_only(set[v].RentalAmount);
	
	cout<<"\n\t\t\tEnter Start date time        :";	
	cin>>set[v].StartDateTime;
	plus_only(set[v].StartDateTime);
	
	cout<<"\n\t\t\tEnter end date time          :";	
	cin>>set[v].EndDateTime;
	plus_only(set[v].EndDateTime);
	
	cout<<"\n\t\t\tEnter actual end date time   :";	
	cin>>set[v].ActualEndDateTIme;
	plus_only(set[v].ActualEndDateTIme);
}

void first::get_Officedata()
{
	cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t";
	cout<<".........Enter Office Details........"<<endl;
	cout<<"\t\t\t--------------------------------------\n";
	
	cout<<"\n\t\t\tEnter Office ID.            :";	
	cin>>set[v].OfficeID;
	plus_only(set[v].OfficeID);
	
	cout<<"\n\t\t\tEnter Office Address        :";	
	cin.ignore(); 
	cin.getline(set[v].OfficeAddress,50);
	
	cout<<"\n\t\t\tEnter Office  Email         :";	
	cin.getline(set[v].OfficeEmail,50);
	
	cout<<"\n\t\t\tEnter Offcie Phone No       :";	
	cin>>set[v].OfficePhoneNo;
	plus_only(set[v].OfficePhoneNo);
}

void first::get_paymentdata()
{
	cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t";
	cout<<".........Enter payment Details........"<<endl;
	cout<<"\t\t\t--------------------------------------\n";
	
	cout<<"\n\t\t\tEnter Payment ID.         :";	
	cin>>set[v].paymentID;
	plus_only(set[v].paymentID);
	
	cout<<"\n\t\t\tEnter Total Payment.      :";	
	cin>>set[v].TotalPayment;
	plus_only(set[v].TotalPayment);
	
	cout<<"\n\t\t\tEnter Additions           :";	
	cin>>set[v].Additions;
	plus_only(set[v].Additions);
	
	cout<<"\n\t\t\tEnter Discount            :";	
	cin>>set[v].Discount;
	plus_only(set[v].Discount);
	
	cout<<"\n\t\t\tEnter Costumer ID.        :";	
	cin>>set[v].CostumerID;
	plus_only(set[v].CostumerID);
	
	cout<<"\n\t\t\tEnter reservation ID.     :";	
	cin>>set[v].reservationID;
	plus_only(set[v].reservationID);
	
	cout<<"\n\t\t\tEnter payment date time   :";	
	cin>>set[v].PaymentDateTime;
	plus_only(set[v].PaymentDateTime);
}

void first::get_feedbackdata()
{
	cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t";
	cout<<".........Enter Feedback Details........"<<endl;
	cout<<"\t\t\t--------------------------------------\n";
	
	cout<<"\n\t\t\tEnter costumer ID      :";	
	cin>>set[v].CostumerID;
	plus_only(set[v].CostumerID);
	
	
	cout<<"\n\t\t\tEnter Feedback         :";	
	cin.getline(set[v].feedback,20);
	
	cout<<"\n\t\t\tEnter date Time         :";	
	cin>>set[v].FeedbackDateTime;
	plus_only(set[v].FeedbackDateTime);
}

//================================================================================================================

//================================================================================================================
//Write data

void Costumer_writ_data()
{
	int r,flag;
    ofstream fout("Costumer.txt",ios::app);
    cout<<"Enter Costumer ID For Data Entry:";
    cin>>r;
    plus_only(r);
    flag=check(r);
    
    if(flag)
    {
        cout<<"\n Error..!ID Already exist\n";
	}
	else
    {
		ofstream fout;
		fout.open("Costumer.txt",ios::binary|ios::out|ios::app);
		set[v].get_Costumerdata();
		fout.write((char*)&set,sizeof(set));
		fout.close();
		cout<<"\n\nData Successfully Saved To File....\n";
	}
}

void Employee_writ_data()
{
	int r,flag;
    ofstream fout("Employee.txt",ios::app);
    cout<<"Enter Employee ID For Data Entry:";
    cin>>r;
    plus_only(r);
    flag=check(r);
    
    if(flag)
    {
        cout<<"\n Error..!ID Already exist\n";
	}
	else
    {
		ofstream fout;
		fout.open("Employee.txt",ios::binary|ios::out|ios::app);
		set[v].get_Employeedata();
		fout.write((char*)&set,sizeof(set));
		fout.close();
		cout<<"\n\nData Successfully Saved To File....\n";
	}
}

void Payment_writ_data()
{
	int r,flag;
    ofstream fout("Payment.txt",ios::app);
    cout<<"Enter Payment ID For Data Entry:";
    cin>>r;
    plus_only(r);
    flag=check(r);
    
    if(flag)
    {
        cout<<"\n Error..!ID Already exist\n";
	}
	else
    {
		ofstream fout;
		fout.open("Payment.txt",ios::binary|ios::out|ios::app);
		set[v].get_paymentdata();
		fout.write((char*)&set,sizeof(set));
		fout.close();
		cout<<"\n\nData Successfully Saved To File....\n";
	}
}

void Office_writ_data()
{
	int r,flag;
    ofstream fout("Office.txt",ios::app);
    cout<<"Enter Office ID For Data Entry:";
    cin>>r;
    plus_only(r);
    flag=check(r);
    
    if(flag)
    {
        cout<<"\n Error..!ID Already exist\n";
	}
	else
    {
		ofstream fout;
		fout.open("Office.txt",ios::binary|ios::out|ios::app);
		set[v].get_Officedata();
		fout.write((char*)&set,sizeof(set));
		fout.close();
		cout<<"\n\nData Successfully Saved To File....\n";
	}
}

void Car_writ_data()
{
	int r,flag;
    ofstream fout("Car.txt",ios::app);
    cout<<"Enter Car ID For Data Entry:";
    cin>>r;
    plus_only(r);
    flag=check(r);
    
    if(flag)
    {
        cout<<"\n Error..!ID Already exist\n";
	}
	else
    {
		ofstream fout;
		fout.open("Car.txt",ios::binary|ios::out|ios::app);
		set[v].get_Cardata();
		fout.write((char*)&set,sizeof(set));
		fout.close();
		cout<<"\n\nData Successfully Saved To File....\n";
	}
}

void Reservation_writ_data()
{
	int r,flag;
    ofstream fout("Reservation.txt",ios::app);
    cout<<"Enter Reservation ID For Data Entry:";
    cin>>r;
    plus_only(r);
    flag=check(r);
    
    if(flag)
    {
        cout<<"\n Error..!ID Already exist\n";
	}
	else
    {
		ofstream fout;
		fout.open("Reservation.txt",ios::binary|ios::out|ios::app);
		set[v].get_reservationdata();
		fout.write((char*)&set,sizeof(set));
		fout.close();
		cout<<"\n\nData Successfully Saved To File....\n";
	}
}

void Feedback_writ_data()
{
	int r,flag;
    ofstream fout("Feedback.txt",ios::app);
    cout<<"Enter Reservation ID For feedback Entry:";
    cin>>r;
    plus_only(r);
    flag=check(r);
    
    if(flag)
    {
        cout<<"\n Error..!feedback for this ID already exist\n";
	}
	else
    {
		ofstream fout;
		fout.open("Feedback.txt",ios::binary|ios::out|ios::app);
		set[v].get_Feedbackdata();
		fout.write((char*)&set,sizeof(set));
		fout.close();
		cout<<"\n\nData Successfully Saved To File....\n";
	}
}

//===============================================================================================================


//===============================================================================================================
//show data

void first::give_costumerdata()
{
	cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t";
	cout<<".........Enter Costumer Details........"<<endl;
	cout<<"\t\t\t--------------------------------------\n";
	
	cout<<"\n\t\t\tEnter Costumer ID/NIC No:";	
	<<set[v].CostumerID;
	
	cout<<"\n\t\t\tEnter Name             :";	
	cin.giveline(set[v].CostumerName,30);
	
	cout<<"\n\t\t\tEnter Address	      :";	
	cin.giveline(set[v].CostumerAddress,50);

	cout<<"\n\t\t\tEnter Cell No          :";	
	<<set[v].CostumerPhoneNo;
	
	cout<<"\n\t\t\tEnter Email            :";	
	cin.giveline(set[v].CostumerEmail,50);
}

void first::give_employeedata()
{
	cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t";
	cout<<".........Enter Employee Details........"<<endl;
	cout<<"\t\t\t--------------------------------------\n";
	
	cout<<"\n\t\t\tEnter Employee ID/NIC  :";	
	<<set[v].EmployeeID;
	
	cout<<"\n\t\t\tEnter Name             :";	
	cin.giveline(set[v].EmployeeName,30);
	
	cout<<"\n\t\t\tEnter Father's Name    :";	
	cin.giveline(set[v].FatherName,30);
	
	cout<<"\n\t\t\tEnter Salary           :";	
	<<set[v].Salary;
	
	cout<<"\n\t\t\tEnter Gender (M/F)     :";	
	<<set[v].gend;
	
	cout<<"\n\t\t\tEnter Cell No          :";	
	<<set[v].EmployeePhoneNo;
	
	cout<<"\n\t\t\tEnter DOB (DDMMYYYY)   :";	
	<<set[v].EmployeeDOB;
	
	cout<<"\n\t\t\tEnter Address          :";	
	cin.giveline(set[v].EmployeeAddress,50);
	
	cout<<"\n\t\t\tEnter Email            :";	
	cin.giveline(set[v].EmployeeEmail,50);
}

void first::give_Cardata()
{
	cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t";
	cout<<".........Enter Car Details........"<<endl;
	cout<<"\t\t\t--------------------------------------\n";
	
	cout<<"\n\t\t\tEnter Car No.            :";	
	<<set[v].CarID;
	
	cout<<"\n\t\t\tEnter Car Name          :";	
	cin.giveline(set[v].CarName,30);
	
	cout<<"\n\t\t\tEnter Car Type          :";	
	cin.giveline(set[v].CarType,30);
	
	cout<<"\n\t\t\tEnter Car Color         :";	
	cin.giveline(set[v].CarColor,30);
	
	cout<<"\n\t\t\tCar Seating Capacity    :";	
	<<set[v].SeatingCapacity;
	
	cout<<"\n\t\t\tEnter Car Rent.         :";	
	<<set[v].CarRent;
}

void first::give_Reservationdata()
{
	cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t";
	cout<<".........Enter Reservation Details........"<<endl;
	cout<<"\t\t\t--------------------------------------\n";
	
	cout<<"\n\t\t\tEnter reservation ID.         :";	
	<<set[v].ReservationID;
	
	cout<<"\n\t\t\tEnter costumer ID.            :";	
	<<set[v].CostumerID;
	
	cout<<"\n\t\t\tEnter Employee ID.            :";	
	<<set[v].EmployeeID;
	
	cout<<"\n\t\t\tEnter Rent hours.             :";	
	<<set[v].RentHours;
	
	cout<<"\n\t\t\tEnter rental Amount.          :";	
	<<set[v].RentalAmount;
	
	cout<<"\n\t\t\tEnter Start date time        :";	
	<<set[v].StartDateTime;
	
	cout<<"\n\t\t\tEnter end date time          :";	
	<<set[v].EndDateTime;
	
	cout<<"\n\t\t\tEnter actual end date time   :";	
	<<set[v].ActualEndDateTIme;
}

void first::give_Officedata()
{
	cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t";
	cout<<".........Enter Office Details........"<<endl;
	cout<<"\t\t\t--------------------------------------\n";
	
	cout<<"\n\t\t\tEnter Office ID.            :";	
	<<set[v].OfficeID;
	
	cout<<"\n\t\t\tEnter Office Address        :";	
	cin.giveline(set[v].OfficeAddress,50);
	
	cout<<"\n\t\t\tEnter Office  Email         :";	
	cin.giveline(set[v].OfficeEmail,50);
	
	cout<<"\n\t\t\tEnter Offcie Phone No       :";	
	<<set[v].OfficePhoneNo;
}

void first::give_paymentdata()
{
	cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t";
	cout<<".........Enter payment Details........"<<endl;
	cout<<"\t\t\t--------------------------------------\n";
	
	cout<<"\n\t\t\tEnter Payment ID.         :";	
	<<set[v].paymentID;
	
	cout<<"\n\t\t\tEnter Total Payment.      :";	
	<<set[v].TotalPayment;
	
	cout<<"\n\t\t\tEnter Additions           :";	
	<<set[v].Additions;
	
	cout<<"\n\t\t\tEnter Discount            :";	
	<<set[v].Discount;
	
	cout<<"\n\t\t\tEnter Costumer ID.        :";	
	<<set[v].CostumerID;
	
	cout<<"\n\t\t\tEnter reservation ID.     :";	
	<<set[v].reservationID;
	
	cout<<"\n\t\t\tEnter payment date time   :";	
	<<set[v].PaymentDateTime;
}

void first::give_feedbackdata()
{
	cout<<"\n\n\t\t\t--------------------------------------\n\t\t\t";
	cout<<".........Enter Feedback Details........"<<endl;
	cout<<"\t\t\t--------------------------------------\n";
	
	cout<<"\n\t\t\tEnter costumer ID      :";	
	<<set[v].CostumerID;
	
	cout<<"\n\t\t\tEnter Feedback         :";	
	cin.giveline(set[v].feedback,20);
	
	cout<<"\n\t\t\tEnter date Time         :";	
	<<set[v].FeedbackDateTime;
}

//===============================================================================================================




//=========================================================
//Manage Costumers
int first::Costumer_manage()
{
	int a;
	system("cls");
	
	do
	{
		system("cls");
		cout<<"\n\n\n\n";
		cout<<"\t\t\t--------------------------------------\n\t\t\t";
		cout<<"		COSTUMER TAB\n\t\t\t";
		cout<<"--------------------------------------\n\t\t\t";
		cout<<"      Enter number of your choice\n\n\t\t\t";
		cout<<"\n\t\t\t\t<<------0.Go Back-----\n\n\t\t\t"
		<<"||1.Add Costumer.          \n\t\t\t"
		<<"||2.Show Costumer.         \n\t\t\t"
		<<"||4.Search Costumer Data.  \n\t\t\t"
		<<"||5.Delete Costumer Data.  \n\t\t\t"
		<<"||6.Modify Costumer Data.  \n\t\t\t"
		<<"||===> ";
		cin>>a;
		system("cls");
		switch(a)
		{
			case 1:
				{
					
				}
				break;	
			case 2:
				{
					
				}
				break;	
			case 3:
				{
					
				}
				break;	
			case 4:
				{
					
				}
				break;	
			case 5:
				{
					
				}
				break;	
			case 6:
				{
					
				}
				break;		
	}
	system("pause");
	}while(a);
}


//=========================================================
//Manage Employees
int first::Employees_manage()
{
	int a;
	system("cls");
	
	do
	{
		system("cls");
		cout<<"\n\n\n\n";
		cout<<"\t\t\t--------------------------------------\n\t\t\t";
		cout<<"		EMPLOYEE TAB\n\t\t\t";
		cout<<"--------------------------------------\n\t\t\t";
		cout<<"      Enter number of your choice\n\n\t\t\t";
		cout<<"\n\t\t\t\t<<------0.Go Back-----\n\n\t\t\t"
		<<"||1.Add Employee.          \n\t\t\t"
		<<"||2.Show Employee.         \n\t\t\t"
		<<"||4.Search Employee Data.  \n\t\t\t"
		<<"||5.Delete Employee Data.  \n\t\t\t"
		<<"||6.Modify Employee Data.  \n\t\t\t"
		<<"||===> ";
		cin>>a;
		system("cls");
		switch(a)
		{
			case 1:
				{
					
				}
				break;	
			case 2:
				{
					
				}
				break;	
			case 3:
				{
					
				}
				break;	
			case 4:
				{
					
				}
				break;	
			case 5:
				{
					
				}
				break;	
			case 6:
				{
					
				}
				break;		
	}
	system("pause");
	}while(a);
}


//=========================================================
//Manage Reservations
int first::Reservations_manage()
{
	int a;
	system("cls");
	
	do
	{
		system("cls");
		cout<<"\n\n\n\n";
		cout<<"\t\t\t--------------------------------------\n\t\t\t";
		cout<<"		EMPLOYEE TAB\n\t\t\t";
		cout<<"--------------------------------------\n\t\t\t";
		cout<<"      Enter number of your choice\n\n\t\t\t";
		cout<<"\n\t\t\t\t<<------0.Go Back-----\n\n\t\t\t"
		<<"||1.Add Reservation.          \n\t\t\t"
		<<"||2.Show Reservation.         \n\t\t\t"
		<<"||4.Search Reservation Data.  \n\t\t\t"
		<<"||5.Delete Reservation Data.  \n\t\t\t"
		<<"||6.Modify Reservation Data.  \n\t\t\t"
		<<"||===> ";
		cin>>a;
		system("cls");
		switch(a)
		{
			case 1:
				{
					
				}
				break;	
			case 2:
				{
					
				}
				break;	
			case 3:
				{
					
				}
				break;	
			case 4:
				{
					
				}
				break;	
			case 5:
				{
					
				}
				break;	
			case 6:
				{
					
				}
				break;		
	}
	system("pause");
	}while(a);
}


//=========================================================
//Manage Cars
int first::Cars_manage()
{
	int a;
	system("cls");
	
	do
	{
		system("cls");
		cout<<"\n\n\n\n";
		cout<<"\t\t\t--------------------------------------\n\t\t\t";
		cout<<"		EMPLOYEE TAB\n\t\t\t";
		cout<<"--------------------------------------\n\t\t\t";
		cout<<"      Enter number of your choice\n\n\t\t\t";
		cout<<"\n\t\t\t\t<<------0.Go Back-----\n\n\t\t\t"
		<<"||1.Add Cars.          \n\t\t\t"
		<<"||2.Show Cars.         \n\t\t\t"
		<<"||4.Search Cars Data.  \n\t\t\t"
		<<"||5.Delete Cars Data.  \n\t\t\t"
		<<"||6.Modify Cars Data.  \n\t\t\t"
		<<"||===> ";
		cin>>a;
		system("cls");
		switch(a)
		{
			case 1:
				{
					
				}
				break;	
			case 2:
				{
					
				}
				break;	
			case 3:
				{
					
				}
				break;	
			case 4:
				{
					
				}
				break;	
			case 5:
				{
					
				}
				break;	
			case 6:
				{
					
				}
				break;		
	}
	system("pause");
	}while(a);
}


//=========================================================
//Admin View
int first::admin_view()
{
	int a;
	system("cls");
	
	do
	{
		system("cls");
		cout<<"\n\n\n\n";
		cout<<"\t\t\t--------------------------------------\n\t\t\t";
		cout<<"     WELCOME TO MANAGEMENT TAB\n\t\t\t";
		cout<<"--------------------------------------\n\t\t\t";
		cout<<"      Enter number of your choice\n\n\t\t\t";
		cout<<"\n\t\t\t\t<<------0.Go Back-----\n\n\t\t\t"
		<<"||1.Manage Costumers.          \n\t\t\t"
		<<"||2.Manage Employees.         \n\t\t\t"
		<<"||3.Manage Reservations.   \n\t\t\t"
		<<"||4.Manage Cars.  \n\t\t\t"
		<<"||===> ";
		cin>>a;
		system("cls");
		switch(a)
		{
			case 1:
				{
					Costumer_manage();
				}
				break;	
			case 2:
				{
					Employees_manage();
				}
				break;
			case 3:
				{
					Reservations_manage();
				}
				break;
			case 4:
				{
					Cars_manage();
				}
				break;				
	}
	system("pause");
	}while(a);
}

//===============================================================================================================
//Manager + Costumer Login
int manager_login()
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

int costumer_login()
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
					
				}
				break;	
			case 2:
				{
					
				}
				break;				
	}
	system("pause");
	
	}
	while(a);
}


//===============================================================================================================
//Main Function
int main()
{
	system("color 1f");
	
	int a;
		
	do
	{
		system("cls");
		cout<<"\n\n\n\n";
		cout<<"\t\t\t--------------------------------------\n\t\t\t";
		cout<<"WELCOME TO MY RENTAL MANAGMENT SYSTEM\n\t\t\t";
		cout<<"--------------------------------------\n\t\t\t";
		cout<<"      Enter number of your choice\n\n\t\t\t";
	
		cout<<"|0|=Exit\n\t\t\t";
		cout<<"|1|=Manager Login\n\t\t\t";
		cout<<"|2|=Costumer Check\n\n\t\t\t";
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
					manager_login();
				}
				break;
			case 2:
				{
					costumer_login();
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
