#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<iomanip.h>

struct ctm
{
	char name[30];    //customer name
	char add[50];     //          address
	long double con;         //contact no.
	char color[8];   // car/bike color
	char cname[40];  // car/bike name
	int ID;           //customer id
	char PM[10];          //customer payment method

}c;

class custom
{
  public:
	void Display();
	void color();
}c1;

void custom::Display()
{
	clrscr();
	int f=0;
	long n;
	cout<<"Enter the customer ID no. to search record: ";
	cin>>n;
	ifstream fin("CUSTOMER.TXT");
	while(fin.read((char*)&c,sizeof(c)))
	{
		if(n==c.ID)
		{
			f=1;
			cout<<"\nName            =>";
			cout<<"\nAddress       	=>";
			cout<<"\nID no.        	=>";
			cout<<"\nContact         =>";
			cout<<"\nCar/Bike owned  =>";
			cout<<"\nColor 	        =>";
			cout<<"\nPayment Method =>";
			gotoxy(21,3);
			cout<<c.name;
			gotoxy(21,4);
			cout<<c.add;
			gotoxy(21,5);
			cout<<c.ID;
			gotoxy(21,6);
			cout<<c.con;
			gotoxy(21,7);
			cout<<c.cname;
			gotoxy(21,8);
			cout<<c.color;
			gotoxy(21,9);
			cout<<c.PM;
		}
	}
	if(f==0)
	    cout<<"No record found having this ID";
	getch();
	fin.close();
}
void custom::color()
{
	 int r;
	clrscr();
	cout<<"\nChoose a color:- ";
	cout<<"\n1: Black";
	cout<<"\n2: White";
	cout<<"\n3: Yellow";
	cout<<"\n4: Red";
	cout<<"\n5: Grey";
	cout<<"\n6: Blue";
	cout<<"\n7: Green";
	cout<<"\nEnter your choice: ";
	cin>>r;
	switch(r)
	{
		case 1:strcpy(c.color,"Black");
			    break;
		case 2:strcpy(c.color,"White");
			   break;
		case 3:strcpy(c.color,"Yellow");
			   break;
		case 4:strcpy(c.color,"Red");
			   break;
		case 5:strcpy(c.color,"Grey");
			   break;
		case 6:strcpy(c.color,"Blue");
			   break;
		case 7:strcpy(c.color,"Green");
			   break;
		default:cout<<"\nYou have entered a wrong value";
			   break;

	}
}
void Buy()
{
	char ch;

	cout<<"\n\nDo you want to buy this car/bike?[y/n]= ";
	cin>>ch;
	if(ch=='y'||ch=='Y')
	{
		clrscr();
		ofstream fout;
		fout.open("CUSTOMER.txt",ios::app|ios::out);
		cout<<"Enter your Details";
		cout<<"\n\n\n\t1.Name                  =>   ";
		cout<<"\n\n\t2.Address               =>    ";
		cout<<"\n\n\t3.Identification no.    =>    ";
		cout<<"\n\n\t4.Contact number        =>    ";
		cout<<"\n\n\t5.Payment method        =>    ";
		cout<<"\n\t (Cheque/Cash/card)           ";
		gotoxy(37,4);
		gets(c.name);
		gotoxy(37,6);
		gets(c.add);
		gotoxy(37,8);
		cin>>c.ID;
		gotoxy(37,10);
		cin>>c.con;
		gotoxy(37,12);
		gets(c.PM);
		 c1.color();
		fout.write((char*)&c,sizeof(c));
		fout.close();
		cout<<"\nCONGRATULATIONS for your new vehicle:\n\n";
		cout<<"=>"<<c.cname<<" ("<<c.color<<")";
		cout<<"\n\nPress enter to go to the car/bike section.";
		getch();
	}
	else
	{
		cout<<"\nWant to go out of shop[y/n]?";
		cin>>ch;
		if(ch=='y'||ch=='Y')
		{
		 cout<<"\nTHANKS FOR COMING, VISIT AGAIN";
		 getch();
		 exit(0);

		}
		else
			return;
	}
}


