#include<fstream>
#include<iostream>
using namespace std;
class time			//Class #1
{
	protected:
	int hours;
	int min;
	string period;
	public:
		
		void set_time(int hh,int mm,string p)	//Setter Function
		{
			hours=hh;
			min=mm;
			period=p;
		}
		
		string get_period()			//Getter Function
		{
			return period;
		}
		
		int get_hour()				//Getter Function
		{
			return hours;
		}
		
		int get_min()				//Getter Function
		{
			return min;
		}
		
};

class bus_info:public time//inheritance				//Class #2
{
	protected:
	string bus_no;
	string from;
	string to;
//	time arrtime;
//	time deptime;
	public:
		fstream fin;
		ofstream fout;
	
	void set_bus(string bn,int hh,int mm,string p,string f,string t)		//Setter Function
	{	
		bus_no=bn;
		from=f;
		to=t;
		set_time(hh,mm,p);		
	}
	
	string get_tocity()			//Getter Function
	{
		return to;
	}
	
	string get_fromcity()			//Getter Function
	{
		return from;
	}
	
	string get_bus()			//Getter Function
	{
		return bus_no;
	}
	
	void display()
	{
		fout.open("Task.text",ofstream::app);
		cout<<endl<<"Contact us on:                 ABCtravels@goole.pk"<<endl<<"03111133333                    ABCtravels@facebook.com"<<endl<<"0421244512"<<endl<<endl;			
		fout<<endl<<"Contact us on:                 ABCtravels@goole.pk"<<endl<<"03111133333                    ABCtravels@facebook.com"<<endl<<"0421244512"<<endl<<endl;
	}

	void print()
	{
		fout.open("Task.text",ofstream::app);
		cout<<bus_no<<" :     "<<hours<<":"<<min<<" "<<period<<" :   "<<from<<" :   "<<to<<endl;		
		fout<<bus_no<<" :     "<<hours<<":"<<min<<" "<<period<<" :   "<<from<<" :   "<<to<<endl;
	}
	
	void Display_1()
	{
		fout.open("Task.text",ofstream::app);
		cout<<endl<<"* We provide our customers the best transport facilities "<<endl;
		cout<<"* Our transport services are all over the Pakistan"<<endl;
		cout<<"* Our services provide refreshment,cleanliness,excellent staff and newly vehicles"<<endl<<endl<<"If you are interested from services come to us at" <<endl;
		cout<<"Address: 123-A, Link Road Kalma Chowk,Lahore( Pakistan)           or Contact us on: 03111122223"<<endl<<endl<<endl;

		fout<<endl<<"* We provide our customers the best transport facilities "<<endl;
		fout<<"* Our transport services are all over the Pakistan"<<endl;
		fout<<"* Our services provide refreshment,cleanliness,excellent staff and newly vehicles"<<endl<<endl<<"If you are interested from services come to us at" <<endl;
		fout<<"Address: 123-A, Link Road Kalma Chowk,Lahore( Pakistan)           or Contact us on: 03111122223"<<endl<<endl<<endl;
	}
			
};

class booking:public bus_info//inheritance			//Class #3
{
protected:

	string bus_no;
	string from;
	string to;

public:
	fstream fin;
	ofstream fout;
	
	
	void set_seats(string bn,int hh,int mm,string p,string f,string t)		//Setter Function
	{
	
		set_bus(bn,hh,mm,p,f,t);
	}	
	
