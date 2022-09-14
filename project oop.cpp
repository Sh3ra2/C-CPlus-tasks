#include <iostream>

using namespace std;
static int p=0;

class menu
{
	
public:
	
	int pr;
	
	int leds();
	int fans();
	int wires();
	int nails();
	int electric_board();
	int wiring_products();
	int button();
	int sheet();
	int holder();
	int bulb();
	int capacitor();
	int breaker();
	int main_switches();
	int special_lights();
	int bill();
}
price[100];


int neg(int y, int z)
{
	
	if (y>=0)
	{
		price[p].pr=y*z;
	}
	else if(y<0)
	{
		cout<<"Enter positive number";
	}
	else
	{
		cout<<"Error";
	}
}


int menu::breaker()
{
    cout<<"\nSelect number of Amperes"
    <<"\n1.6 Ampere"
    <<"\n2.10 Ampere"
    <<"\n3.16 Ampere"
    <<"\n4.32 Ampere"
    <<"\n5.63 Ampere"
    <<"\n6.Earth Leakage"
    <<"\n7.Magnet";
}

int menu::bulb()
{
	int a;
	cout<<"\nChoose company"
	<<"\n1.LED Bulbs"
	<<"\n2.Standard Bulbs"
	<<"\n3.Night Bulbs"
	
	<<"\n\nEnter number:";
	
	cin>>a;
	
	if(a==1)
	{
		int b;
		cout<<"\nChoose number of watts"
		<<"\n1. 3 watt"
		<<"\n2. 5 watt"
		<<"\n3. 8 watt"
		<<"\n4. 13 watt"
		<<"\n5. 18 watt"
		<<"\n6. 25 watt"
		<<"\n7. 30 watt"
		<<"\n8. 60 watt"
		<<"\n\nEnter number:";
		
		cin>>b;
		
		if(b==1)
		{
			int k=80,b;
	        cout<<"\nPrice of 3 watt LED bulb is "<<k;
	        cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==2)
		{
			int k=100,b;
			cout<<"\nPrice of 5 watt LED bulb is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==3)
		{
			int k=120,b;
			cout<<"\nPrice of 8 watt LED bulb is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==4)
		{
			int k=200,b;
			cout<<"\nPrice of 13 watt LED bulb is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==5)
		{
			int k=250,b;
			cout<<"\nPrice of 18 watt LED bulb is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==6)
		{
			int k=300,b;
			cout<<"\nPrice of 25 watt LED bulb is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==7)
		{
			int k=300,b;
			cout<<"\nPrice of 30 watt LED bulb is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==8)
		{
			int k=300,b;
			cout<<"\nPrice of 60 watt LED bulb is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else
		{
			cout<<"\n----Select available numbers----";
		}
	}
	else if(a==2)
	{
		int b;
		cout<<"\nChoose number of watts"
		<<"\n1. 50 watt"
		<<"\n2. 100 watt"
		<<"\n3. 200 watt"
		<<"\n\nEnter number:";
		
		cin>>b;
		
		if(b==1)
		{
			int k=80,b;
	        cout<<"\nPrice of 3 watt LED bulb is "<<k;
	        cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==2)
		{
			int k=100,b;
			cout<<"\nPrice of 5 watt LED bulb is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==3)
		{
			int k=120,b;
			cout<<"\nPrice of 8 watt LED bulb is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else
		{
			cout<<"\n----Select available numbers----";
		}
	}
	else if (a==3)
	{
		int b;
		cout<<"\nSelect colour for 1.5 watt night light"
		<<"\n1.Blue"
		<<"\n2.Green"
		<<"\n3.Red"
		<<"\n4.Yellow"
		<<"\n5.White"
		<<"\n\nEnter number:";
		
		cin>>b;
		
		if(b==1)
		{
			int k=50,b;
			cout<<"\nPrice of 1.5 watt Blue light is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==2)
		{
			int k=50,b;
			cout<<"\nPrice of 1.5 watt Green light is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==3)
		{
			int k=50,b;
			cout<<"\nPrice of 1.5 watt Red light is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==4)
		{
			int k=50,b;
			cout<<"\nPrice of 1.5 watt Yellow light is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==5)
		{
			int k=50,b;
			cout<<"\nPrice of 1.5 watt White light is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else
		{
			cout<<"\n----Select available numbers----";
		}
	}
	else
	{
		cout<<"\n----Select available numbers----";
	}
}
	
int menu::button()
{
	int a;
	cout<<"\nChoose company"
	<<"\n1.Fuji"
	<<"\n2.Amber"
	<<"\n3.Case";
	
	cin>>a;
	
	if(a==1)
	{
		
	}
	else if(a==2)
	{
		
	}
	else if(a==3)
	{
		
	}
	else
	{
		cout<<"\n----Select available numbers----";
	}
}

int menu::capacitor()
{
	int a;
	cout<<"\nChoose company"
	<<"\n1.Fuji"
	<<"\n2.Amber"
	<<"\n3.Local"
	<<"\n\nEnter number:";
	
	cin>>a;
	
	if(a==1)
	{
		int b;
		cout<<"\nChoose uf number"
		<<"\n1. 2.5 uf"
		<<"\n2. 3.5 uf"
		<<"\n3. 4.5 uf"
		<<"\n4. 10 uf"
		<<"\n5. 20 uf"
		<<"\n6. 30 uf"
		<<"\n\nEnter number:";
		
		cin>>b;
		
		if(b==1)
		{
			int k=80,b;
	        cout<<"\nPrice of Fuji 2.5uf capacitor is "<<k;
	        cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==2)
		{
			int k=100,b;
			cout<<"\nPrice of Fuji 3.5uf capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==3)
		{
			int k=120,b;
			cout<<"\nPrice of Fuji 4.5uf capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==4)
		{
			int k=200,b;
			cout<<"\nPrice of Fuji 10uf capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==5)
		{
			int k=250,b;
			cout<<"\nPrice of Fuji 20uf capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==6)
		{
			int k=300,b;
			cout<<"\nPrice of Fuji 30uf capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else
		{
			cout<<"\n----Select available numbers----";
		}
	}
	else if(a==2)
	{
		int b;
		cout<<"\nChoose uf number"
		<<"\n1. 2.5 uf"
		<<"\n2. 3.5 uf"
		<<"\n3. 4.5 uf"
		<<"\n4. 10 uf"
		<<"\n5. 20 uf"
		<<"\n6. 30 uf"
		<<"\n\nEnter number:";
		cin>>b;
		
		if(b==1)
		{
			int k=60,b;
	        cout<<"\nPrice of Amber 2.5uf capacitor is "<<k;
	        cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==2)
		{
			int k=80,b;
			cout<<"\nPrice of Amber 3.5uf capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==3)
		{
			int k=100,b;
			cout<<"\nPrice of Amber 4.5uf capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==4)
		{
			int k=170,b;
			cout<<"\nPrice of Amber 10uf capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==5)
		{
			int k=230,b;
			cout<<"\nPrice of Amber 20uf capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==6)
		{
			int k=270,b;
			cout<<"\nPrice of Amber 30uf capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else
		{
			cout<<"\n----Select available numbers----";
		}
	}
	else if(a==3)
	{
		int b;
		cout<<"\nChoose uf number"
		<<"\n1. 2.5 uf"
		<<"\n2. 3.5 uf"
		<<"\n3. 4.5 uf"
		<<"\n4. 10 uf"
		<<"\n5. 20 uf"
		<<"\n6. 30 uf"
		<<"\n\nEnter number:";
		cin>>b;
		
		if(b==1)
		{
			int k=50,b;
	        cout<<"\nPrice of Local 2.5uf capacitor is "<<k;
	        cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==2)
		{
			int k=60,b;
			cout<<"\nPrice of Local 3.5uf capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==3)
		{
			int k=80,b;
			cout<<"\nPrice of Local 4.5uf capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==4)
		{
			int k=150,b;
			cout<<"\nPrice of Local 10uf capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==5)
		{
			int k=200,b;
			cout<<"\nPrice of Local 20uf capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==6)
		{
			int k=250,b;
			cout<<"\nPrice of Local 30uf capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else
		{
			cout<<"\n----Select available numbers----";
		}
	}
	else
	{
		cout<<"\n----Select available numbers----";
	}
}

int menu::electric_board()
{
	int a;
	cout<<"\nChoose company"
	<<"\n1.4/4"
	<<"\n2.7/4"
	<<"\n3.8+10";
	
	cin>>a;
	
	if(a==1)
	{
		
	}
	else if(a==2)
	{
		
	}
	else if(a==3)
	{
		
	}
	else
	{
		cout<<"\n----Select available numbers----";
	}
}

int menu::fans()
{
	int a;
	cout<<"\nChoose your category"
	<<"\n1.Ceiling Fans"
	<<"\n2.Pedestal Fans"
	<<"\n3.Exhaust Fans"
	<<"\n4.Bracket fans"
	<<"\n\nEnter number:";
	
	cin>>a;
	
	if (a==1)
	{
		
	}
	else if (a==2)
	{
		
	}
	else if (a==3)
	{
		
	}
	else if(a==4)
	{
		
	}
	else
	{
		cout<<"\n----Select available numbers----";
	}
}

int menu::holder()
{
	int a;
	cout<<"\nChoose Type"
	<<"\n1.B-22 pin holder"
	<<"\n2.E-27 holder"
	<<"\n3.Two in One"
	<<"\n\nEnter number:";
	
	cin>>a;
	
	if(a==1)
	{
		int b;
		cout<<"\nSize:"
		<<"\n1.Jumbo holder."
		<<"\n2.Button holder."
		<<"\n\nEnter number:";
		cin>>b;
		if(b==1)
		{
			int k=35,b;
	        cout<<"\nPrice of B-22 Jumbo holder is "<<k;
	        cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==2)
		{
			int k=20,b;
			cout<<"\nPrice of B-22 Button holder capacitor is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else
		{
			cout<<"\n----Select available numbers----";
		}
	}
	else if(a==2)
	{
		int b;
		cout<<"\nSize:"
		<<"\n1.Jumbo holder."
		<<"\n2.Button holder."
		<<"\n\nEnter number:";
		cin>>b;
		if(b==1)
		{
			int k=50,b;
	        cout<<"\nPrice of E-27 Jumbo holder is "<<k;
	        cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else if(b==2)
		{
			int k=60,b;
			cout<<"\nPrice of E-27 Button holder is "<<k;
			cout<<"\nYou need:";
			cin>>b;
			neg(b,k);
			cout<<"\nTotal price is "<<price[p].pr<<endl;
			p++;
		}
		else
		{
			cout<<"\n----Select available numbers----";
		}
	}
	else if(a==3)
	{
		int k=50,b;
		cout<<"\nPrice of 2 in 1 holder is "<<k;
		cout<<"\nYou need:";
		cin>>b;
		neg(b,k);
		cout<<"\nTotal price is "<<price[p].pr<<endl;
		p++;
	}
	else
	{
		cout<<"\n----Select available numbers----";
	}
}

int menu::leds()
{
	int a;
	cout<<"\nChoose number of watts"
	<<"\n1.3 watt"
	<<"\n2.7 watt"
	<<"\n3.12 watt"
	<<"\n4.Colour-full 3+3 watt";
	
	cin>>a;
	
	if(a==1)
	{
		
	}
	else if(a==2)
	{
		
	}
	else if(a==3)
	{
		
	}
	else if(a==4)
	{
		
	}
	else
	{
		cout<<"\n----Select available numbers----";
	}
}

int menu::main_switches()
{
	int a;
	cout<<"\nChoose company"
	<<"\n1. Olypmic"
	<<"\n2. Heavy"
	<<"\n3. C.M";
	
	cin>>a;
	
	if(a==1)
	{
		
	}
	else if(a==2)
	{
		
	}
	else if(a==3)
	{
		
	}
	else
	{
		cout<<"\n----Select available numbers----";
	}
}

int menu::nails()
{
	int a;
	cout<<"\nChoose material"
	<<"\n1.Steel"
	<<"\n2.Iron"
	<<"\n3.Dry wall screw";
	
	cin>>a;
	
	if(a==1)
	{
		cout<<"\nSize:"
		<<"1. 3/4 Inch"
		<<"2. 1 Inch"
		<<"3. 1.5 Inch"
		<<"4. 2 Inch"
		<<"5. 3 Inch";
	}
	else if(a==2)
	{
		cout<<"\nSize:"
		<<"1. 3/4 Inch"
		<<"2. 1 Inch"
		<<"3. 1.5 Inch"
		<<"4. 2 Inch"
		<<"5. 3 Inch"
		<<"6. 4 Inch"
		<<"7. 5 Inch"
		<<"8. 6 Inch";
	}
	else if(a==3)
	{
		cout<<"\nSize:"
		<<"1. 3/4 Inch"
		<<"2. 1 Inch"
		<<"3. 1.5 Inch"
		<<"4. 2 Inch"
		<<"5. 2.5 inch";
	}
	else
	{
		cout<<"\n----Select available numbers----";
	}
}

int menu::sheet()
{
	int a;
	cout<<"\nChoose company"
	<<"\n1.Wind Series"
	<<"\n2.Bell Series"
	<<"\n3.Zec Series";
	
	cin>>a;
	
	if(a==1)
	{
		cout<<"\nChoose category"
		<<"1. 1+1"
		<<"2. 2+2"
		<<"3. 4+2"
		<<"4. 6+2"
		<<"5. 8+2"
		<<"6.Dimmer"
		<<"7.Universal"
		<<"8.TV+TP";
	}
	else if(a==2)
	{
		cout<<"\nChoose category"
		<<"1. 1+1"
		<<"2. 2+2"
		<<"3. 4+2"
		<<"4. 6+2"
		<<"5. 8+2"
		<<"6.Dimmer"
		<<"7.Universal"
		<<"8.TV+TP";
	}
	else if(a==3)
	{
		cout<<"\nChoose category"
		<<"1. 1+1"
		<<"2. 2+2"
		<<"3. 4+2"
		<<"4. 6+2"
		<<"5. 8+2"
		<<"6.Dimmer"
		<<"7.Universal"
		<<"8.TV+TP";
	}
	else
	{
		cout<<"\n----Select available numbers----";
	}
}

int menu::special_lights()
{
	int a;
	cout<<"\nChoose Speciality"
	<<"\n1.Water-proof Light"
	<<"\n2.Colourful light"
	<<"\n3.Pipe Light";
	
	cin>>a;
	
	if(a==1)
	{
		int k=650,b;
		cout<<"\nPrice of E-27 Button holder is "<<k;
		cout<<"\nYou need:";
		cin>>b;
		neg(b,k);
		cout<<"\nTotal price is "<<price[p].pr<<endl;
		p++;
	}
	else if(a==2)
	{
		int k=60,b;
		cout<<"\nPrice of E-27 Button holder is "<<k;
		cout<<"\nYou need:";
		cin>>b;
		neg(b,k);
		cout<<"\nTotal price is "<<price[p].pr<<endl;
		p++;
	}
	else if(a==3)
	{
		
	}
	else
	{
		cout<<"\n----Select available numbers----";
	}
}

int menu::wires()
{
	int a;
	cout<<"\nChoose "
	<<"\n1.23/76"
	<<"\n2.3/29"
	<<"\n3.7/29"
	<<"\n4.7/36";
	
	cin>>a;
	
	if(a==1)
	{
		
	}
	else if(a==2)
	{
		
	}
	else if(a==3)
	{
		
	}
	else
	{
		cout<<"\n----Select available numbers----";
	}
}

int menu::wiring_products()
{
	int a;
	cout<<"\nChoose Product:"
	<<"\n1.Fan box"
	<<"\n2.light box"
	<<"\n3.Pipes"
	<<"\n4.Bends"
	<<"\n5.Sockets"
	<<"\n6.Connection Points";
	
	cin>>a;
	
	if(a==1)
	{
		
	}
	else if(a==2)
	{
		
	}
	else if(a==3)
	{
		
	}
	else
	{
		cout<<"\n----Select available numbers----";
	}
}
int menu::bill()
{
	int sum=0,i;
	for(i=0;i<p;i++)
	
	{
	    cout<<"\nYour bill for item number "<<i+1<<" is:"<<price[i].pr;
	    sum=sum+price[i].pr;
    }
    cout<<"\nTotal bill:"<<sum;
}
	
int main()
{
	
	menu m1;
int w;	

while(1)

   {

  cout<<"\n\n";

    cout<<"\t\t\tWelcome To My Electric Store\n\n\t\t\t"
    <<"What would you like to buy\n\n\t\t\t"
  
    <<"1.LED's.\t\t\t"			<<"8.Fans. \n\n\t\t\t"
    
	<<"2.Wires. \t\t\t"			<<"9.Nails. \n\n\t\t\t"
    
	<<"3.Electric Boards. \t\t"	<<"10.Wiring products. \n\n\t\t\t"
    
	<<"4.Button Sheets. \t\t"	<<"11.Holders. \n\n\t\t\t"
    
	<<"5.Bulbs. \t\t\t"			<<"12.Capacitors. \n\n\t\t\t"
    
	<<"6.Breakers. \t\t\t"		<<"13.main switches. \n\n\t\t\t"
    
	<<"7.Special lights. \t\t"	<<"14.Bill\n\n\t\t\t"
	
								<<"\t\t\t\t15.Exit";

    cout<<"\n\n\t\t\tEnter your choice:-> ";

    cin>>w;
  
    switch (w)
    {
    	case 1:
    		{
    			
			}
			break;
		case 2:
		    {
			
		    }
		
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
		    	price[p].bulb();
			}
			break;
		case 6:
		    {
			    price[p].breaker();
			}
			break;
		case 7:
		    {
			
			}
			break;
		case 8:
		    {
			    price[p].fans();
			}
			break;
		case 9:
		    {
			
			}
			break;
		case 10:
		    {
			
			}
			break;
		case 11:
		    {
			
			}
			break;
		case 12:
		    {
			    price[p].capacitor();
			}
			break;
		case 13:
		    {
			
			}
			break;
		case 14:
		    {
			    price[p].bill();
			}
			break;
		case 15:
		    {
			    exit(0);
		    }				
	}
   }
}
