#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<windows.h>
#include "Order.cpp"

using namespace std;





class Manager :  public Order
{
	public:
		void total()
	    {
	      	double userId; //for user id of MANAGER
	      		
			d:	
			cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t---------------------------------------------------------------";
			cout << "\n\n\t\t\t\t\t\t\tACCESS GRANTED !!! Welcome to RAJU RESTAURANT MANAGEMENT SYSTEM !!! \n\n\n";
			cout << "\n\t\t\t\t\t\t\tENTER REGISTERED REGISTRATION NUMBER GIVEN BY UNIVERSITY AS YOU ID = ";
			cin >> userId;
			cout << "\t\t\t\t\t\t\t--------------------------------------------------------------------------";
			if(userId != 2020146)  
			{
				cout << "\nPLEASE ENTER CORRECT ID !!!\n";
				goto d;
			}
			else
				cout << "\n\n\n\t\t\t\t\t\t\tWELCOME TO RAJU RESTAURANT MANAGEMENT SYSTEM!!!\n";
				z:
				string pass = "2020146";  //password
				string passw = "";  //empty string
				char c;	
				cout << "\n\n\n\t\t\t\t\t\t\tPASSWORD = "; 
				p:
				c = getch();
				cout << "*" ;   //for printing * instead for password
				if (c != 13) 
				{
					passw = passw + c;  // (adding one string to another)
					goto p;
				}   
						
	      		{
	      				
	      		if(passw == pass)
	      		{
	      			cout << "\n\n\t\t\t\t\t\t\tACCESS GRANTED !!! Welcome to RAJU RESTAURANT MANAGEMENT SYSTEM !!! \n\n\n";
	      			system("PAUSE");
	      			system("CLS");
	      			show1();
				}
				else
				{
					cout << "\nTHE PASSWORD YOU ENTERED IS INCORRECT. PLEASE TRY AGAIN\n";
					goto z;
				}
				}
		}
};