	void print1()
	{
		fout.open("Task.text",ofstream::app);			
		int j,seats,left;
		char *h;
		h=new char;
		cout<<endl<<endl<<"Total seats are 45"<<endl;
		fout<<endl<<endl<<"Total seats are 45"<<endl;
	
	for(int k=45;k>=1;k--)
	{
		cout<<"Enter number of seats for booking "<<endl;
		fout<<"Enter number of seats for booking "<<endl;
		cin>>j;
		fout<<j;
		cout<<endl;
		fout<<endl;
		cout<<endl<<endl<<"You have booked "<<j<<" seats of our service......."<<endl; 
		fout<<endl<<endl<<"You have booked "<<j<<" seats of our service......."<<endl;
		seats=seats+j;
		left=k-seats;
			
		int extra;
		extra=-1*(left);
	
		if(left>1&&left<=45)
		{
			cout<<"Lefted seats for booking in a bus are  "<<left<<endl<<endl;
			fout<<"Lefted seats for booking in a bus are  "<<left<<endl<<endl;	
		}			
		else if(left<1)
		{
			cout<<extra<<"Extra passengers from bus"<<endl;
			fout<<extra<<"Extra passengers from bus"<<endl;
		}
		cout<<endl<<endl<<"If you want to continue booking, Press Y else N"<<endl;
		fout<<endl<<endl<<"If you want to continue booking, Press Y else N"<<endl;
		cin>>*h;
		fout<<*h;
		cout<<endl;
		fout<<endl;
		
		if(*h=='Y'||*h=='y')
		{
			cout<<"Now, Enter number of seats for booking "<<endl;
			fout<<"Now, Enter number of seats for booking "<<endl;
			cin>>j;
			fout<<j;
			cout<<endl<<endl<<"You have booked "<<j<<"seats of our service"<<endl<<endl;
			fout<<endl<<endl<<"You have booked "<<j<<"seats of our service"<<endl<<endl;
			seats=seats+j;
			left=k-seats;
			extra=-1*(left);
		
		if(left<1)
		{			
			cout<<extra<<"Extra Passengers from bus "<<endl;
			fout<<extra<<"Extra Passengers from bus "<<endl;
		}
		
		if(left<=45&&left>=1)
		{
			cout<<"Now, Lefted seats for booking in a bus are   "<<left<<endl;
			fout<<"Now, Lefted seats for booking in a bus are   "<<left<<endl;
		}		
	
		}
		
		else if(*h=='N'||*h=='n')
			break;
			delete h;
			
		}
	}
	
};


class all_1				//Class #4
{
	protected:
	bus_info b1,b2,b3,b4,b5,b6,b7;//composition
	
	public:
		ofstream fout;
	void print_1()
	{
		fout.open("Task.text",ofstream::app);
		b1.set_bus("LES-2873",6,59,"pm","Lahore","Karachi");
		b2.set_bus("AJK-1238",7,30,"pm","Lahore","Abbotabad");
		b3.set_bus("FSD-2378",7,59,"pm","Lahore","Faisalabad");
		b4.set_bus("JKL-1920",8,30,"pm","Lahore","Rawalpindi");
		b5.set_bus("KHR-2384",8,59,"pm","Lahore","Haiderabad");	
		b6.set_bus("LHR-8459",9,30,"pm","Lahore","Multan");
		b7.set_bus("PSR-8271",9,10,"pm","Lahore","Gujrat");
	
		cout<<"Bus         "<<"Time          "<<"From           "<<"To           "<<endl<<endl;
		fout<<"Bus         "<<"Time          "<<"From           "<<"To           "<<endl<<endl;
	
		b1.print();
		b2.print();
		b3.print();
		b4.print();
		b5.print();
		b6.print();
		b7.print();
	}
};

class all_2:bus_info//inheritance			//Class #5
{
	protected:
	booking bk1,bk2,bk3,bk4,bk5,bk6,bk7;//composition
	string bus_no;
	string from;
	string to;
	bus_info b1,b2,b3,b4,b5,b6,b7;//composition

	public:	
	fstream fin;
	ofstream fout;
	
