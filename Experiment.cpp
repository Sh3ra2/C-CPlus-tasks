#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;



char* type(int i) 				//done
{
	
	int number;
	
	srand(i);
	number = rand()%100+1;
	
	if(number<35)
	{
		return "Simple";
	}
	else if(number>35 && number<40)
	{
		return "Trex";
	}
	else if(number>40 && number<50)
	{
		return "chicken";
	}
	else if(number>50 && number<70)
	{
		return "Snake";
	}
	else
	{
		return "Dragon";
	}
}

char* colour(int i) 			//done
{
	int number;
	
	srand(i);
	number = rand()%100+1;
	
	if(number<3)						//1
	{
		return "Rainbow(Pink,Yellow,Blue)";
	}
	else if(number>3 && number<6)		//2
	{
		return "Simple Black";
	}
	else if(number>7 && number<9)		//3
	{
		return "Simple Grey";
	}
	else if(number>9 && number<10)		//4
	{
		return "Simple Green";
	}
	else if(number>10 && number<13)		//5
	{	
		return "Simple Blue";
	}
	else if(number>13 && number<15)		//6
	{
		return "Simple White";
	}
	else if(number>15 && number<22)		//7
	{
		return "Pixeled Red,Blue,Black";
	}
	else if(number>22 && number<24)		//8
	{	
		return "Tiger Yellow,Black";
	}
	else if(number>24 && number<27)		//9
	{
		return "Tiger Red,Orange";
	}
	else if(number>27 && number<31)		//10
	{
		return "Tiger Blue,Cream";
	}
	else if(number>31 && number<33)		//11
	{	
		return "Tiger White,Black";
	}
	else if(number>33 && number<34)		//12
	{
		return "Tiger Brown Black";
	}
	else if(number>34 && number<37)		//13
	{
		return "Zebra Yellow,Black";
	}
	else if(number>37 && number<42)		//14
	{	
		return "Zebra Black,White";
	}
	else if(number>42 && number<48)		//15
	{
		return "Zebra Red,Orange";
	}
	else if(number>48 && number<53)		//16
	{
		return "Zebra Blue,White";
	}
	else if(number>53 && number<56)		//17
	{	
		return "Zebra Brown,Black";
	}
	else if(number>56 && number<61)		//18
	{
		return "Leopard Yellow,Black";
	}
	else if(number>61 && number<63)		//19
	{
		return "Leopard Black,White";
	}
	else if(number>63 && number<67)		//20
	{	
		return "Leopard Red,Orange";
	}
	else if(number>67 && number<69)		//21
	{
		return "Leopard Blue,White";
	}
	else if(number>69 && number<71)		//22
	{
		return "Leopard Brown,Black";
	}
	else if(number>71 && number<76)		//23
	{	
		return "Simple Brown";
	}
	else if(number>76 && number<77)		//24
	{
		return "Simple Red";
	}
	else if(number>77 && number<80)		//25
	{
		return "Pixeld Pink,White,Aqua";
	}
	else if(number>80 && number<81)		//26
	{	
		return "Stone Skin";
	}
	else if(number>81 && number<82)		//27
	{
		return "Bone Skin";
	}
	else if(number>82 && number<83)		//28
	{
		return "Spirit Skin";
	}
	else if(number>83 && number<84)		//29
	{	
		return "Gold Skin";
	}
	else if(number>84 && number<86)		//30
	{
		return "Rainbow Black,Green,Red";
	}
	else if(number>86 && number<90)		//31
	{
		return "Dotted Blue";
	}
	else if(number>90 && number<94)		//32
	{	
		return "Dotted Green";
	}
	else if(number>94 && number<97)		//33
	{
		return "Dotted Red";
	}
	else if(number>97 && number<98)		//34
	{
		return "Dotted Aqua";
	}
	else								//35
	{
		return "Dotted Pink";
	}
}

