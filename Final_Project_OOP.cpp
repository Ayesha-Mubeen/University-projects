#include<iostream>
#include<stdlib.h>
#include<string>
#include <windows.h>
#include <conio.h>
#include <vector>
using namespace std;
static int pay;
static string Class;
 int date;
    int month;
   int year;
static int CNIC[13];
class Passenger{
public:
    string first_name;
    string name;
    
    string last_name;
    char passportNumber[11];
    int seatNumber;
    int age;
    char gender;
    string cgender;
    string city;
    string country;
    string flight_name;
    
    

public:
	 void boarding(){
	cout<<"\n ______________________________________________________________________________"<<endl;
    cout<<"|                   Five Stars Airport Handling Service                        |"<<endl;
    cout<<"|______________________________________________________________________________|"<<endl;
    cout<<"| Name:                                              |   Class:  ";cout<<Class<<"              |"<<endl;
    cout<<"|                                                    |   Seat : ";cout<<seatNumber<<"               |"<<endl;
    cout<<"| Airlines      Date      Class        Seat          |                         |"<<endl;
    cout<<"| "<<flight_name<<"      "<<  date<<"/"<<month<<"    ";cout<<Class<<"     ";cout<<seatNumber<<"                      |"<<endl;
    cout<<"|                                                    |   //airlines            |"<<endl;
    cout<<"| From          To        Boarding Time              |                         |"<<endl;
    cout<<"| "<<city<<"       "<<country<<"       12:45                     |   From:"<<city<<"           |"<<endl;
    cout<<"|                                                    |     To:"<<country<<"            |"<<endl;
    cout<<"|                                                    |     "<<date<<"/"<<month<<"                |"<<endl;
    cout<<"|____________________________________________________|_________________________|"<<endl;
   }
   passenger(){
   	string name;
   	 first_name="Null";
     last_name="Null";
     CNIC[13]='0';
    passportNumber[11]='0';
    seatNumber=0;
    age=0;
    gender=' ';
    cgender="Null";
    city="Null";
    country="Null";
   }
   passenger(string fn,string ln,int cnic[13],char passportno[11],int seatn,int aGe,string FLIght_Name,string Cgender,string COUNTry)
   {
   
       name=fn+ln;
       for( int i=0;i<13;i++)
       CNIC[i]=cnic[i];
       for( int j=0;j<11;j++)
    passportNumber[j]=passportno[j];
    seatNumber=seatn;
    age=aGe;
    cgender=Cgender;
    
    country=COUNTry;
   }
void getinput(){
	cout<<"Enter your First name ";
	cin>>first_name;
	cout<<endl;
	cout<<"Enter your Last name ";
	cin>>last_name;
	cout<<endl;
	name=first_name+last_name;
	int m;
	system("cls");
	cout<<"Enter your 13 digit CNIC no without (-) \nEnter 1 digit then press enter and enter second and soon\n";
		for(int i=0;i<13;i++)
		{
			cin>>CNIC[i];
			if(CNIC[i]<0){
		
			m=i;
			break;
		}
		}
		if(CNIC[0]!=3||CNIC[m]<0)
		for(int d=0;d<1;d--){
		
	system("cls");
	
	
		cout<<"Enter your 13 digit CNIC no without (-) Starting with 3\nEnter 1 digit then press enter and enter second and soon\n";
		for(int j=0;j<13;j++)
		{
			cin>>CNIC[j];
		}
		
		if(CNIC[0]==3)
		{
			
			cout<<"";
	
			break;
	}
}
		
		
	label99:
		system("cls");
    cout<<"Enter your 11 digit Passport no without (-)\nEnter 1 digit then press enter and enter second and soon\n";
		for(int i=0;i<11;i++)
		{
			cin>>passportNumber[i];
		}
		for(int j=0;j<11;j++){
		
			if(passportNumber[j]<'0'){
			goto label99;
		}
		}
	

	seatNumber=1+rand()%40;
	system("cls");	
	cout<<"Enter your age ";
	cin>>age;
	if(age<18||age>70)
	{
		cout<<"People under 18 or more than 70 cannot fly\n";
		for(int p=0;p<=1;p--)
		{
		
		cout<<"Enter age greater than 17 and less than 71 "<<endl;
		cin>>age;
		if(age>17&&age<71)
		break;
	}
	}
	
	
	

	cout<<"Enter your year of flight in numbers ";
	cin>>year;
	if(year<2023 || year>2025)
	{
	
	for(int f=0;f<=1;f--){
	
	
		cout<<"Enter correct year ";
			cin>>year;

	if(year>2022&&year<2026)
	break;
}
}
if(year==2023){{
	cout<<"Enter your month of flight in numbers ";
	cin>>month;
	if(month<6 || month>12)
	for(int f=0;f<=1;f--){
	
	
		cout<<"Enter correct month ";
			cin>>month;
	
	if(month>5&&month<12)
	break;
}
}
if(month==6){

cout<<"Enter your date of flight in numbers ";
	cin>>date;
	if(date<10 || date>31)
	for(int f=0;f<=1;f--){
	

		cout<<"Enter correct date ";
			cin>>date;

	if(date>9&&date<31)
	break;
}

}
else{
	cout<<"Enter your date of flight in numbers ";
	cin>>date;
	if(date<1 || date>31)
	for(int f=0;f<=1;f--){
	
	{
		cout<<"Enter correct date ";
			cin>>date;
	}
	if(date>0&&date<31)
	break;
	
}
}



}
else
{

	cout<<"Enter your month of flight in numbers ";
	cin>>month;
	if(month<1 || month>12)
	for(int f=0;f<=1;f--){
	
	{
		cout<<"Enter correct month ";
			cin>>month;
	}
	if(month>0&&month<12)
	break;
}
cout<<"Enter your date of flight in numbers ";
	cin>>date;
	if(date<1 || date>31)
	for(int f=0;f<=1;f--){
	
	{
		cout<<"Enter correct date ";
			cin>>date;
	}
	if(date>0&&date<31)
	break;
}
}
	system("cls");
	cout<<"Enter your gender press F for female and M for male ";
	cin>>gender;		
     for(int t=0;t<=1;t--)
	{
	if(gender=='m'|| gender=='M')
	{
	cgender="male";
	break;
}
    if(gender=='f'|| gender=='F'){
	
	cgender="female";
	break;
}
	cout<<"Enter again";
	cin>>gender;
	}
int n;
system("cls");
cout<<"Choose the airport city for departure ";
cout<<"\nPress 1 for Lahore\nPress 2 for Islamabad\nPress 3 for Karachi\nPress 4 for Multan\nPress 5 for Faisalabad\nPress 6 for Sialkot\nPress 7 for Quetta\nPress 8 for Gwadar\nPress 9 for D.G Khan\nPress 10 for Skardu\nPress 11 for Sukkar\nPress 12 for Tharparkar";
cout<<"\nEnter here ";
label1:
cin>>n;
switch(n)
	{
		case 1:
			city="Lahore";
			break;
		case 2:
			city="Islamabad";
			break;
		case 3:
			city="karachi";
			break;
		case 4:
			city="Multan";
			break;
		case 5:
			city="Faisalabad";
			break;
		case 6:
			city="Sialkot";
			break;
		case 7:
			city="Quetta";
			break;
		case 8:
			city="Gwadar";
			break;
		case 9:
			city="D.G.Khan";
			break;
		case 10:
			city="Skardu";
			break;
		case 11:
			city="Sukkar";
			break;
		case 12:
			city="Tharparkar";
			break;
		default:
			cout<<"Enter Valid number";
			goto label1;
	}
cout<<"Select your Class\nPress 1 for Bussiness Class\nPress 2 for Economy Class";
cout<<"\nEnter here ";
int r;
label2:
cin>>r;
switch(r)
	{
		case 1:
			Class="Bussiness";
			break;
		case 2:
			Class="Economy";
			break;
		default:
			cout<<"Enter Again";
			goto label2;
			}
			system("cls");
cout<<"Choose you Flight";
cout<<"\nPress 1 for Emirates\nPress 2 for PIA\nPress 3 for Airblue\nPress 4 for Shaheen Air\nPress 5 for AirSial";
cout<<"\nEnter here ";
int b;
label3:
cin>>b;
switch(b)
	{
		case 1:
			flight_name="Emirates";
			break;
		case 2:
			flight_name="PIA";
			break;
		case 3:
			flight_name="Airblue";
			break;
		case 4:
			flight_name="Shaheen Air";
			break;
		case 5:
			flight_name="AirSial";
			break;
			default:
				cout<<"Enter again";
				goto label3;
	}

	for(int t=0;t<=1;t--){
	
		
	system("cls");
cout<<"\nVerify that you are not robot\n";
int i=3,o=2,u=1;
//cout<<"You have only "<<k<<" chances";
 int a=++i+(rand()%20);
int B=++u+(rand()%13);
int c=++o+(rand()%10);
cout<<"\nSolve\n"<<"(("<<a<<"*"<<B<<")+"<<c<<"*"<<c<<"("<<B<<"-"<<c<<"))";
int Y=((a*B)+c*c*(B-c));
cout<<"\nEnter your Answer here to continue ";
int O;
bool check_number;

cin>>O;
for (int i = 0; i < 37; i++)
  {char ch=178;
    Sleep(20);
    cout << ch;
  }

  cout << endl
       << endl
       << endl
       << "                                        Please wait Validaing..............";
  cout << endl
       << endl
       << "                  ";

  for (int i = 0; i <= 80; i++)
  {
    Sleep(100);
    cout << char(219);
  }
while(O!=Y){
		for(int k=5;k>-1;k--){
				system("cls");
cout<<"\nVerify that you are not robot\n";
	cout<<"You have only "<<k<<" chances";
//cout<<"You have only "<<k<<" chances";
 int a=1+(rand()%20);
int B=1+(rand()%35);
int c=1+(rand()%15);
cout<<"\nSolve\n"<<"(("<<a<<"*"<<B<<")+"<<c<<"*"<<c<<"("<<B<<"-"<<c<<"))";
int Y=((a*B)+c*c*(B-c));
cout<<"\nEnter your Answer here to continue ";
cin>>O;
 for (int i = 0; i < 37; i++)
  {char ch=178;
    Sleep(20);
    cout << ch;
  }

  cout << endl
       << endl
       << endl
       << "                                        Please wait Validaing..............";
  cout << endl
       << endl
       << "                  ";

  for (int i = 0; i <= 80; i++)
  {
    Sleep(100);
    cout << char(219);
  }
//	cout<<"You have only "<<k<<" chances";
	cout<<"\nAcces Denied";
if(k<1)
exit(0);
}
}
break;
}

system("cls");
cout<<"Select your Country Where you want to go\n";
cout<<"Press 1 for Dubai\nPress 2 for SaudiArabia\nPress 3 for Kuwait\nPress 4 for USA\nPress 5 for Bangladesh\nPress 6 Sirilanka\nPress 7 for Qatar\nPress 8 for London\nPress 9 for NewYork\nPress 10 for China\nPress 11 for South Korea\nPress 12 for Japan";
cout<<"\nEnter here ";
int x;
label4:
cin>>x;
switch(x)
	{
		case 1:
			country="Dubai";
			break;
		case 2:
			country="Saudi Arabia";
			break;
		case 3:
			country="Kuwait";
			break;
		case 4:
			country="USA";
			break;
		case 5:
			country="Bangladesh";
			break;
		case 6:
			country="Srilanka";
			break;
		case 7:
			country="Qatar";
			break;
		case 8:
			country="London";
			break;
		case 9:
			country="New York";
			break;
		case 10:
			country="China";
			break;
		case 11:
			country="South Korea";
			break;
		case 12:
			country="Japan";
			break;
			default:
				cout<<"Enter again";
				goto label4;
	}
	
}
//Passenger(fn,ln,CNIC,passportNumber,seatNumber,cgender,country);
};