	void set_city(string bn,int hh,int mm,string p,string f,string t)	//Setter Function
	{
		set_bus(bn,hh,mm,p,f,t);
	}
	
void print_2()	
{
	fout.open("Task.text",ofstream::app);	//File Handling	
	cout<<"Select city you want to travel "<<endl;
	fout<<"Select city you want to travel "<<endl;
	cin>>to;
	fout<<to;
	fout<<endl;
		
	if(to=="Karachi")
	{		
		b1.set_bus("LES-2873",6,59,"pm","Lahore","Karachi");
		cout<<"Bus      :    "<<"Time     :   "<<"From   :   "<<"To           "<<endl;
		fout<<"Bus      :    "<<"Time     :   "<<"From   :   "<<"To           "<<endl;
		b1.print(); 
		bk1.print1();
	}
	
	else if(to=="Abbotabad")
	{
		b2.set_bus("AJK-1238",7,30,"pm","Lahore","Abbotabad");
		cout<<"Bus      :    "<<"Time     :   "<<"From   :   "<<"To           "<<endl;
		fout<<"Bus      :    "<<"Time     :   "<<"From   :   "<<"To           "<<endl;
		b2.print();
		bk2.print1();
	}
	
	else if(to=="Faisalabad")
	{
		b3.set_bus("FSD-2378",7,59,"pm","Lahore","Faisalabad");
		cout<<"Bus      :    "<<"Time     :   "<<"From   :   "<<"To            "<<endl;
		fout<<"Bus      :    "<<"Time     :   "<<"From   :   "<<"To           "<<endl;
		b3.print();
		bk3.print1();
	}
	
	else if(to=="Rawalpindi")
	{
		b4.set_bus("JKL-1920",8,30,"pm","Lahore","Rawalpindi");
		cout<<"Bus      :    "<<"Time     :   "<<"From   :   "<<"To           "<<endl;
		fout<<"Bus      :    "<<"Time     :   "<<"From   :   "<<"To           "<<endl; 
		b4.print();
		bk4.print1();
	}
		
	if(to=="Haiderabad")
	{
		b5.set_bus("KHR-2384",8,59,"pm","Lahore","Haiderabad");
		cout<<"Bus      :    "<<"Time     :   "<<"From   :   "<<"To            "<<endl;
		fout<<"Bus      :    "<<"Time     :   "<<"From   :   "<<"To           "<<endl;
		b5.print();
		bk5.print1();
	}		
	
	else if(to=="Multan")
	{
		b6.set_bus("LHR-8459",9,30,"pm","Lahore","Multan");
		cout<<"Bus      :    "<<"Time     :   "<<"From   :   "<<"To           "<<endl;
		fout<<"Bus      :    "<<"Time     :   "<<"From   :   "<<"To           "<<endl;
		b6.print();
		bk6.print1();	
	}
		
	else if(to=="Gujrat")
	{
		b7.set_bus("PSR-8271",9,10,"pm","Lahore","Gujrat");
		cout<<"Bus      :    "<<"Time     :   "<<"From   :   "<<"To           "<<endl;
		fout<<"Bus      :    "<<"Time     :   "<<"From   :   "<<"To           "<<endl;
		b7.print();
		bk7.print1();	
	}
	
}

			
};
class Run			//Class#6
{
	private:
	bus_info b1,b2,b3,b4,b5,b6,b7;
	booking bk1,bk2,bk3,bk4,bk5,bk6,bk7;
	all_1 a;
	all_2 a2;	
		public:
			fstream fin;
			ofstream fout;
	
void Display()
{
	fout.open("Task.text",ofstream::app);			//File Handling
	cout<<"************************WELCOME to ABC Travels**********************"<<endl<<endl;
	fout<<"************************WELCOME to ABC Travels**********************"<<endl<<endl;
	fout<<"How can we Help you?"<<endl<<endl;
	cout<<"How can we Help you?"<<endl<<endl;
	cout<<"1. Our Services"<<endl;
	cout<<"2. Booking "<<endl;
	cout<<"3. Contact "<<endl;
	cout<<"4. About us"<<endl;
	
	fout<<"1. Our Services"<<endl;
	fout<<"2. Booking "<<endl;
	fout<<"3. Contact "<<endl;
	fout<<"4. About us"<<endl;
	int *i;	//Dynamic Memory creation
	i=new int;
	for(*i=1;*i<=4;*i++)
	{		
		cin>>*i;
		fout<<*i;
		cout<<endl;
		fout<<endl;
		
		if(*i==1)
		{
			a.print_1();
			char *g;
			g=new char;	//Dynamic Memory creation
			cout<<endl<<endl<<"If you want to Go back, Press 'Y' else for Exit Press 'N'"<<endl;
			fout<<endl<<endl<<"If you want to Go back, Press 'Y' else for Exit Press 'N'"<<endl;
			cin>>*g;
			fout<<*g;
			cout<<endl;
			fout<<endl;
		
			int *j;
			j=new int;		//Dynamic Memory creation
	
	for(*j=1;*j<=2;*j++)
	{
		if(*g=='Y'||*g=='y')
		{
			cout<<endl<<endl<<"Select Choice"<<endl;	
			fout<<endl<<endl<<"Select Choice"<<endl;
			cout<<"1. Booking "<<endl;
			cout<<"2. Contact "<<endl;
			cout<<"3. About us"<<endl;
	
	
			fout<<"1. Booking "<<endl;
			fout<<"2. Contact "<<endl;
			fout<<"3. About us"<<endl;
					
	
	for(*i=1;*i<=3;*i++)
	{	
		cin>>*i;
		fout<<*i;
		cout<<endl;
		fout<<endl;
	
		if(*i==1)
			a2.print_2();
			
		else if(*i==2)
			b1.display();
			
		else if(*i==3)
			b1.Display_1();
			break;
						//Dynamic Memory Deletion
	}
		
		}
	
		else if(*g=='N'||*g=='n')
			break;
			
			delete j,g;		//Dynamic Memory Deletion
	}
				
		}
			
	 	
		else if(*i==2)
		{
			a2.print_2();
			char *g;
			g=new char;			//Dynamic Memory creation
			cout<<endl<<endl<<"If you want to Go Back, Press 'Y' else for Exit Press 'N'"<<endl;
			fout<<endl<<endl<<"If you want to Go Back, Press 'Y' else for Exit Press 'N'"<<endl;
			cin>>*g;
			fout<<*g;
			cout<<endl;
			fout<<endl;
		
			if(*g=='Y'||*g=='y')
			{
				cout<<endl<<endl<<"Select the Operation"<<endl;
				cout<<"1. Our Services"<<endl;
				cout<<"2. Contact "<<endl;
				cout<<"3. About us"<<endl;	
						
				fout<<endl<<endl<<"Select the Operation"<<endl;
				fout<<"1. Our Services"<<endl;
				fout<<"2. Contact "<<endl;
				fout<<"3. About us"<<endl;	
				

	for( *i=1;*i<=3;*i++)
	{
		cin>>*i;
		fout<<*i;
		cout<<endl;
		fout<<endl;
		if(*i==1)
			a.print_1();	

		else if(*i==2)
			b1.display();
							
		else if(*i==3)
			b1.Display_1();			
	}
		break;
	}
		else if(*g=='N'||*g=='n')
			break;	
			delete g;			//Dynamic Memory Deletion
			
		}
		
	
	
		else if(*i==3)
		{
			b1.display();
			char *g;
			g=new char;				//Dynamic Memory creation
			cout<<endl<<endl<<"If you want to Go Back, Press 'Y' else for Exit Press 'N'"<<endl;
			fout<<endl<<endl<<"If you want to Go Back, Press 'Y' else for Exit Press 'N'"<<endl;
			cin>>*g;
			fout<<*g;
			cout<<endl;
			fout<<endl;

		if(*g=='Y'||*g=='y')
		{
			cout<<"Select choice"<<endl;
			cout<<"1. Our Services"<<endl;
			cout<<"2. Booking "<<endl;
			cout<<"3. About us"<<endl;
						
			fout<<"Select choice"<<endl;
			fout<<"1. Our Services"<<endl;
			fout<<"2. Booking "<<endl;
			fout<<"3. About us"<<endl;
				//Dynamic Memory creation

	for(*i=1;*i<=3;*i++)
	{
		cin>>*i;
		fout<<*i;

		if(*i==1)
			a.print_1();
								
		else if(*i==2)
			bk1.print1();
								
		else if(*i==3)
			b1.Display_1();
			break;
	}
					
		}
		
		else if(*g=='N'||*g=='n')
			break;
			
			delete g;		//Dynamic Memory Deletion
			
		}
		
		else if(*i==4)
		{
			b1.Display_1();
			char *g;
			g=new char;				//Dynamic Memory creation
			cout<<endl<<endl<<"If you want to Go Back, Press 'Y' else for Exit Press 'N'"<<endl;
			fout<<endl<<endl<<"If you want to Go Back, Press 'Y' else for Exit Press 'N'"<<endl;
			cin>>*g;
			fout<<*g;		
		
		if(*g=='Y'||*g=='y')
		{
			cout<<"1. Our Services"<<endl;
			cout<<"2. Booking "<<endl;
			cout<<"3. Contact "<<endl;
			cout<<endl<<endl<<"Select the choice"<<endl;
						
			fout<<"1. Our Services"<<endl;
			fout<<"2. Booking "<<endl;
			fout<<"3. Contact "<<endl;
			fout<<endl<<endl<<"Select the choice"<<endl;
				

	for(*i=1;*i<=3;*i++)
	{
		cin>>*i;
		fout<<*i;
		cout<<endl;
		fout<<endl;
		if(*i==1)
			a.print_1();
	
		else if(*i==2)
			bk1.print1();
						
		else if(*i==3)
			b1.display();
			break;							
	}
					
		}	
		else if(*g=='N'||*g=='n')
			break;	
			delete g;		//Dynamic Memory Deletion
		}
			
			break;
			
		delete i;			//Dynamic Memory Deletion
	}
		
	fout.close();
}

};


main()
{

	Run	r;
	r.Display();
	cout<<"Thank you for Contacting us!!!"<<endl;
}


	
	