char* power(int i)				//done
{
	int number;
	
	srand(i);
	number = rand()%100+1;
	
	if(number<8)						//1
	{
		return "Super Jump";
	}
	else if(number>8 && number<17)		//2
	{
		return "Fireball";
	}
	else if(number>17 && number<18)		//3
	{	
		return "Invinsible";
	}
	else if(number>18 && number<24)		//4
	{
		return "Super Strength";
	}
	else if(number>24 && number<38)		//5
	{
		return "Super Speed";
	}
	else if(number>38 && number<43)		//6
	{	
		return "Snow Ball";
	}
	else if(number>43 && number<49)		//7
	{
		return "Turn To Liquid";
	}
	else if(number>49 && number<61)		//8
	{
		return "Super Stretchy";
	}
	else if(number>61 && number<76)		//9
	{	
		return "Super Form";
	}
	else if(number>76 && number<86)		//10
	{
		return "Super Big Super Small";
	}
	else if(number>86 && number<93)		//11
	{
		return "lighting like pikacho";
	}
	else 								//12
	{	
		return "Super Noise";
	}
}

char* background(int i)			//done
{
	int number;
	
	srand(i);
	number = rand()%100+1;
	
	if(number<5)						//1
	{
		return "Swamp";
	}
	else if(number>5 && number<11)		//2
	{
		return "Beach";
	}
	else if(number>11 && number<16)		//3
	{
		return "Modern Street";
	}
	else if(number>16 && number<24)		//4
	{
		return "Wooden House";
	}
	else if(number>24 && number<27)		//5
	{	
		return "Boat";
	}
	else if(number>27 && number<28)		//6
	{
		return "Plane";
	}
	else if(number>28 && number<30)		//7
	{
		return "Park";
	}
	else if(number>30 && number<38)		//8
	{	
		return "Jungle";
	}
	else if(number>38 && number<40)		//9
	{
		return "Office";
	}
	else if(number>40 && number<43)		//10
	{
		return "Bed(Sleeping)";
	}
	else if(number>43 && number<53)		//11
	{	
		return "Simple Blue";
	}
	else if(number>53 && number<63)		//12
	{
		return "Simple Black";
	}
	else if(number>63 && number<73)		//13
	{
		return "Simple Red";
	}
	else if(number>73 && number<77)		//14
	{	
		return "Raining";
	}
	else if(number>77 && number<83)		//15
	{
		return "Snowing";
	}
	else if(number>83 && number<85)		//16
	{
		return "Smokey Red";
	}
	else if(number>85 && number<89)		//17
	{	
		return "Smokey Black";
	}
	else if(number>89 && number<93)		//18
	{
		return "Space";
	}
	else if(number>93 && number<94)		//19
	{
		return "Spotlight";
	}
	else								//20
	{	
		return "Double Shade";
	}
}

char* Emotion(int i)			//done
{
	int number;
	
	srand(i);
	number = rand()%100+1;
	
	if(number<5)						//1
	{
		return "Angry";
	}
	else if(number>5 && number<20)		//2
	{
		return "Confused";
	}
	else if(number>20 && number<30)		//3
	{
		return "Happy";
	}
	else if(number>30 && number<40)		//4
	{
		return "Crying";
	}
	else if(number>40 && number<55)		//5
	{
		return "Bored";
	}
	else if(number>55 && number<65)		//6
	{
		return "Focused";
	}
	else if(number>65 && number<75)		//7
	{
		return "Sleepy";
	}
	else if(number>75 && number<90)		//8
	{
		return "Surprised";
	}
	else if(number>90 && number<95)		//9
	{
		return "Exotic";
	}
	else 								//10
	{
		return "Joker";
	}
}