class ticket:public Passenger{
   public:
   	
   void payy(){
   	system("cls");
	if(country=="Dubai")
	{
	pay=30000;
	cout<<"You Have to pay "<<pay<<" amount";
}
	else if(country=="Saudia Arabia")
	{
	pay=29000;
	cout<<"You Have to pay "<<pay<<" amount";
}
	else if(country=="kuwait")
	{
	pay=47000;
	cout<<"You Have to pay "<<pay<<" amount";
}
	else if(country=="USA")
	{
	pay=48000;
	cout<<"You Have to pay "<<pay<<" amount";
}
	else if(country=="Bangladesh")
	{
	pay=33000;
	cout<<"You Have to pay "<<pay<<" amount";
}
	else if(country=="Sirilanka")
	{
	pay=37000;
	cout<<"You Have to pay "<<pay<<" amount";
}
	else if(country=="Qatar")
	{
	pay=35000;
	cout<<"You Have to pay "<<pay<<" amount";
}
	else if(country=="London")
	{
	pay=45000;
	cout<<"You Have to pay "<<pay<<" amount";
}
	else if(country=="New York")
	{
	pay=55000;
	cout<<"You Have to pay "<<pay<<" amount";
}
	else if(country=="China")
	{
	pay=50000;
	cout<<"You Have to pay "<<pay<<" amount";
}
	else if(country=="South Korea")
	{
	pay=100000;
	cout<<"You Have to pay "<<pay<<" amount";
}
	else 
	{
	pay=60000;
	cout<<"You Have to pay "<<pay<<" amount";
}
cout<<"\nDo you want to pay now or on recieving ticket";
int y;
label6:
cout<<"\nPress 1 for now\n";
cout<<"press 2 for later\n";
cout<<"Enter here ";
cin>>y;
if(y==1)
{
	cout<<"\nPlease wait while we are connected you to your bank for online payment method";
	for (int i = 0; i < 37; i++)
  {char ch=178;
    Sleep(20);
    //cout << ch;
  }

  cout << endl
       << endl
       << endl
       << "                                        Please wait Redirecting..............";
  cout << endl
       << endl
       << "                  ";

  for (int i = 0; i <= 80; i++)
  {
    Sleep(100);
    cout << char(219);
  }
   system("cls");
   
}
else if(y==2)
{
	cout<<"thank you";
	system("exit");
	exit(0);
}
else{

cout<<"error";
system("cls");
goto label6;
}
}
};
class bank:public Passenger{
	public:
		void confirm(){
		
		cout<<"\nAre you sure want to pay "<<pay<<" amount";
		int d;
		cout<<"\nPress 1 for Comfirm\n";
cout<<"Press 2 for Cancel\n";
cout<<"Enter here ";
cin>>d;
long int concnic[13];
if(d==1)
{
label5:
	system("cls");
	cout<<"please enter your CNIC no\n";
for(int u=0;u<13;u++)
{
	cin>>concnic[u];
	}	
	
for(int u=0;u<13;u++)
{
	if(concnic[u]==CNIC[u])
	{
	cout<<"";
	}	
	else
	{
	
	cout<<"Enter Again";
	goto label5;
    }
}
cout<<"Transaction successful\n";
cout<<"Booking comfirmed";
}
else
{

cout<<"Process cancel";
system("exit");
exit(0);
}
}
};