void main()
{
	     clrscr();
       cout<<"\n\t00      00  0000000  00       000000   000000  0000   0000  0000000";
       cout<<"\n\t00      00  00       00       00       00  00  00  000  00  00     ";
       cout<<"\n\t00  00  00  00000    00       00       00  00  00  000  00  00000  ";
       cout<<"\n\t00  00  00  00       00       00       00  00  00       00  00     ";
       cout<<"\n\t0000000000  0000000  0000000  0000000  000000  00       00  0000000";
       cout<<"\n\n\t\t\t        00000000  000000        ";
       cout<<"\n\t\t\t           00     00  00     ";
       cout<<"\n\t\t\t           00     00  00      ";
       cout<<"\n\t\t\t           00     00  00      ";
       cout<<"\n\t\t\t           00     000000      ";
       cout<<"\n\n\t\t           000000 ";
       cout<<"\n\t\t           00           00      00    ";
       cout<<"\n\t\t           00         000000  000000    ";
       cout<<"\n\t\t           00           00      00    ";
       cout<<"\n\t\t           000000 ";
       cout<<"\n\n  000000  000000  000000   000000  00000  00000  000000     000000  00      00 ";
       cout<<"\n  00  00  00  00  00  00     00    00     00       00       00  00  0000    00 ";
       cout<<"\n  000000  000000  00  00     00    000    00       00       00  00  00  00  00 ";
       cout<<"\n  00      00 00   00  00  00 00    00     00       00       00  00  00    0000 ";
       cout<<"\n  00      00  00  000000  00000    00000  00000    00       000000  00      00 " ;
       getch();
       clrscr();
       cout<<"\n\n\n";
       cout<<"\n 0000000     00     000000   00000         /  00000   000000  00  00  00000";
       cout<<"\n 00         0  0    00  00   00          /    00   0    00    00 00   00   ";
       cout<<"\n 00        000000   000000   00000     /      00000     00    0000    00000";
       cout<<"\n 00       00    00  00 00       00   /        00   0    00    00 00   00   ";
       cout<<"\n 0000000 00      00 00   00  00000 /          00000   000000  00  00  00000";
       cout<<"\n\n\n";
       cout<<"\n   0000   0000      00      00     00      00      000000000  000000  000000 " ;
       cout<<"\n   00  000  00     0  0     0000   00     0  0     00         00      00  00";
       cout<<"\n   00  000  00    000000    00 00  00    000000    00  00000  0000    000000   ";
       cout<<"\n   00       00   00    00   00   0000   00    00   00  00 00  00      00 00 ";
       cout<<"\n   00       00  00      00  00     00  00      00  000000 00  000000  00  00";
       getch();
	int chh;
	 MM:clrscr();
	cout<<"\n\t\t\t BEST IN CLASS CARS/BIKES DEALERS";
	cout<<"\n\t\t\t----------------------------------\n\n";
	cout<<"\t\t\t=====================";
	cout<<"\n\t\t\t|   1.CARS          |";
	cout<<"\n\t\t\t|   2.BIKES         |";
	cout<<"\n\t\t\t|   3.SEARCH RECORD |";
	cout<<"\n\t\t\t|   4.EDIT RECORD   |";
	cout<<"\n\t\t\t|   5.ABOUT SHOP    |";
	cout<<"\n\t\t\t|   6.EXIT SHOP     |";
	cout<<"\n\t\t\t=====================";
	cout<<"\nEnter your choice: ";
	cin>>chh;
	switch(chh)//1
{
	case 1:    //cars
	   C1:  clrscr();
		cout<<"\n\t\t\t CARS";
		cout<<"\n\t\t\t------";
		int ch0;
		cout<<"\nSelect the car manufacturer :";
		cout<<"\n1.Bugatti";
		cout<<"\n2.BMW";
		cout<<"\n3.Mercedes ";
		cout<<"\n4.Rolls-Royce ";
		cout<<"\n5.Ferrari";
		cout<<"\n6.Lamborghini";
		cout<<"\n7.Exit to main menu";
		cout<<"\nEnter your choice: ";
		cin>>ch0;
		switch(ch0)
		{
			case 1:                                                               //DB
			    BU: clrscr();
				cout<<"\n\t\t\t\t   BUGATTI ";
				cout<<"\n\t\t\t\t  ---------\n";
				cout<<"Enter the choice of your car:\n";
				cout<<"\n1.Veyron 16.4 Grand Sport";
				cout<<"\n2.Veyron 16.4 Super Sport";
				cout<<"\n3.Veyron Grand Sport Vitesse";
				cout<<"\n4.Chiron";
				cout<<"\n5.Exit to car menu";
				cout<<"\nchoice:";int ch1;
				cin>>ch1;
				switch(ch1)
				{
				      case 1:
					clrscr();
					strcpy(c.cname,"Bugatti Veyron 16.4 Grand Sport");
					cout<<"\n Bugatti Veyron 16.4 Grand Sport";
					cout<<"\n---------------------------------\n";
					cout<<"\nEngine Description      =>   8.0-litre supercharged 64V W16 Engine";
					cout<<"\nEngine Displacement     =>   7993 cc";
					cout<<"\nPower                   =>   1001HP@6000rpm(737kW)";
					cout<<"\nTorque                  =>   1250Nm@2200-5000rpm";
					cout<<"\nNo Of Cylinders         =>   16";
					cout<<"\nValves per cylinder     =>   4";
					cout<<"\nTransmission            =>   Automatic";
					cout<<"\nGear box                =>   7 Speed";
					cout<<"\nTop Speed               =>   407 Kmph";
					cout<<"\nAcceleration(0-100 kmph)=>   >2.7 Seconds";
					cout<<"\nFuel tank capacity      =>   100 Litres";
					cout<<"\nEffciency               =>   6.5 kmpl" ;
					cout<<"\nBase Price              =>   11.56 Cr*";
					getch();
					Buy();
					break;
					      case 2:
					clrscr();
					strcpy(c.cname,"Bugatti Veyron 16.4 Super Sport");
					cout<<"\n Bugatti Veyron 16.4 Super Sport";
					 cout<<"\n---------------------------------\n";
					cout<<"\nEngine Descrption       =>   64V W16 Engine ";
					cout<<"\nEngine Displacement     =>   7998 cc";
					cout<<"\nPower                   =>   1200HP@6400rpm(882kW)";
					cout<<"\nTorque                  =>   1500Nm@3000-6000rpm";
					cout<<"\nNo Of Cylinders         =>   16";
					cout<<"\nValves per cylinder     =>   4";
					cout<<"\nTransmission            =>   Automatic";
					cout<<"\nGear box                =>   7 Speed";
					cout<<"\nTop Speed               =>   431 Kmph";
					cout<<"\nAcceleration(0-100 kmph)=>   2.4 Seconds";
					cout<<"\nFuel tank capacity      =>   100 Litres";
					cout<<"\nEffciency               =>   6.8 kmpl" ;
					cout<<"\nBase Price              =>   15.78 Cr*";
					getch();
					Buy();
					break;
				      case 3:
					clrscr();
					strcpy(c.cname,"Bugatti Veyron Grand Vitesse");
					cout<<"\n Bugatti Veyron Grand Sport Vitesse";
					cout<<"\n------------------------------------\n";
					cout<<"\nEngine Description      =>   64V W16 Engine ";
					cout<<"\nEngine Displacement     =>   7993 cc";
					cout<<"\nPower                   =>   1200HP@6000rpm(822kW)";
					cout<<"\nTorque                  =>   1250Nm@3000-5000rpm";
					cout<<"\nNo Of Cylinders         =>   16";
					cout<<"\nValves per cylinder     =>   4";
					cout<<"\nTransmission            =>   Automatic";
					cout<<"\nGear box                =>   7 Speed";
					cout<<"\nTop Speed               =>   415 Kmph";
					cout<<"\nAcceleration(0-100 kmph)=>   2.6 Seconds";
					cout<<"\nFuel tank capacity      =>   100 Litres";
					cout<<"\nEffciency               =>   7.2 kmpl" ;
					cout<<"\nBase Price              =>   12.24 Cr*";
					getch();
					Buy();
					break;
				     case 4:
					clrscr();
					strcpy(c.cname,"Bugatti Chiron 2018");
					cout<<"\n Bugatti Chiron 2018";
					 cout<<"\n----------------------\n";
					cout<<"\nEngine Description      =>   8.0 litre W16 64V DOHC 4 turbocharges Engine";
					cout<<"\nEngine Displacement     =>   7993 cc";
					cout<<"\nPower                   =>   1500 PS (1479 BHP) @ 6700 rpm";
					cout<<"\nTorque                  =>   1600 NM @ 2000-6000 rpm";
					 cout<<"\nNo Of Cylinders         =>   16";
					 cout<<"\nValves per cylinder     =>   4";
					 cout<<"\nTransmission            =>   Automatic";
					cout<<"\nGear box                =>   7-Speed, dual clutch automatic gearbox";
					cout<<"\nTop Speed               =>   420 Kmph(463 belived)";
					cout<<"\nAcceleration(0-100 kmph)=>   2.5 Seconds";
					cout<<"\nFuel tank capacity      =>  100 Litres";
					cout<<"\nEffciency               =>   6.5 kmpl" ;
					cout<<"\nBase Price              =>   20.36 Cr*";
					getch();
					Buy();
					break;
				    case 5:goto C1;

				    default:
					cout<<"\nPLEASE ENTER CORRECT CHOICE ";
					getch();
					goto BU; //Bugatti menu
					}
					goto C1;

			case 2:
			BW: clrscr();   //DB
				cout<<"\n\t\t\t\t   BMW ";
				cout<<"\n\t\t\t\t  -----\n";
				cout<<"Enter the choice of your car:\n";

				cout<<"\n1.M5 2016";
				cout<<"\n2.i8";
				cout<<"\n3.X5 SUV M";
				cout<<"\n4.BMW M6 Gran Coupe'";
				cout<<"\n5.Exit";
				cout<<"\nchoice:";
				int ch2;
				cin>>ch2;
				switch(ch2)
				{
				     case 1:
					clrscr();
					strcpy(c.cname,"BMW M5 2016");
					cout<<"\nBMW M5 2016\n";
					cout<<"---------------\n";
					cout<<"\nEngine Description      =>   Twin-turbocharged and intercooled V-8";
					cout<<"\nEngine Displacement     =>   5000 cc";
					cout<<"\nPower                   =>   560HP@6000rpm";
					cout<<"\nTorque                  =>   500Nm@1500";
					cout<<"\nNo Of Cylinders         =>   8";
					cout<<"\nTransmission            =>   Automated manual";
					cout<<"\nGear box                =>   6 Speed";
					cout<<"\nTop Speed               =>   306 Kmph";
					cout<<"\nAcceleration(0-100 kmph)=>   3.9 Seconds";
					cout<<"\nFuel tank capacity      =>   80 litres";
					cout<<"\nEffciency               =>   17.54 kmpl" ;
					cout<<"\nBase Price              =>   78.20 Lakhs";
					getch();
					Buy();
					break;
				    case 2:
					clrscr();
					strcpy(c.cname,"BMW i8");
					cout<<"\nBMW i8\n";
					 cout<<"---------\n";
					cout<<"\nEngine description      =>  Turbocharged and intercooled gas/electric inline-3";
					cout<<"\nEngine Displacement     =>   1499 cc Hybrid - powered";
					cout<<"\nPower                   =>   357HP@5800rpm";
					cout<<"\nTorque                  =>   420Nm";
					cout<<"\nNo Of Cylinders         =>   8";
					cout<<"\nTransmission            =>   automatic";
					cout<<"\nGear box                =>   6 Speed";
					cout<<"\nTop Speed               =>   250 Kmph";
					cout<<"\nAcceleration(0-100 kmph)=>   4.0 Seconds";
					cout<<"\nBattery capacity        =>   93 KWh Litium ion";
					cout<<"\nEffciency               =>   32 Kmpw" ;
					cout<<"\nBase Price              =>   92.48 Lakhs";
					getch();
					Buy();
					break;
				    case 3:
					clrscr();
					strcpy(c.cname,"BMW X5 SUV M");
					cout<<"\nBMW X5 SUV M\n";
					cout<<"---------------\n";
					cout<<"\nEngine description      =>  Twin-turbocharged and intercooled V-8";
					cout<<"\nEngine Displacement     =>   2993 cc";
					cout<<"\nPower                   =>   570HP@6000RPM";
					 cout<<"\nTorque                  =>   560nm@2200RPM";
					cout<<"\nNo Of Cylinders         =>   8";
					cout<<"\nTransmission            =>   automatic";
					cout<<"\nGear box                =>   8 Speed";
					cout<<"\nTop Speed               =>   250 Kmph";
					cout<<"\nAcceleration(0-100 kmph)=>   4.0 Seconds";
					 cout<<"\nFuel tank capacity      =>   85 Litres";
					cout<<"\nEffciency               =>   14.24 Kmpl" ;
					 cout<<"\nBase Price              =>   68 Lakhs";
					getch();
					Buy();
					 break;
				case 4:
					clrscr();
					strcpy(c.cname,"BMW M6 Gran Coupe");
					cout<<"\nBMW M6 Gran Coupe'\n";
					cout<<"---------------------\n";
					cout<<"\nEngine description      =>  Twin-turbocharged and intercooled V-8";
					cout<<"\nEngine Displacement     =>   4395 cc";
					cout<<"\nPower                   =>   560HP@6000RPM";
					cout<<"\nTorque                  =>   590nm@1500RPM";
					cout<<"\nNo Of Cylinders         =>   8";
					cout<<"\nTransmission            =>   automated manual";
					cout<<"\nGear box                =>   7 Speed";
					cout<<"\nTop Speed               =>   330 Kmph";
					cout<<"\nAcceleration(0-100 kmph)=>   4.2 Seconds";
					cout<<"\nFuel tank capacity      =>   80 Litres";
					cout<<"\nEffciency               =>   12 Kmpl" ;
					cout<<"\nBase Price              =>   81.60 Lakhs";
					getch();
					Buy();
					break;
				case 5:goto C1;
				default:
					cout<<"\nPLEASE ENTER CORRECT CHOICE ";
					getch();
					goto BW; //BMW menu
				 }
				 goto C1;


	case 3:                                  //KDP
		MB:   clrscr();
		   cout<<"\n\t\t\t\tMercedes-Benz";
		   cout<<"\n\t\t\t\t--------------";
		   cout<<"\n 1. Mercedes-Benz-A-Class ";
		   cout<<"\n 2. Mercedes-Benz-S-Class ";
		   cout<<"\n 3. Mercedes-Benz GA ";
		   cout<<"\n 4. Mercedes-Benz LC ";
		   cout<<"\n 5. Exit";
		   cout<<"\n\n Enter your choice:  ";
		   cin>>ch1;
		   clrscr();
		      switch(ch1)
		      {
			  case 1:       clrscr();
				  strcpy(c.cname,"Mercedes-Benz-A-Class");
				  cout<<"\nMercedes-Benz-A-Class";
				  cout<<"\n-----------------------\n";
				  cout<<"\n Fuel Type => Petrol/Diesel ";
				  cout<<"\n Engine CC => 1595 cc ";
				  cout<<"\n Power     => 122bhp@5000rpm ";
				  cout<<"\n Torque    => 200Nm@1250-4000rpm ";
				  cout<<"\n Top Speed => 202 km/h ";
				  cout<<"\n Fuel Tank => 50 Ltr ";
				  cout<<"\n Mileage   => 13 kmpl ";
				  cout<<"\n Price     => 27.53 Lakh ";
				  getch();
				  Buy();
				  break;
			  case 2: clrscr();
				  strcpy(c.cname,"Mercedes-Benz-S-Class");
				  cout<<"\n Mercedes-Benz-S-Class ";
				  cout<<"\n-----------------------\n";
				  cout<<"\n Fuel Type => Petrol/Diesel ";
				  cout<<"\n Engine CC => 2987 cc ";
				  cout<<"\n Power     => 254bhp@3600rpm ";
				  cout<<"\n Torque    => 620Nm@1600-2400rpm ";
				  cout<<"\n Top Speed => 250 km/h ";
				  cout<<"\n Fuel Tank => 60 Ltr ";
				  cout<<"\n Mileage   => 13 kmpl ";
				  cout<<"\n Price     => 1.17 Cr* ";
				  getch();
				  Buy();
				 break;

			  case 3:       clrscr();
				  strcpy(c.cname,"Mercedes-Benz GLA");
				  cout<<"\nMercedes-Benz GLA ";
				  cout<<"\n------------------\n";
				  cout<<"\n Fuel Type => Petrol/Diesel ";
				  cout<<"\n Engine CC => 2143 cc ";
				  cout<<"\n Power     => 135.96 PS ";
				  cout<<"\n Torque    => 3000 Nm ";
				  cout<<"\n Top Speed => 205 km/h ";
				  cout<<"\n Fuel Tank => 50 Ltr ";
				  cout<<"\n Mileage   => 17 kmpl";
				  cout<<"\n Price     =>  34 lakh ";
				  getch();
				  Buy();
				  break;

			  case 4: clrscr();
				  strcpy(c.cname,"Mercedes-Benz SLC");
				  cout<<"\n Mercedes-Benz SLC ";
				  cout<<"\n-------------------\n";
				  cout<<"\n Fuel Type => Petrol ";
				  cout<<"\n Engine CC => 2996 cc ";
				  cout<<"\n Power     => 367bhp@5550rpm ";
				  cout<<"\n Torque    => 520Nm@2000-4200rpm ";
				  cout<<"\n Top Speed => 250 km/h ";
				  cout<<"\n Fuel Tank => 60 Ltr ";
				  cout<<"\n Mileage   => 19 kmpl ";
				  cout<<"\n Price     => 82.67 Lakh ";
				  getch();
				  Buy();
				  break;
			 case 5:goto C1;
			default:
				   cout<<"\nPLEASE ENTER CORRECT CHOICE ";
				   getch();
				  goto MB; //Mercedces menu
				  }
				  goto C1;

	  case 4:
		RR:clrscr();
		   cout<<"\tRolls-Royce";
		   cout<<"\n\t----------";
		   cout<<"\n 1. Wraith ";
		   cout<<"\n 2. Dawn  ";
		   cout<<"\n 3. Phantom  ";
		   cout<<"\n 4. Exit";
		   int ch2_;
		   cout<<"\n\n Enter your choice:  ";
		   cin>>ch2_;
		   clrscr();
		      switch(ch2_)
		      {
			  case 1:
				  strcpy(c.cname,"Rolls-Royce Wraith");
				  cout<<"\n Rolls-Royce Wraith ";
				  cout<<"\n---------------------";
				  cout<<"\n Fuel Type => Petrol ";
				  cout<<"\n Engine CC => 6592 cc ";
				  cout<<"\n Power     => 624bhp@5600rpm ";
				  cout<<"\n Torque    => 500Nm@3000-4000rpm ";
				  cout<<"\n Top Speed => 202 km/h ";
				  cout<<"\n Mileage   => 10.2 kmpl ";
				  cout<<"\n Price     => 5.28 crore ";
				  getch();
				  Buy();
				  break;
			  case 2: clrscr();
				  strcpy(c.cname,"Rolls-Royce Dawn");
				  cout<<"\n Rolls-Royce Dawn ";
				  cout<<"\n-----------------------";
				  cout<<"\n Fuel Type => Petrol ";
				  cout<<"\n Engine CC => 6598cc ";
				  cout<<"\n Power     => 563bhp@5250rpm ";
				  cout<<"\n Top Speed => 250 km/h ";
				  cout<<"\n Mileage   => 9.8 kmpl ";
				  cout<<"\n Price     => 6.39 crore ";
				  Buy();
				  break;
			  case 3:
				  clrscr();
				  strcpy(c.cname,"Rolls-Royce Phantom");
				  cout<<"\n Rolls-Royce Phantom ";
				  cout<<"\n-----------------------";
				  cout<<"\n Fuel Type => Petrol/Diesel ";
				  cout<<"\n Engine CC => 6749 cc ";
				  cout<<"\n Power => 453bhp@5350 RPM ";
				  cout<<"\n Top Speed => 250 km/h ";
				  cout<<"\n Mileage => 9.8 kmpl";
				  cout<<"\n Price => 8.25 crore ";
				  Buy();
				  break;
			 case 4:goto C1;
			 default:
					cout<<"\nPLEASE ENTER CORRECT CHOICE ";
					getch();
					goto RR; //Rolles Royces menu
					}
					goto C1;

	   case 5:
	      FR:clrscr();
	      cout<<"\t\t\tFarrari";
	      cout<<"\n\t\t\t--------";
	      cout<<"\n1.488GTB";
	      cout<<"\n2.F12 Berniletta";
	      cout<<"\n3.F12 TDF";
	      cout<<"\n4.LaFerrari";
	      cout<<"\n5.Exit";
	      cout<<"\nEnter your choice: ";
	      int ch3;
	      cin>>ch3;
	      clrscr();
	  switch(ch3)
	  {
		case 1:
			strcpy(c.cname,"Ferrari 488 GTB");
			   cout<<"       Ferrari 488 GTB"
				 "   \n------------------"
			     "\nMaximum Speed	=>    330 km/h (205 mph)"
			     "\n0-100 km/h	=>    3.0 s"
			     "\nFuel Consumption=>    11.4 L/100 km"
			     "\nEngine Type	=>    V8"
			     "\nMaximum Power 	=>    670 CV(492 kW)"
			     "\nMaximum Torque  =>    760 Nm";
			   cout<<"\nPrice= Rs.3.88 Cr*";
		       getch();
		       Buy();
		       break;
		case 2:
		       strcpy(c.cname,"Ferrari F12 Berniletta");
			   cout<<"      Ferrari F12 Berniletta"
				 "   \n--------------------------"
			     "\nMaximum speed	=>    over 211 mph (340 km/h)"
			     "\n0-100 km/h	=>    3.1 sec"
			     "\nFuel Consumption=>    15L/100 km"
			     "\nEngine Type	=>    V12"
			     "\nMaximum Power   =>    545 kW(740 CV)"
			     "\nMaximum Torque	=>    690 Nm";
		       cout<<"\nPrice=> Rs. 4.71 Cr*";
		       getch();
		       Buy();
		       break;
		case 3:
			strcpy(c.cname,"Ferrari F12 TDF");
			     cout<<"      Ferrari F12 TDF"
			       "        \n-----------------"
			       "\nMaximum speed	  =>      211 mph (340 km/h)"
			       "\n0-100 km/h	  =>      2.9 sec"
			       "\nFuel Consumption=>       15.4 l/100 km"
			       "\nEngine Type	  =>	V12"
			       "\nMaximum power	  =>	780 CV"
			       "\nMaximum torque  =>	705 Nm";
		       cout<<"\nPrice=Rs.4.72 Cr*";
			getch();
			Buy();
			break;
		case 4:
			strcpy(c.cname,"LaFerrari");
				      cout<<"     LaFerrari"
					    "  \n--------------"
			       "\nMaximum speed	  =>	over 350 km/h"
			       "\n0-100 km/h	  =>	<3 sec"
			       "\nFuel Consumption=>	13.83 L/100KM"
			       "\nEngine type	  =>	V12"
			       "\nMaximum power	  =>	963 CV"
			       "\nMaximum torque  =>	>900 Nm";
			cout<<"\nPrice=Rs.7.00 Cr*";
			getch();
			Buy();
			break;
		   case 5:goto C1;;
		   default:
			      cout<<"\nPLEASE ENTER CORRECT CHOICE ";
			      getch();
			      goto FR; //Farrari menu
		  }
		  goto C1;
	case 6:
	      LG:clrscr();
	      cout<<"\n\tLamborgini";
	      cout<<"\n\t-----------";
	      cout<<"\n1.Huracan";
	      cout<<"\n2.Aventedor";
	      cout<<"\n3.Veneno Roadster";
	      cout<<"\n4.Exit";
	      cout<<"\nEnter your choice: ";
	      int ch4;
	      cin>>ch4;
	      clrscr();
	      switch(ch4)
	      {
		  case 1:cout<<"     Lamborghini Huracan"
			       "   \n--------------------"
				 "\nMax speed	=>      >325km/h"
				 "\n0-100 KM/H      =>      3.2 s"
				 "\nFuel consumption=>      12.01 L/100Km"
				 "\nEngine Type     =>      V10"
				 "\nMax power       =>      610 CV"
				 "\nMax torque      =>      560 Nm";
			 cout<<"\nPrice=Rs.3.43 Cr*";
			strcpy(c.cname,"Lamborghini Huracan");
			getch();
			Buy();
			break;
		  case 2:cout<<"     Lamborghini Aventedor"
			       "    \n---------------------"
				 "\nMax speed	    =>	350km/h"
				 "\n0-100km/h	    =>	2.9s"
				 "\nFuel consumption=>	16.09L/Km"
				 "\nEngine Type	    =>	V12"
				 "\nMax power	    =>	700 CV"
				 "\nMax torque	    =>    690 Nm";
			 cout<<"\nPrice=Rs.3.60 Cr*";
			strcpy(c.cname,"Lamborghini Aventedor");
			getch();
			Buy();
			 break;
		case 3:cout<<"       Lamborghini Veneno Roadster"
			     "    \n-------------------------------"
				"\nMax speed	    =>	355km/h"
				"\n0-100km/h	    =>	2.9s"
				"\nEngine Type	    =>	V12"
				"\nMax power	    =>	750 CV"
				"\nMax torque	    =>	690 Nm";
			     cout<<"\nPrice=Rs.28.00 Cr*";
			     strcpy(c.cname,"Lamborghini Veneno Roadster");
			     getch();
			     Buy();
			     break;
		case 4:goto C1;;
		default:
			      cout<<"\nPLEASE CHOOSE CORRECT CHOICE ";
			      getch();
			      goto LG; //Lamborghini menu
		  }
		 goto C1;
	case 7:goto MM;
	default:
		cout<<"\nPLEASE CHOOSE CORRECT CHOICE ";
		getch();
		goto C1;
	}


     case 2:   //bike
		B1:  clrscr();
		cout<<"\t\t\t Bikes";
		cout<<"\n\t\t\t------";
		int ch5;
		cout<<"\nSelect the bike manufacturer :";
		cout<<"\n1.KTM";
		cout<<"\n2.HYOSUNG";
		cout<<"\n3.DUCATI ";
		cout<<"\n4.HARLEY DAVIDSON";
		cout<<"\n5.Exit to main menu";
		cout<<"\nEnter your choice: ";
		cin>>ch5;
		switch(ch5)
		{
			case 1: K1:clrscr();
				cout<<"\n\t\t\t KTM";
				cout<<"\n\t\t\t-----";
				cout<<"\n\n1.KTM DUKE 200 ";
				cout<<"\n2.KTM RC390  ";
				cout<<"\n3.KTM 390 DUKE ABS ";
				cout<<"\n4.Exit to bike menu \n";
				cout<<"\nEnter your choice: ";
				int ch6;
				cin>>ch6;
				switch(ch6)
				{
				case 1:
					clrscr();
					strcpy(c.cname,"KTM DUKE 200");
					cout<<"\n\t\t\t KTM DUKE 200";
					cout<<"\n\t\t\t--------------";
					cout<<"\n\t\t\tSPECIFICATIONS\n\n";

						    cout<<"Displacement            =>	 200 cc"
							<<"\nCylinders               =>	 1"
							<<"\nMax Power               =>	 25 bhp @ 10,000 rpm"
							<<"\nMaximum Torque          =>	 19 Nm @ 8,000 rpm"
							<<"\nValves Per Cylinder     =>	 4"
							<<"\nFuel Delivery System    =>       Fuel injection system"
							<<"\nFuel Type               =>	 Petrol"
							<<"\nIgnition                =>	 Digital Ignition"
							<<"\nSpark Plugs             =>	 1 Per Cylinder"
							<<"\nGearbox Type            =>	 Manual"
							<<"\nNo. of Gears            =>	 6"
							<<"\nTransmission Type       =>	 Chain Drive"
							<<"\nFuel Tank Capacity      =>	 11 litres"
							<<"\nReserve Fuel Capacity   =>	 2.50 litres"
							<<"\nFuel Efficiency Overall =>	 35 kmpl"
							<<"\nTop Speed               =>	 135 kmph"
							<<"\n0 to 60 kmph            =>	 4 seconds";
							cout<<"\nPrice=>Rs. 1.48 Lakhs";
						getch();
						Buy();
						break;


				case 2: clrscr();
					strcpy(c.cname,"KTM RC390");
					cout<<"\n\t\t\t KTM RC390";
					cout<<"\n\t\t\t--------------";

					cout<<"\n\t\t\tSPECIFICATION\n";
					    cout<<"\nDisplacement          =>  373 cc";
					    cout<<"\nCylinders	      =>  1";
					    cout<<"\nMax Power	      =>  43 bhp @ 9,000 rpm";
					    cout<<"\nMaximum Torque	      =>  35 Nm @ 7,000 rpm";
					    cout<<"\nValves Per Cylinder   =>  4";
					    cout<<"\nFuel Delivery System  =>  Fuel Injection";
					    cout<<"\nFuel Type	      =>  Petrol";
					    cout<<"\nIgnition	      =>  Spark Ignition";
					    cout<<"\nSpark Plugs           =>  1 Per Cylinder";
					    cout<<"\nGearbox Type	      =>  Manual";
					    cout<<"\nNo. of Gears	      =>  6";
					    cout<<"\nTransmission Type     =>  Chain Drive";
					    cout<<"\nFuel Tank Capacity    =>  9.50 litres";
					    cout<<"\nReserve Fuel Capacity =>  1.50 litres";
					    cout<<"\nTop Speed             =>  140 kmph";
					    cout<<"\n0 to 60 kmph          =>  3.50 seconds";
					    cout<<"\nPrice   =>   Rs. 2.50 Lakhs";
					    getch();
					    Buy();
					    break;

				case 3:
					strcpy(c.cname,"KTM 390 DUKE ABS");
					clrscr();
					cout<<"\n\t\t\t KTM 390 DUKE ABS";
					cout<<"\n\t\t\t-------------------";
					cout<<"\n\t\t\tSPECIFICATION\n";
						cout<<"\nDisplacement           =>  373 cc"
						<<"\nCylinders              =>  1"
						<<"\nMax Power	       =>  44 bhp @ 9,500 rpm"
						<<"\nMaximum Torque	       =>  35 Nm @ 7,250 rpm"
						<<"\nValves Per Cylinder    =>  4"
						<<"\nFuel Delivery System   =>  Fuel Injection"
						<<"\nFuel Type	       =>  Petrol"
						<<"\nIgnition	       =>  fully electronic ignition"
						<<"\nSpark Plugs            =>  1 Per Cylinder"
						<<"\nGearbox Type	       =>  Manual"
						<<"\nNo. of Gears	       =>  6"
						<<"\nTransmission Type      =>  Chain Drive"
						<<"\nFuel Tank Capacity     =>  11 litres"
						<<"\nReserve Fuel Capacity  =>  2.50 litres"
						<<"\nTop Speed	       =>  160 kmph"
						<<"\n0 to 60 kmph	       =>  2.60 seconds";
					       cout<<"\nPrice   =>  Rs. 2.01 lakhs";
						getch();
						Buy();
						break;
				case 4:goto B1;
				default: cout<<"\nYou enter wrong entry";
					 getch();
					goto K1;
				}
				goto B1;
	case 2:
		H1:clrscr();
		cout<<"\n\t\t\t HYOSUNG\n";
		cout<<"\n\t\t\t---------";
		cout<<"\n1.HYOSUNG GT250R";
		cout<<"\n2.HYOSUNG GT 650N";
		cout<<"\n3.HYOSUNG ST7";
		cout<<"\n4.Exit to bike menu";
		cout<<"\nEnter your choice: ";
		int n;
		cin>>n;
		switch(n)
		{
		case 1: clrscr();
			cout<<"\n\t\t\t HYOSUNG GT250R\n";
			cout<<"\n\t\t\t----------------";
			cout<<"\nSPECIFICATION\n";
					  cout<<"\nDisplacement	      =>  249 cc"
					<<"\nCylinders	      =>  2"
					<<"\nMax Power	      =>  28 bhp @ 10,000 rpm"
					<<"\nMaximum Torque        =>  22.07 Nm @ 8,000 rpm"
					<<"\nValves Per Cylinder   =>  4"
					<<"\nFuel Delivery System  =>  Electronic Fuel Injection"
					<<"\nFuel Type	      =>  Petrol"
					<<"\nIgnition	      =>  Digital CDI"
					<<"\nSpark Plugs	      =>  1 Per Cylinder"
					<<"\nGearbox Type	      =>  Manual"
					<<"\nNo. of Gears	      =>  5"
					<<"\nTransmission Type     =>  Chain Drive"
					<<"\nFuel Tank Capacity    =>  17 litres"
					<<"\nReserve Fuel Capacity =>  4 litres"
					<<"\nFuel Efficiency       =>  31"
					<<"\nTop Speed	      =>  140 kmph"
					<<"\n0 to 60 kmph	      =>  4.10 seconds";
					cout<<"\nprice =>  RS. 3.20lakhs ";
					getch();


					Buy();
					break;

			case 2: clrscr();
				cout<<"\n\t\t\t HYOSUNG GT650N\n";
				cout<<"\n\t\t\t----------------";
				cout<<"\n\t\t\tSPECIFICATION\n";
					cout<<"\nDisplacement		 =>  647 cc"
					<<"\nCylinders		 =>  2"
					<<"\nMax Power		 =>  72.68 bhp @ 9,000 rpm"
					<<"\nMaximum Torque		 =>  60.90 Nm @ 7,500 rpm"
					<<"\nValves Per Cylinder	 =>  4"
					<<"\nFuel Delivery System	 =>  Electronic Fuel Injection"
					<<"\nFuel Type                =>  Petrol"
					<<"\nIgnition		 =>  Digital CDI"
					<<"\nSpark Plugs		 =>  1 Per Cylinder"
					<<"\nGearbox Type		 =>  Manual"
					<<"\nNo. of Gears		 =>  6"
					<<"\nTransmission Type	 =>  Chain Drive"
					<<"\nFuel Tank Capacity	 =>  17 litres"
					<<"\nReserve Fuel Capacity	 =>  3 litres"
					<<"\nFuel Efficiency          =>  23 kmpl"
					<<"\nTop Speed                =>  210 kmph"
					<<"\n0 to 60 kmph		 =>  2.73 seconds";
					cout<<"\nprice=>RS. 4.12lakhs ";

					getch();
					Buy();
					break;
			case 3: clrscr();
				cout<<"\n\t\t\t HYOSUNG ST7\n";
				cout<<"\n\t\t\t-------------\n";
				cout<<"\n\t\t\tSPECIFICATION\n";
					cout<<"\nDisplacement	       =>  678 cc"
					<<"\nCylinders              =>  2"
					<<"\nMax Power              =>  57.66 bhp @ 8,000 rpm"
					<<"\nMaximum Torque	       =>  57 Nm @ 6,000 rpm"
					<<"\nValves Per Cylinder    =>  4"
					<<"\nFuel Delivery System   =>  Electronic Fuel Injection"
					<<"\nFuel Type	       =>  Petrol"
					<<"\nIgnition	       =>  Digital CDI"
					<<"\nSpark Plugs	       =>  1 Per Cylinder"
					<<"\nGearbox Type	       =>  Manual"
					<<"\nNo. of Gears	       =>  5"
					<<"\nTransmission Type      =>  Belt Drive"
					<<"\nFuel Tank Capacity     =>  17 litres"
					<<"\nReserve Fuel Capacity  =>  4 litres"
					<<"\nFuel Efficiency        =>  18 kmpl"
					<<"\nTop Speed              =>  176 kmph";
					cout<<"\nprice =>  Rs. 6.26lakhs ";
					getch();
					Buy();
					break;
			case 4:goto B1;
			default:
				cout<<"\nYou entered wrong entry";
				getch();
				goto H1;
		}
		goto B1;


	case 3:
	       DD:clrscr();
		cout<<"\n\t\t\t Ducati";
		cout<<"\n\t\t\t--------";
		cout<<"\n1.Ducati  Diavel 2016";
		cout<<"\n2.Ducati Monster";
		cout<<"\n3.Exit to bike menu\n";
		cout<<"Enter your choice: ";
		int ch10;
		cin>>ch10;
		clrscr();
		switch(ch10)
		{
			case 1:strcpy(c.cname,"Ducati Diavel 2016");
				cout<<"\n Ducati Diavel 2016";
				cout<<"\n----------------------";
				cout<<"\n\t\t SPECIFICATIONS\n";

						  cout<<"\nEngine Type        =>  Testastretta Twin Turbo";
						  cout<<"\nMaximum Power      =>  9250 rpm";
						  cout<<"\nMaximum Torque     =>  8000 rpm";
						  cout<<"\nGear Box           =>  6 Speed";
						  cout<<"\nTransmission Type  =>  Manual";
						  cout<<"\nFuel Capacity      =>  17 Ltrs";
						  cout<<"\nFuel Type          =>  Petrol";
						  cout<<"\nDigital Fuel Gauge =>  Yes";
						  cout<<"\nMileage            =>  10 Kmpl";
						  cout<<"\nPrice              =>  Rs. 14.81 lakhs";
						  getch();
						  Buy();
						  break;
			case 2:strcpy(c.cname,"Ducati Monster");
			      cout<<"\n\t\tDucati Monster";
				cout<<"\n\t\t----------------";
				cout<<"\n\t\t SPECIFICATIONS\n";
							 cout<<"\nEngine Type        =>  L-Twin Cylinder, 2 Valve Per Cylinder";
							 cout<<"\nMileage            =>  18 Kmpl";
							 cout<<"\nMaximum Power      =>  8250 rpm";
							 cout<<"\nMaximum Torque     =>  6250 rpm";
							 cout<<"\nGear Box           =>  6 Speed";
							 cout<<"\nTransmission Type  =>  Manual";
							 cout<<"\nFuel Capacity      =>  15 Ltrs";
							 cout<<"\nFuel Type          =>  Petrol";
							 cout<<"\nDigital Fuel Gauge =>  Yes";
							 cout<<"\nMileage            =>  10 Kmpl";
							 cout<<"\nPrice              =>  Rs. 9.72 lakhs";
							 getch();
							 Buy();
							 break;

			 case 3:goto B1;
			 default:
				cout<<"\nYou entered wrong entry";
				getch();
				goto DD;
		}
		goto B1;

	    case 4:
		HD:clrscr();
		cout<<"\n\t\t\t Harley Davidson";
		cout<<"\n\t\t\t-----------------";
		cout<<"\n1.HARLEY DAVIDSON STREET";
		cout<<"\n2.HERLEY DAVIDSON V ROD";
		cout<<"\n3.Exit to bike menu";
		cout<<"\nEnter your choice: ";
		int ch13;
		cin>>ch13;
		switch(ch13)
		{
			case 1: clrscr();
				strcpy(c.cname,"Harley Davidson Street 750");
				cout<<"\n\t\t Harley Davidson Street 750";
				cout<<"\n\t\t----------------------------";
				cout<<"\n\t\tSPECIFICATION\n";

							  cout<<"\nEngine Type        =>  L-Twin Turbo Cylinder";
							  cout<<"\nMileage            =>  17 Kmpl";
							  cout<<"\nMaximum Power      =>  8250 rpm";
							  cout<<"\nMaximum Torque     =>  6250 rpm";
							  cout<<"\nGear Box           =>  6 Speed";
							  cout<<"\nTransmission Type  =>  Manual";
							  cout<<"\nFuel Capacity      =>  17 Ltrs";
							  cout<<"\nFuel Type          =>  Petrol";
							  cout<<"\nDigital Fuel Gauge =>  Yes";
							  cout<<"\nMileage            =>  17 Kmpl";
							  cout<<"\nPrice              =>  Rs. 4.91 lakhs";
							  getch();
							  Buy();
							  break;

			case 2: clrscr();
				strcpy(c.cname,"HARLEY V ROD");
				cout<<"\n\t\t\t HARLEY V ROD";
				cout<<"\n\t\t\t--------------";
				cout<<"\n\t\tSPECIFICATION\n";
							cout<<"\nEngine Type        =>  L-Twin Turbo Cylinder, 2 Valve Per Cylinder";
							cout<<"\nMileage            =>  18 Kmpl";
							cout<<"\nMaximum Power      =>  8250 rpm";
							cout<<"\nMaximum Torque     =>  6250 rpm";
							cout<<"\nGear Box           =>  6 Speed";
							cout<<"\nTransmission Type  =>  Manual";
							cout<<"\nFuel Capacity      =>  17 Ltrs";
							cout<<"\nFuel Type          =>  Petrol";
							cout<<"\nDigital Fuel Gauge =>  Yes";
							cout<<"\nMileage            =>  17 Kmpl";
							cout<<"\nPrice              =>  Rs. 3.36lakhs";
							getch();
							Buy();
							break;
			 case 3:goto B1;
			 default:
				cout<<"\nYou entered wrong entry";
				getch();
				goto H1;
		}
		goto B1;
	case 5:goto MM;
	default:
		cout<<"\nYou entered wrong entry";
		getch();
		goto B1;
	    }
     case 3:
	    c1.Display();
	    goto MM;
     case 4:
	    clrscr();
	    int n,f=0;
	    cout<<"Enter the customer ID no. to edit that record: ";
	    cin>>n;
	    ifstream fin("CUSTOMER.TXT");
	    while(fin.read((char*)&c,sizeof(c)))
	    {
		if(n==c.ID)
		{
			f=1;
			cout<<"\nName            =>";
			cout<<"\nAddress       	=>";
			cout<<"\nID no.        	=>";
			cout<<"\nContact         =>";
			cout<<"\nCar/Bike owned  =>";
			cout<<"\nColor 	        =>";
			gotoxy(21,3);
			cout<<c.name;
			gotoxy(21,4);
			cout<<c.add;
			gotoxy(21,5);
			cout<<c.ID;
			gotoxy(21,6);
			cout<<c.con;
			gotoxy(21,7);
			cout<<c.cname;
			gotoxy(21,8);
			cout<<c.color;
			getch();
		}
	}
	if(f==0)
	{
	    cout<<"No record found having this ID";
	    getch();goto MM;
	}
	ED:clrscr();
	ofstream fout("CUSTOMER.TXT");
	cout<<"\n\nNOTE THAT the car/bike and its color that you selected CANNOT be changed";
	cout<<"\nOnly customer details will be edited";
	cout<<"\nWhich entry you want to edit:";
	cout<<"\n1.Name";
	cout<<"\n2.Address";
	cout<<"\n3.ID no. ";
	cout<<"\n4.Contact no. ";
	cout<<"\n\nEnter your choice:";
	int cd;
	cin>>cd;
	switch(cd)
	{
		case 1: cout<<"Enter new name:";
			gets(c.name);
			break;
		case 2: cout<<"Enter new address:";
			gets(c.add);
			break;
		case 3: cout<<"Enter new ID:";
			cin>>c.ID;
			break;
		case 4: cout<<"Enter new Contact no.:";
			cin>>c.con;
			break;
		default:cout<<"Wrong entry";
			goto ED;
	}
	fout.write((char*)&c,sizeof(c));
	cout<<"Do you want to edit more?[y/n]:";
	char ch22;
	cin>>ch22;
	if(ch22=='y'||ch22=='Y')
		goto ED;
	else
		goto MM;
     case 5:
		 clrscr();
		 cout<<"\t\t\t BEST IN CLASS CAR/BIKE DEALERS\n";
		 cout<<"\t\t\t--------------------------------\n";
		 cout<<"\t=> FOR ANY HELP CONTACT OUR HELP DESK\n\n";
		 cout<<"\t=> CONTACT NO: 09427641726\n\n";
		 cout<<"\t=> OUR CHAIR PERSON : MR. C.SUDARSAN\n\n";
		 cout<<"\t=> OUR GUIDE : MRS.MRUDULA\n\n";
		 cout<<"\t=> OUR WEBSITE :www.bestcarandbike.com\n\n";
		 cout<<"\t=> OUR SUPPORTING STAFFS:1. DEVESH BHOGRE\n";
		 cout<<"				 2. TUSHAR SAHU\n";
		 cout<<"				 3. KASHYAP PATEL\n";
		 cout<<"				 4. MAANVENDRA SINGH\n";
		 cout<<"				 5. JAY PATEL\n\n";
		 cout<<"\t=> VEHICLE INSURANCE ARE SUBJECTED TO MARKET RISK.\n";
		 cout<<"\t   PLEASE READ ALL SCHEME RELATED DOCUMENTS CAREFULLY.\n\n";
		 cout<<"\t=> ISO 2001:9000 IS CERTIFIED";
		 cout<<"\n\nPRESS ENTER TO CONTINUE ";
		 getch();
		 goto MM;

     case 6:
	    clrscr();
		  cout<<"\n\n**************************************";
		  cout<<"******************************************";
		  cout<<"\n\t\t\t\tTHANK YOU ";
		  cout<<"\n**************************************";
		  cout<<"******************************************";
		  cout<<"\n\t\t\t\tVISIT AGAIN\n ";
		  int in=31;
		  int i,j;
		  for(i=5;i>=0;i--)
		  {
		   cout<<setw(in);
		   for(j=0;j<i;j++)
		   {
			 cout<<" * ";
		   }
		   in=in+2;
		   cout<<endl;
		  }
		cout<<"\n**************************************";
		cout<<"******************************************";
		cout<<"\n\tMADE BY : DEVESH BHOGRE";
		cout<<"\n\tGUIDE : MRS.MRUDULA\n\n";
		cout<<"\n**************************************";
		cout<<"******************************************";
		cout<<"\n\n\nPRESS ENTER TO EXIT";
		getch();
		exit(0);
		break;
     default:cout<<"Please enter the correct choice";
	     getch();
	     goto MM;

		}

      //	getch();
}