char* dress(int i)				//done
{
	int number;
	
	srand(i);
	number = rand()%1000+1;
	
	if(number<10)						//1
	{
		return "Doctor";
	}
	else if(number>10 && number<30)		//2
	{
		return "Engineer";
	}
	else if(number>30 && number<50)		//3
	{
		return "Business Man";
	}
	else if(number>50 && number<90)		//4
	{
		return "Lawyer";
	}
	else if(number>90 && number<110)		//5
	{	
		return "Trader";
	}
	else if(number>110 && number<140)		//6
	{
		return "Programmer";
	}
	else if(number>140 && number<150)		//7
	{
		return "Painter";
	}
	else if(number>150 && number<180)		//8
	{	
		return "Free";
	}
	else if(number>180 && number<200)		//9
	{
		return "Army Officer";
	}
	else if(number>200 && number<220)		//10
	{
		return "Cook";
	}
	else if(number>220 && number<230)		//11
	{	
		return "Model";
	}
	else if(number>230 && number<240)		//12
	{
		return "Nature(Social Worker)";
	}
	else if(number>240 && number<280)		//13
	{
		return "Scuba Diver";
	}
	else if(number>280 && number<300)		//14
	{	
		return "Dancer";
	}
	else if(number>300 && number<340)		//15
	{
		return "Pilot";
	}
	else if(number>340 && number<350)		//16
	{
		return "Police Officer";
	}
	else if(number>350 && number<380)		//17
	{	
		return "Youtuber";
	}
	else if(number>380 && number<390)		//18
	{
		return "TikToker";
	}
	else if(number>390 && number<420)		//19
	{
		return "The Over";
	}
	else if(number>420 && number<440)		//20
	{	
		return "Astraunat";
	}
	else if(number>440 && number<460)		//21
	{
		return "Yoga Trainer";
	}
	else if(number>460 && number<490)		//22
	{
		return "Gym Freak";
	}
	else if(number>490 && number<500)		//23
	{	
		return "Samurai";
	}
	else if(number>500 && number<540)		//24
	{
		return "Black ninja";
	}
	else if(number>540 && number<550)		//25
	{
		return "Kratey Teacher";
	}
	else if(number>550 && number<590)		//26
	{	
		return "Indus Civilian";
	}
	else if(number>590 && number<620)		//27
	{
		return "Jungle Boy";
	}
	else if(number>620 && number<660)		//28
	{
		return "Architect";
	}
	else if(number>660 && number<670)		//29
	{	
		return "Fighter";
	}
	else if(number>670 && number<690)		//30
	{
		return "Archer";
	}
	else if(number>690 && number<730)		//31
	{
		return "Wizard";
	}
	else if(number>730 && number<750)		//32
	{	
		return "Dress Of Petals";
	}
	else if(number>750 && number<780)		//33
	{
		return "Torn Clothes";
	}
	else if(number>780 && number<790)		//34
	{
		return "Dark Kratey Teacher";
	}
	else if(number>790 && number<820)		//35
	{
		return "Big Coat (Lie Hoody)";
	}
	else if(number>820 && number<850)		//36
	{	
		return "Warrior";
	}
	else if(number>850 && number<890)		//37
	{
		return "Peaky Blinder";
	}
	else if(number>890 && number<920)		//38
	{
		return "White Ninja";
	}
	else if(number>920 && number<960)		//39
	{
		return "Student";
	}
	else								//40
	{
		return "School Teacher";
	}
}

char* teeth(int i)				//done
{
	int number;
	
	srand(i);
	number = rand()%100+1;
	
	if(number<10)						//1
	{
		return "Gold";
	}
	else if(number>10 && number<15)		//2
	{
		return "Diamond";
	}
	else if(number>15 && number<50)		//3
	{
		return "Normal";
	}
	else if(number>50 && number<70)		//4
	{
		return "Broken";
	}
	else if(number>70 && number<90)		//5
	{	
		return "Sharp";
	}
	else 								//6
	{
		return "Dracula";
	}
}