class update:public Passenger{
	public:
		void Update(){
		system("cls");
		cout<<"\nWhat you want to update";
		label23:
		cout<<"\nPress 1 for date\nPress 2 for month\nPress 3 for year\nPress for 4 class\nPress 5 to go to main menu";
		int u;
		cout<<"\nenter here ";
		cin>>u;
		
		if(u==1){
			cout<<"\nenter date here ";
			cin>>date;
		}
		else if(u==2)
		{
			cout<<"\nenter month number here ";
			cin>>month;
			
		}
		else if(u==5){
	cout<<"";
}
		else if(u==3)
		{
			cout<<"\nenter year number here ";
			cin>>year;
			
		}
		else if(u==4)
		{
			cout<<"Select your Class\nPress 1 for Bussiness Class\nPress 2 for Economy Class";
cout<<"\n Enter here ";
int r;
cin>>r;
switch(r)
	{
		case 1:
			if(Class=="Economy"){
			
			Class="Bussiness";
			pay=30000;
			cout<<"\nYour have to pay "<<pay<<" amount more to go to Bussiness class";
			cout<<"\nAre you sure want to pay "<<pay<<" amount";
		int d;
		cout<<"\nPress 1 for Comfirm\n";
cout<<"Press 2 for Cancel\n";
cout<<"Enter here ";
cin>>d;
long int concnic[13];
if(d==1)
{
label5:
	system("cls");
	cout<<"please enter your CNIC no\n";
for(int u=0;u<13;u++)
{
	cin>>concnic[u];
	}	
	
for(int u=0;u<13;u++)
{
	if(concnic[u]==CNIC[u])
	{
	cout<<"";
	}	
	else
	{
	
	cout<<"Enter Again";
	goto label5;
    }
}


cout<<"Transaction successful\n";
cout<<"Booking comfirmed";
}

else
{

cout<<"Process cancel";
system("exit");
}
}
else
{
cout<<"class is business already";

for (int i = 0; i < 5; i++)
  {
    Sleep(50);
    cout << ".";
  }
goto label23;	
}

			break;
		case 2:
			Class="Economy";
			break;
			
		}
	}
	else
	{
		cout<<"\nerror enter again;";
		goto label23;
	}
}
};	

