#include<iostream>                   
using namespace std;				
class user             				
{
	
	//Access specifier by default is private 
	//Attributes of user class		
	int phone_no;
	char* name;
	
public:	//public access specifier

//operations or functions of user class
	int EditPhoneNo();
	char EditName();
	bool select();
};	//End of user class

//********************************************************************************************************
//********************************************************************************************************
//********************************************************************************************************

class admin:user	//Atributes of admin class have been inherited from user class
{
	
	//Access specifier by default is private 
	char* SpecialKey;	//To access as an administrater there is a special key, which is part of admin class only
	
public:	//public access specifier

//operations or functions of admin class
	int AddPhoneNo();
	int DeletePhoneNo();
	int EditPhoneNo();
	char AddName();
	char DeleteName();
	char editName();
};	//End of user class

//********************************************************************************************************
//********************************************************************************************************
//********************************************************************************************************

class costumer:user	//Traveller class has also been inherited from user class
{
	
	//Access specifier by default is private 
	//traveller would have all the atributes of user class by default
	
public:	//public access specifier

//operations or functions of costumer class
	void view();
	void search();
	bool select();
	void print();
	void download();
};	//End of costumer class

//********************************************************************************************************
//********************************************************************************************************
//********************************************************************************************************

class destination
{
	
	//Access specifier by default is private 
	char* Destinations[20];
	int Duration;
	
public:	//public access specifier

//operations or functions of destination class
	bool select();
	void view();
	void search();
};	//End of destination class

//********************************************************************************************************
//********************************************************************************************************
//********************************************************************************************************

class category	//user would select category that wheather he wants to travel or send anything
{
	
	//Access specifier by default is private 
	char* Categories;
	
public:	//public access specifier

//operations or functions of category class
	bool select();
	void search();
	void view();
};	//End of category class

//********************************************************************************************************
//********************************************************************************************************
//********************************************************************************************************

class material_transfer
{
	
	//Access specifier by default is private 
	int Weight;
	
public:	//public access specifier

//operations or functions of material_transfer class
	char EnterWeightOfMaterial();
	char EnterDateOfsending();
	char EnterTimeOfSending();
};	//End of material_transfer class

//********************************************************************************************************
//********************************************************************************************************
//********************************************************************************************************

class traveling
{
	
	//Access specifier by default is private 
	int SeatNo,BusNo,DepartureTime,Name;
	
public:	//public access specifier

//operations or functions of traveling class
	char Booking();
	char SeatNo();
	char ViewDepartureTime();
};	//End of traveling class

//********************************************************************************************************
//********************************************************************************************************
//********************************************************************************************************

class economy_class:public traveling	//Economy class would have all atributes of traveling class as it has been inherited
{
	
	//Access specifier by default is private 
	//Attributes of travelling class would be inherited to economy class
	
public:	//public access specifier

//operation or function of economy_class class
	void View();
};	//End of economy_class class

//********************************************************************************************************
//********************************************************************************************************
//********************************************************************************************************

class first_class:public traveling	//first_class would also inherit its attributes from traveling class
{
	
	//Access specifier by default is private 
	
public:	//public access specifier

//operations or functions of first_class class
	void EditSeatNo();
	void View();
};	//End of first_class class

//********************************************************************************************************
//********************************************************************************************************
//********************************************************************************************************

class Bill	//After selecting traveller would pay bill
{
	
	//Access specifier by default is private 
	//Atributes of bill class
	int SeatNo,BusNo,Time,BillAmount;
	
public:	//public access specifier

//operations or functions of Bill class
	void EnterPaymentMethod();
	void ViewBill();
	void paybill();
	void DownloadBill();
	void PrintBill();
};	//End of Bill class

//********************************************************************************************************
//********************************************************************************************************
//********************************************************************************************************

int main()
{
    
}