char* eyes(int i)				//done
{
	int number;
	
	srand(i);
	number = rand()%100+1;
	
	if(number<2)						//1
	{
		return "Dollar Eyes";
	}
	else if(number>2 && number<10)		//2
	{
		return "Black Eyes";
	}
	else if(number>10 && number<20)		//3
	{
		return "Red Eyes";
	}
	else if(number>20 && number<22)		//4
	{
		return "Glowing Green Eyes";
	}
	else if(number>22 && number<32)		//5
	{	
		return "Blue Eyes";
	}
	else if(number>32 && number<38)		//6
	{
		return "Purple Eyes";
	}
	else if(number>38 && number<44)		//7
	{
		return "Brown Eyes";
	}
	else if(number>44 && number<52)		//8
	{	
		return "Black Glasses";
	}
	else if(number>52 && number<58)		//9
	{
		return "Computer Glasses";
	}
	else if(number>58 && number<60)		//10
	{
		return "VR Box";
	}
	else if(number>60 && number<62)		//11
	{	
		return "Robo Red Eyes";
	}
	else if(number>62 && number<65)		//12
	{
		return "Yellow Glasses";
	}
	else if(number>65 && number<68)		//13
	{
		return "Blue Glasses";
	}
	else if(number>68 && number<69)		//14
	{	
		return "Glowing Red Eyes";
	}
	else if(number>69 && number<72)		//15
	{
		return "Suspicious";
	}
	else if(number>72 && number<73)		//16
	{
		return "One eye Black";
	}
	else if(number>73 && number<78)		//17
	{	
		return "Long Verticle Green lens";
	}
	else if(number>78 && number<83)		//18
	{
		return "Long Verticle Blue lens";
	}
	else if(number>83 && number<87)		//19
	{
		return "Long Verticle Purple lens";
	}
	else if(number>87 && number<90)		//20
	{	
		return "Long Glowing Verticle Yellow lens";
	}
	else if(number>90 && number<93)		//21
	{
		return "Long Glowing Verticle Blue lens";
	}
	else if(number>93 && number<97)		//22
	{
		return "Red Glasses";
	}
	else if(number>97 && number<98)		//23
	{	
		return "Blue Glowing Eyes";
	}
	else if(number>98 && number<99)		//24
	{
		return "Yellow Glowing Eyes";
	}
	else 								//25
	{
		return "Brown Glowing Eyes";
	}
}

char* hat(int i)				//done
{
	int number;
	
	srand(i);
	number = rand()%100+1;
	
	if(number<1)						//1
	{
		return "Devil Horns";
	}
	else if(number>1 && number<9)		//2
	{
		return "Simple";
	}
	else if(number>9 && number<15)		//3
	{
		return "Birthday Cap";
	}
	else if(number>15 && number<18)		//4
	{
		return "Halloween Pumpkin";
	}
	else if(number>18 && number<19)		//5
	{	
		return "Bone Crown";
	}
	else if(number>19 && number<20)		//6
	{
		return "Gold Crown";
	}
	else if(number>20 && number<22)		//7
	{
		return "Boul Hair";
	}
	else if(number>22 && number<25)		//8
	{	
		return "Spiked Hair";
	}
	else if(number>25 && number<28)		//9
	{
		return "Headphone";
	}
	else if(number>28 && number<36)		//10
	{
		return "Cowboy Hat";
	}
	else if(number>36 && number<40)		//11
	{	
		return "Black Beanie";
	}
	else if(number>40 && number<44)		//12
	{
		return "Blue Beanie";
	}
	else if(number>44 && number<54)		//13
	{
		return "Simple Cap";
	}
	else if(number>54 && number<57)		//14
	{	
		return "Mirror Boul";
	}
	else if(number>57 && number<59)		//15
	{
		return "Tarzan Hair Small";
	}
	else if(number>59 && number<61)		//16
	{
		return "Tarzan Hair Long With Pony";
	}
	else if(number>61 && number<63)		//17
	{	
		return "Tarzan Hair Long Open";
	}
	else if(number>63 && number<66)		//18
	{
		return "One Big Horn";
	}
	else if(number>66 && number<67)		//19
	{
		return "Three Horn Crown";
	}
	else if(number>67 && number<73)		//20
	{	
		return "Flying Star On Head";
	}
	else if(number>73 && number<79)		//21
	{
		return "Flying Ring On Head";
	}
	else if(number>79 && number<80)		//22
	{
		return "Flying Monety On Head";
	}
	else if(number>80 && number<85)		//23
	{	
		return "Heist Mask";
	}
	else if(number>85 && number<95)		//24
	{
		return "Hard Work Strap White";
	}
	else								//25
	{
		return "Painter Caop";
	}
}