int Support(){
	label49:
	label80:
		system("cls");
	cout<<"\nHello Sir/Madam....";
	cout<<"\nHow can I help you....";
	cout<<"\nPress 1 to submit an issue...";
	cout<<"\nPress 2 to see about us...";
	cout<<"\nPress 3 to see you Access...";
	cout<<"\nPress 4 to see our FAQ...";
	cout<<"\nPress 5 to learn how to use our website...";
	cout<<"\nPress 6 if none of the above describe your problem/issue...";
	cout<<"\nPress 7 to return to main menu";
	cout<<"\nEnte here ";
	int l;
	cin>>l;
	if((l<1)||(l>7))
	goto label80;
	if(l==1){
		system("cls");
		cout<<"\nYou want to submit an issue";
		label09:
		cout<<"\nPress 1 for having problem in data update...\nPress 2 for getting unrelevent messege from us...\nPress 3 to block Messege from us...\nPress 4 for name already exist problem...\nPress 5 for having interface problem...";
		int d;
		cout<<"\nEnter here";
		cin>>d;
		switch(d){
			case 1:
				{
				
				label14:
					system("cls");
				cout<<"\nPress 1 if you are facing problem in update timing...\nPress 2 if you have problem in updating class";
				int u;
				cout<<"\nEnter here ";
				cin>>u;
				if(u==1)
				{
					system("cls");
					cout<<"The problem can be as follow...\nThe date you entering can the date that has been passed or invalid input is there like (-1) or a'' etc";
					cout<<"\nThe problem can be as follow...\nThe month you entering can the month that has been passed or invalid input is there like (-1) or a'' etc";
					cout<<"\nThe problem can be as follow...\nThe year you entering can the year that has been passed or invalid input is there like (-1) or a'' etc";
					cout<<"\nAccording to our view the year should not more than 2025 or less than 2023";
					label12:
					cout<<"\nPress 1 if it is helpfull else 0";
					cout<<"\nEnter here ";
					int m;
					cin>>m;
					if(m==0){
					system("cls");
					cout<<"\nIf there is some other issue please let us know....";
					cout<<"\nEnter the problem here ";
					string g1;
					cin>>g1;
					cout<<"\nWe have recieved your issue please be patient we will notify you shortly...\n";
				}
				    else if(m==1)
				    cout<<"\nThank you for your time and have a nice day...";
				    else{
					
				    cout<<"\ninvalid input";
					goto label12;
				}
				}
				else if(u==2){
					system("cls");
					cout<<"\nSorry that you are facing problem...";
					cout<<"\nThe problem can be as follow...\nUpdating from bussiness class to business class\nDear user,\nAs the updating class is your current class so it is not possibly an update... ";
					cout<<"\n\nThe problem can be as follow...\nUpdating from bussiness class to economy class\nDear user,\nOur goal is to provide sevices and the choice from business to economy class is not a good choice\nWe highly recommend you to try our Business class...\nIn some serious case please email us...\nIf the reason is valid we will take actions...";
					cout<<"\nThe problem can be as follow...\nUpdating from economy class to economy class\nDear user,\nAs the updating class is your current class so it is not possibly an update... ";
					cout<<"\nThe problem can be as follow...\nUpdating from economy class to business class\nDear user,\nAs the updating class is business class You have to have an additional amount of 30000...\nThat is fix and cannot be change... ";
				label13:
					cout<<"\nPress 1 if it is helpfull else 0";
					cout<<"\nEnter here ";
					int m;
					cin>>m;
					if(m==0){
					system("cls");
					cout<<"\nIf there is some other issue please let us know....";
					cout<<"\nEnter the problem here ";
					string g1;
					cin>>g1;
					cout<<"We have recieved your issue please be patient we will notify you shortly...\n";
				}
				    else if(m==1)
				    cout<<"\nThank you for your time and have a nice day...";
				    else{
					
				    cout<<"\ninvalid input";
					goto label13;
				}	
					
				}
				else{
				
				cout<<"\nInvalid input";
				goto label14;
			}
			break;
		}
		case 2:{
			system("cls");
			cout<<"\nSorry to hear that you are getting unrelevent messege from us...";
			cout<<"\nWithout hesitate Please tell the type of messege you are getting describe them in detail...";
			cout<<"\nYes! We are hearing you start typing...";
			cout<<"\nDon't Forget to send us the email and IP Email Addess...";
			string g2;
			cin>>g2;
			cout<<"\nThank you we recieved your answer regarding the issue...\nOur team will find them as soon as possible please be in contact with us...";
		break;
		}
		case 3:
			{   label34:
				system("cls");
				cout<<"\nPress 1 to block messege...";
				cout<<"\nPress 0 to cancel...";
				int yu;
				cout<<"\nEnter here ";
				cin>>yu;
				if(yu==1){
					cout<<"\nOperation successful...\nNow you will not recieve messege\nPress 6 to unblock";
					}
					else if(yu==0){
						cout<<"\nOperation canceled successfully";
					}
						else{
						
						cout<<"\nInvalid input";
						goto label34;
					}
					break;
			}
			case 4:{
				system("cls");
				cout<<"\nYou have name already exist problem...";
				cout<<"\n name already exist problem... \nour when the name and the CNIC of the two persons are exactly the same ";
				cout<<"\nTo overcome this issue please check that you have reserved before from other websites or not...";
				cout<<"\nIf there is a problem in the system it will automatically be fixed in few hours...";
				label15:
					system("cls");
					cout<<"\nPress 1 if it is helpfull else 0";
					cout<<"\nEnter here ";
					int m;
					cin>>m;
					if(m==0){
					
					cout<<"\nIf there is some other issue please let us know....";
					cout<<"\nEnter the problem here ";
					string g1;
					cin>>g1;
					cout<<"\nWe have recieved your issue please be patient we will notify you shortly...\n";
				}
				    else if(m==1)
				    cout<<"\nThank you for your time and have a nice day...";
				    else{
					
				    cout<<"\ninvalid input";
					goto label15;
				}	
				break;
			}
			case 5:{
				system("cls");
				cout<<"\nHaving Interface problem...";
				cout<<"\nCheck the following steps...";
				cout<<"\n1: Check your internet connection...";
				cout<<"\n2: Check your backend running apps...";
				cout<<"\n3: Check your display connection...";
				cout<<"\n4: Check wether your PC is not heated up...";
				label16:
					
					cout<<"\nPress 1 if it is helpfull else 0";
					cout<<"\nEnter here ";
					int m;
					cin>>m;
					if(m==0){
					system("cls");
					cout<<"\nIf there is some other issue please let us know....";
					cout<<"\nEnter the problem here ";
					string g1;
					cin>>g1;
					cout<<"\nWe have recieved your issue please be patient we will notify you shortly...\n";
				}
				    else if(m==1)
				    cout<<"\nThank you for your time and have a nice day...";
				    else{
					
				    cout<<"\ninvalid input";
					goto label16;
				}	
				break;
			}
			
			
				
	
			
			
		}
		}
	

	else if(l==2){
		
		cout<<"\nWelcome to 5Star Airline Reservation System!\nAt 5Star Airline Reservation System, we are dedicated to providing you with a seamless and convenient booking experience for all your travel needs. With our user-friendly platform and extensive network of airlines, we strive to make your journey a hassle-free and enjoyable one.\nOur mission is to connect you with the world by offering a wide range of flights, flexible schedules, and competitive prices. Whether you're planning a business trip, a family vacation, or a weekend getaway, we are here to cater to your travel preferences and make your dreams take flight.\nWhy Choose 5Star Airline Reservation System?\nEasy Booking Process: Our intuitive online platform allows you to search, compare, and book flights effortlessly. With just a few clicks, you can secure your seat and receive instant confirmation of your reservation.\nExtensive Flight Options: We partner with leading airlines from around the globe, offering you a vast selection of destinations, routes, and flight schedules. Whether you're traveling domestically or internationally, we have the perfect flight for you.\nCompetitive Prices: We understand the value of your hard-earned money. That's why we work tirelessly to negotiate the best deals and discounts with our airline partners. Our aim is to provide you with affordable airfare options without compromising on quality and service.\nPersonalized Travel Experience: We believe that every traveler is unique. That's why we offer customizable travel options to cater to your specific requirements. From seat preferences to meal choices, we strive to make your journey tailored to your needs.\n24/7 Customer Support: Your satisfaction is our top priority. Our dedicated customer support team is available round the clock to assist you with any queries, changes, or concerns you may have. We are committed to ensuring that your travel experience is smooth from start to finish.\nAt 5Star Airline Reservation System, we are passionate about connecting people and cultures through travel. We aim to be your trusted travel partner, providing you with reliable service and unforgettable experiences. Join us on this exciting journey and let us take care of all your travel arrangements.\nStart exploring the world with 5Star Airline Reservation System today!";
		
		
	}
	else if(l==3){
		cout<<"\nThe Access of the User or customer is limited... ";
		cout<<"\n1: Registration: Users can create an account by providing their personal information such as name, email address, and contact details. This allows them to have a unique login ID and password for accessing the system.";
		cout<<"\n2: Flight Search: Once logged in, users have access to the flight search functionality. They can specify their travel details such as origin, destination, dates, and passenger count to search for available flights.";
		cout<<"\n3: Flight Selection: Users can view the search results and choose from the available flight options based on their preferences. They can see details like flight timings, airlines, layovers, and fares to make an informed decision.";
		cout<<"\n4: Seat Selection: After selecting a flight, users may have the option to choose their preferred seats on the aircraft, depending on the airline and the system's capabilities.";
		cout<<"\n5: Booking and Payment: Users can proceed with the flight booking by providing passenger details, such as names and ages, and making the payment. The system should securely handle the payment process, offering various payment options for user convenience.";
		cout<<"\n6: Itinerary and E-Ticket: Once the booking is confirmed and payment is successful, users can access their itinerary and e-ticket. This includes flight details, seat numbers, departure and arrival times, and any additional services they have purchased.";
		cout<<"\n7: Booking Management: Users may have access to a booking management section where they can view and modify their existing bookings, such as changing flight dates or adding extra services. This allows users to have control over their travel plans.";
		cout<<"\n8: Customer Support: The system may provide access to customer support channels, such as live chat, email, or a helpline, where users can seek assistance regarding their bookings, cancellations, or any other queries they may have.";
		cout<<"\nPress 1 for contact us...\nPress 0 for exit...";
		int f;
		cin>>f;
		if(f==1){
			cout<<"\nEmail: Sparrowflame840@gmail.com";
			cout<<"\nPhone: (+92) 307-5643964";
			cout<<"\nFax: 5Star3345@faxail.com";
			cout<<"\nServices Available Monday-Friday";
			cout<<"\nTiming 09:00 am - 08:00 pm";
			
		}
		else{
			exit(0);
		}
        label160:
					cout<<"\nPress 1 if it is helpfull else 0";
					cout<<"\nEnter here ";
					int m;
					cin>>m;
					if(m==0){
					
					cout<<"\nIf there is some other issue please let us know....";
					cout<<"\nEnter the problem here ";
					string g1;
					cin>>g1;
					cout<<"\nWe have recieved your issue please be patient we will notify you shortly...\n";
				}
				    else if(m==1)
				    cout<<"\nThank you for your time and have a nice day...";
				    else{
					
				    cout<<"\ninvalid input";
					goto label160;
	}
}
	else if(l==4){
		
		
		cout<<"\nSome FAQ of our Website are...";
		cout<<"\n1: Can I book flights for multiple passengers?\nYes, you can book flights for multiple passengers. During the booking process, you will have the option to enter the names and details of all the passengers traveling together.";
		cout<<"\n2: What payment methods are accepted?\nWe accept various payment methods, including credit cards, debit cards, and online payment gateways. You can choose the payment method that is most convenient for you during the checkout process.";
        cout<<"\n3: How do I receive my tickets?\nAfter completing the booking and payment process, you will receive an e-ticket via email. You can either print the e-ticket or show the electronic version on your mobile device during check-in at the airport.";	
	    cout<<"\n4: Can I make changes to my booking?\nDepending on the fare rules and airline policies, you may be able to make changes to your booking. Visit the booking management section on our website or contact our customer support for assistance with modifications.";
	    cout<<"\n5: How can I contact customer support?\nYou can reach our customer support team through various channels, including phone, email, or live chat. Visit our Contact Us page on the website for the relevant contact information.";
        cout<<"\n6: How do I search for flights?\nTo search for flights, simply enter your departure and destination airports, select your travel dates, and specify the number of passengers. Click the search button to view available flight options.";	
         label1160:
					cout<<"\nPress 1 if it is helpfull else 0";
					cout<<"\nEnter here ";
					int m;
					cin>>m;
					if(m==0){
					
					cout<<"\nIf there is some other issue please let us know....";
					cout<<"\nEnter the problem here ";
					string g1;
					cin>>g1;
					cout<<"\nWe have recieved your issue please be patient we will notify you shortly...\n";
				}
				    else if(m==1)
				    cout<<"\nThank you for your time and have a nice day...";
				    else{
					
				    cout<<"\ninvalid input";
					goto label1160;
	}

	}
	else if(l==5){
		
		cout<<"\n1: First of all Enter your first name press Enter";
		cout<<"\n2: then Enter your last name press Enter";
		cout<<"\n3: then Enter your Real valid CNIC Number then press Enter";
		cout<<"\n4: Enter your Passport NUmber";
		cout<<"\n5: Enter your age";
		cout<<"\n6: Enter your year then month and then date of flight";
		cout<<"\n7: Enter your Gender";
		cout<<"\n8: Choose your city of Departure";
		cout<<"\n9: Choose your class";
		cout<<"\n10: Choose your Flight";
		cout<<"\n11: Choose your country where you want to go";
		cout<<"\n12: Do the payment Online";
		cout<<"\n13: That's all you need to do you ticket is booked ";
		cout<<"\n14: You can see your status 24/7";
		cout<<"\nThis is our guidance to our services";
	    label1169:
					cout<<"\nPress 1 if it is helpfull else 0";
				    cout<<"\nEnter here ";
					int m;
					cin>>m;
					if(m==0){
					
					cout<<"\nIf there is some other issue please let us know....";
					cout<<"\nEnter the problem here ";
					string g1;
					cin>>g1;
					cout<<"\nWe have recieved your issue please be patient we will notify you shortly...\n";
				}
				    else if(m==1)
				    cout<<"\nThank you for your time and have a nice day...";
				    else{
					
				    cout<<"\ninvalid input";
					goto label1169;
	}	
}
else if(l==6){
	
	cout<<"\nPlease Describe you poblem in detail... Provide relevent materials to prove your point...\nOur team will be in view of your problem...";
	string x1;
	cout<<"\nEnter here ";
	cin>>x1;
	cout<<"\nWe recieved your issuse we will try to resolve it as soon as possible please be patient!\nWe will reply in 3-5 bussiness days ";
	cout<<"\nIf you want to contact us Please see our about us page...";
}
 else if(l==7){
 	return 0;
 	//exit(0);
 }
	else
	{
		cout<<"\ninvalid input";
		goto label49;
	}
	
	
}
char ch=178;
int d=30;
string x;
	int fun(){
		int r;
		system("cls");
	    int timeout=59;
		int hour[8];
		int minute[8];
		int second[8];
		for(int N=0;N<8;N++){
		
		second[N]=1+rand()%60;
		minute[N]=1+rand()%58;
		hour[N]=1+rand()%11;
	}
	do{
		char c;
	
		for(int S=0;S<=1;S--){
		for(int t=0;t<=5;t++){
			system("cls");
			
		
			cout<<"                                    Flight Schedule                        "<<endl;
    cout<<"         ______________________________________________________________________"<<endl;
    cout<<"        |  Schedule  |     Airlines    |         To           |     Status     |"<<endl;
    cout<<"        |______________________________________________________________________|"<<endl;
    cout<<"        |   ";cout<<hour[0]<<":"<<minute[0]<<":"<<second[0]<<   "  |       PIA       |    Saudia Arabia     |    Departed    |"<<endl;
    cout<<"        |            |    Emirates     |       London           |    Delayed   |"<<endl;
    cout<<"        |   ";cout<<hour[1]<<":"<<minute[1]<<":"<<second[1]<<   "  |    Air Blue     |        USA           |    Departed    |"<<endl;
    cout<<"        |            |   Shaheen Air   |       Qatar            |    Departed  |"<<endl;
    cout<<"        |            |    Air Blue     |       China            |    Departed  |"<<endl;
    cout<<"        |   ";cout<<hour[2]<<":"<<minute[2]<<":"<<second[2]<<   "  |       PIA       |     Bangladesh       |    Expected    |"<<endl;
    cout<<"        |            |    Air Sial     |      Srilanka          |    Delayed   |"<<endl;
    cout<<"        |   ";cout<<hour[3]<<":"<<minute[3]<<":"<<second[3]<<   "  |    Emirates     |       Japan          |  Now Check In  |"<<endl;
    cout<<"        |            |   Shaheen Air   |       Kuwait           |  Now Check In|"<<endl;
    cout<<"        |            |    Air Blue     |      New York          |  Now Check In|"<<endl;
    cout<<"        |   ";cout<<hour[4]<<":"<<minute[4]<<":"<<second[4]<<   "  |   Shaheen Air   |    South Korea       |    Delayed     |"<<endl;
    cout<<"        |            |    Air Sial     |       Dubai            |  Now Check In|"<<endl;
    cout<<"        |   ";cout<<hour[5]<<":"<<minute[5]<<":"<<second[5]<<   "  |       PIA       |    Saudi Arabia      |    Expected    |"<<endl;
    cout<<"        |            |       PIA       |     Bangladesh         |    Expected  |"<<endl;
    cout<<"        |   ";cout<<hour[6]<<":"<<minute[6]<<":"<<second[6]<<   "  |   Shaheen Air   |      Srilanka        |    Expected    |"<<endl;
    cout<<"        |            |    Emirates     |       Japan            |    Delayed   |"<<endl;
    cout<<"        |            |    Air Blue     |       China            |    Expected  |"<<endl;
    cout<<"        |   ";cout<<hour[7]<<":"<<minute[7]<<":"<<second[7]<<   "  |       PIA       |       Kuwait         |    Expected    |"<<endl;
    cout<<"        |            |    Air Sial     |       Qatar            |    Delayed   |"<<endl;
    cout<<"        |            |    Emirates     |       London           |    Delayed   |"<<endl;
    cout<<"        |____________|_________________|______________________|________________|"<<endl;
    
    cout<<"\nAutomatically Redirecting to main menu in "<<timeout<<" sec";
    
    
   
   // cout<<"\nEnter here ";
    //cin>>r;
    //if(r==0){
    //	return 0;
	//}
}
			
 		
		//system("cls");
			Sleep(3000);
			for(int y=0;y<8;y++){
			
			
			
			second[y]++;
			timeout--;
		
			
			if(second[y]>59){
				
			
				Sleep(1);
				second[y]=0;
				minute[y]++;
				
			}
			if(timeout==0)
				return 0;
			if(minute[y]>59)
			{
			Sleep(1);
				minute[y]=0;
				
				hour[y]++;
			}
	}
}


}while(!(x=="ESC"));
return 0;
}
static Passenger P[10];
class list:public Passenger{
	int g;
public:
	int lIst(){
	
		int b=60;
	//	for(int y=1;y<=60;y++){
		
		
			system("cls");
			for(int i=0;i<10;i++)
		
		P[i].boarding();
		cout<<"\nWait we are redirecting you to main menu ";
		for(int y=1;y<=60;y++){
		
			Sleep(100);
			cout<<".";
			
			
		
		}
		
		
	cout<<"\nok";
	return 0;
    /*cout<<" ______________________________________________________________________________"<<endl;
    cout<<"|                   Five Stars Airport Handling Service                        |"<<endl;
    cout<<"|______________________________________________________________________________|"<<endl;
    cout<<"| Name:    ";cout<<name<<"                                     |   Class:                |"<<endl;
    cout<<"|                                                    |   Seat :                |"<<endl;
    cout<<"| Airlines      Date      Class        Seat          |                         |"<<endl;
    cout<<"|//Airlines    //date     //class      //seat        |   //name                |"<<endl;
    cout<<"|                                                    |   //airlines            |"<<endl;
    cout<<"| From          To        Boarding Time              |                         |"<<endl;
    cout<<"| //from       //to       12:45                      |   From://from           |"<<endl;
    cout<<"|                                                    |     To://To             |"<<endl;
    cout<<"|                                                    |   //Date                |"<<endl;
    cout<<"|____________________________________________________|_________________________|"<<endl;
    cin>>g;*/
}
  
  
};
		
		
		
	
	 

	

