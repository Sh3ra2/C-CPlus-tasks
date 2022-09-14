#include<iostream>
using namespace std;
class calculate
{ 	 
public:
	 
    float add(float a,float b)
	{
		float c;
		c=a+b;
		cout<<"Sum of numbers is "<<c;
	} 
	
	float mult(float a,float b)
	{
		float c;
		c=a*b;
		cout<<"Multiplication of numbers is "<<c;
	}
	
	float sub(float a, float b)
	{
		float c;
		c=a-b;
		cout<<"Subtraction of numbers is "<<c;
	}
	
	float div(float a,float b)
	{
		float c;
		c=a/(float)b;
		cout<<"Divsion of "<<a<<" over "<<b<<" is "<<c ;
	}
}; 
int main() 
{ 
   calculate obj1;
   float x,y,z;
   cout<<"Enter your first number:";
   cin>>x;
   cout<<"Enter your secound number:";
   cin>>y;
   cout<<"\nWhat would you like to do\n";
   cout<<"1:Addition\n2:Multiplication\n3:Subtraction\n4:Division\n";
   cin>>z;
   if (z==1)
   {
   	    obj1.add(x,y);
   }
   else if (z==2)
   {
   	    obj1.mult(x,y);
   }
   else if (z==3)
   {
   	    obj1.sub(x,y);
   }
   else if (z==4)
   {
   	    obj1.div(x,y);
   }
   else
   {
   	    cout<<"Please! Enter number from 1 to 4.";
   }
} 