char* tail_special(int i)		//done
{
	int number;
	
	srand(i);
	number = rand()%100+1;
	
	if(number<1)						//1
	{
		return "Thorns";
	}
	else if(number>1 && number<11)		//2
	{
		return "Spere block";
	}
	else if(number>11 && number<14)		//3
	{
		return "3 blades";
	}
	else if(number>14 && number<34)		//4
	{
		return "Simple";
	}
	else if(number>34 && number<42)		//5
	{
		return "Flaps";
	}
	else if(number>42 && number<57)		//6
	{
		return "Double Tails";
	}
	else if(number>57 && number<62)		//7
	{
		return "Fang(Scorpio)";
	}
	else if(number>62 && number<70)		//8
	{
		return "Long Long Tail";
	}
	else if(number>70 && number<72)		//9
	{
		return "Gold rings";
	}
	else if(number>72 && number<77)		//10
	{
		return "Square Block";
	}
	else if(number>77 && number<79)		//11
	{
		return "Old Rings";
	}
	else if(number>79 && number<89)		//12
	{
		return "4 Tail";
	}
	else if(number>89 && number<94)		//13
	{
		return "Fire Ball";
	}
	else if(number>94 && number<96)		//14
	{
		return "Arrow";
	}
	else								//15
	{
		return "plane";
	}
}

char* shoes(int i)				//done
{
	int number;
	
	srand(i);
	number = rand()%100+1;
	
	if(number<8)						//1
	{
		return "Blue Sneaker";	
	}
	else if(number>8 && number<10)		//2
	{
		return "Yellow Sneaker";
	}
	else if(number>10 && number<12)		//3
	{
		return "Purple Sneaker";
	}
	else if(number>12 && number<22)		//4
	{
		return "Green Sneaker";
	}
	else if(number>22 && number<32)		//5
	{
		return "Silver Shiny Shoe";
	}
	else if(number>32 && number<37)		//6
	{
		return "Golden Shiny Shoe";
	}
	else if(number>37 && number<39)		//7
	{
		return "Orange Shoes";
	}
	else if(number>39 && number<59)		//8
	{
		return "Long Boots";
	}
	else if(number>59 && number<64)		//9
	{
		return "Flip Flops Black";
	}
	else if(number>64 && number<72)		//10
	{
		return "Flip Flops Red";
	}
	else if(number>72 && number<76)		//11
	{
		return "Flip Flops Green";
	}
	else if(number>76 && number<79)		//12
	{
		return "Flip Flops Orange";
	}
	else if(number>79 && number<84)		//13
	{
		return "Flip Flops Purple";
	}
	else if(number>84 && number<85)		//14
	{
		return "Jogers Black";
	}
	else								//15
	{
		return "Joger White";
	}
}



int main()
{
	int j;
	
	
	int a;
	
	char* Get_Type = type(0);
	char* Get_Color = colour(0); 
	char* Get_Power = power(0);
	char* Get_Background = background(0);
	char* Get_Emotion = Emotion(0);
	char* Get_Dress = dress(0);
	char* Get_Teeth = teeth(0);
	char* Get_Eyes = eyes(0);
	char* Get_Hat = hat(0);
	char* Get_Tail = tail_special(0); 
	char* Get_Shoes = shoes(0);
	
	do
	{
		//Time random J
		srand(time(0));
		j = rand()%100+1;
		
		system("cls");
		cout<<"List\n\n";
		for(int i=0;i<=1000;i++)
		{
			
			cout<<"("<<i<<")"<<endl<<endl;
			
			Get_Background=background(i+j+1);
			cout<<"Background: 	"<<Get_Background<<endl;
			Get_Type=type(i+j+2);
			cout<<"Type: 		"<<Get_Type<<endl;
			Get_Color=colour(i+j+3);
			cout<<"Colour: 	"<<Get_Color<<endl;
			Get_Dress=dress(i+i);
			cout<<"Dress: 		"<<Get_Dress<<endl;
			Get_Emotion=Emotion(i+j+34);
			cout<<"Emotion: 	"<<Get_Emotion<<endl;
			Get_Eyes=eyes(i+j+43);
			cout<<"Eyes: 		"<<Get_Eyes<<endl;
			Get_Hat=hat(i+j+3);
			cout<<"Hat: 		"<<Get_Hat<<endl;
			Get_Power=power(i+j+22);
			cout<<"Power: 		"<<Get_Power<<endl;
			Get_Shoes=shoes(i+j+5);
			cout<<"Shoes: 		"<<Get_Shoes<<endl;
			Get_Tail=tail_special(i+j+8);
			cout<<"Tail: 		"<<Get_Tail<<endl;
			Get_Teeth=teeth(i+j+9);
			cout<<"Teeth: 		"<<Get_Teeth<<endl;
			
			cout<<endl;
		}
		system("pause");
	}while(a);
}