int main(){
	int ip=0;
	int choice;
	char ch=178;
  system("color 3");
  
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n                                 System Starting";
   for (int i = 0; i < 30; i++)
  {
    Sleep(200);
    cout <<".";
    
  }
  system("cls");
  cout << endl;
  for (int i = 0; i < 43; i++)
  {
    Sleep(20);
    cout << ch;
  }
  cout << "  Welcome  5-Star Airlines  ";
  for (int i = 0; i < 43; i++)
  {
    Sleep(20);
    cout << ch;
  }

  cout << endl
       << endl
       << ch << ch << ch << " Submitted to:     =>   S.Fayez Afzaal\n";
  cout << endl
       << endl
       << ch << ch << ch << " created by "
       << "    <=>   "
       << " Registration No " << ch << ch << ch;
  cout << "\n_________________";
  cout << "\n\n"
       << ch << ch << " Adeel Ahmad            => SP22-BCS-017" << endl;
  cout << "\n"
       << ch << ch << " Uswa Ayaz              => SP22-BCS-118" << endl;
  cout << "\n"
       << ch << ch << " Akifa Zameer           => SP22-BCS-126" << endl;
  cout << "\n"
       << ch << ch << " Ayesha Mubeen          => SP22-BCS-130"
       << endl;
       cout << "\n"
       << ch << ch << " Ayesha Saddiqa         => SP22-BCS-131\n"<< endl;

ticket t[10];
bank b[10];
  for (int i = 0; i < 37; i++)
  {
    Sleep(20);
    cout << ch;
  }
  cout << "  COMSATS University Islamabad Sahiwal  ";
  for (int i = 0; i < 37; i++)
  {
    Sleep(20);
    cout << ch;
  }

  cout << endl
       << endl
       << endl
       << "                                        Please wait Loading..............";
  cout << endl
       << endl
       << "                  ";

  for (int i = 0; i <= 80; i++)
  {
    Sleep(100);
    cout << char(219);
  }
  cout << endl
       << endl;
  system("cls");

  
  {
  	label86:
  		system("cls");
    cout << endl;
    for (int i = 0; i < 43; i++)
    {
      Sleep(15);
      cout << ch;
    }
    cout << "   5-Star Airlines  ";
    for (int i = 0; i < 43; i++)
    {
      Sleep(15);
      cout << ch;
    }
    cout << endl;
    cout << endl
         << endl
         << ch << ch << " 1. Flight Schedule.";
    cout << endl
         << endl
         << ch << ch << " 2. Make a Reservation.";
    cout << endl
         << endl
         << ch << ch << " 3. Update data.";
         /* cout << endl
         << endl
         << ch << ch << " 4. View Passsenger list.";
    */
    cout << endl
         << endl
         << ch << ch << " 4. Customer Support.";
         cout << endl
         << endl
         << ch << ch << " 5. Exit Program.";
         cout<<endl;
         cout<<endl;
         cout<< ch << ch << " Enter your choice: ";
    cin >> choice;
    while (choice>=1&&choice<=5)
{
	    system("cls");
     switch (choice)
    {

    case 1:
    {
      fun();
      goto label86;

      break;
    }

    case 2:
    {
      
      for(int I=0;I<10;I++)
      {
	  system("cls");
      P[I].getinput();
      t[I].payy();
      b[I].confirm();
       P[I].boarding();
      cout<<endl;
      ip=ip+1;
      cout<<"\nDo you want to add more \nPress 1 to Continue\nPress 0 to terminate";
      cout<<"\nEnter here ";
      int YT;
      cin>>YT;
      if(YT==1)
      continue;
      else
      
      {
      	goto label86;
	  }break;
      
      
  }
      break;
    }

    case 3:
    {
    	if(ip>=1){
    		int cnic[13];
    		cout<<"\nEnter your CNIC to match your Record";
		for(int x=0;x<13;x++)
		{
			cin>>cnic[x];
			
		}
		int lp=0;
		for(int x=0;x<13;x++)
	//	for(int u=1;u<=10;u++)
		{
			if(cnic[x]==CNIC[x])
			{
		       		
		       		lp++;
			}
			
			
		}
		if(lp==13){
		
    	update u[10];
    	for( int i=0;i<10;i++)
    	{
		if(ip>=1){
		
    	u[0].Update();
    }
}
}
    else{
    	
cout<<"\nError No data Found";
      
  }
}
else{ 
cout<<"\nempty no data found";
for (int i = 0; i < 5; i++)
    {
      Sleep(50);
      cout << ".";
    
}

}
	goto label86;


      break;
    }
/*case 4:
	{
		list io[10];
		
		//for(int r=0;r<10;r++){
	//	io[r]=P[r];
	
//}
		if(ip>=1){
    		int cnic[13];
    		cout<<"\nEnter your CNIC to match your Record";
		for(int x=0;x<13;x++)
		{
			cin>>cnic[x];
			
		}
		int lp=0;
		for(int x=0;x<13;x++)
	//	for(int u=1;u<=10;u++)
		{
			if(cnic[x]==CNIC[x])
			//{
		       		
		       		lp++;
			}
			
			
		//}
		if(lp==13){
		
    	
    	for( int i=0;i<10;i++)
    	{
		if(ip>=1){
		list l1;
    	l1.lIst();
    }
}
}
    else{
    	
cout<<"\nError No data Found";
      
  }
}
	

else{ 
cout<<"\nempty no data found";
for (int i = 0; i < 5; i++)
    {
      Sleep(50);
      cout << ".";
    
}

	goto label86;
}
		break;
	
}
*/
case 4:
    	{
    		Support();
    		goto label86;
    		break;
		}
case 5:
			{
				exit(0);
				break;
			}
    default:
    {
      cout << endl
           << " You Enter invalid Number plese Again => " << endl;
           goto label86;
    }
    }


	 
    //Support();
}
	return 0;
}
}

	
	
	
