#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<windows.h>
#include "menu.cpp"

using namespace std;





class Order : public Menu
{
	// FUNCTION DECLARED FOR ORDER AND PRICES AND QUANTITY
	protected:
		int  pizza = 0;
		int ch , a , b , c = 0;
		int d , e , f , g , h , i = 0;
		int j , k , l , m , n , o , p = 0;
		int q , r , s = 0;
    	string y , ye;
    public:
    	
		void menu2()
		{   
			ofstream write;
			write.open("order.text");
			if(!write)
			{
				cout << "file can not open" << endl;
				exit (-1);
			}
		
			a:
			b:
			c:
			//placing order
			cout << "\n\n\tENTER YOUR ORDER (one order at a time): "; 
			cin >> ch;
		    
		    //updating order
			cout << "\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";		 
			cin >> ye;
		 
			if(ye=="y"|| ye=="Y")
			{
				goto b;
			}
			else
			{
				switch(ch)
			   {
			   	case 1:
			   		cout << "\n\n\tHOW MANY PIZZA YOU WANT :";
			   		cin >> pizza;
			   	
			   		a = 480; //individual amount
			   		// s = total amount calculated to the number of orders
			   		s = s + a * pizza;
			   		write << "YOU ORDER RAJU SUPREME SPECIAL : 480";
			   		write << endl;
			   		write << "NUMBER OF PIZZA IS : " << pizza;
			   		write << endl;
			   		
			   		cout << "\n\n\n\tYOU ORDER RAJU SUPREME SPECIAL " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			   		break;
			   	
			   	case 2:
			   		cout << "\n\n\tHOW MANY PIZZA YOU WANT :";
			   		cin >> pizza;
			   		
					b = 440;
			   		s = s + b * pizza;
			   		write << "YOU ORDER  BEHARI KABAB PIZZA : 440";
			   		write << " \n";
			   		write << "NUMBER OF PIZZA IS : " << pizza;
			   		write << endl;
			   		
				   	cout << "\n\n\n\tYOU ORDER BEHARI KABAB PIZZA " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				   	break;
			   	
			   	case 3:
			   		cout << "\n\n\tHOW MANY ARABIAN PIZZA YOU WANT :";
			   		cin >> pizza;
			   	
			   		c = 580;
			   		s = s + c * pizza;
			   		write << "YOU ORDER  ARABIAN PIZZA : 580";
			   		write << endl;
			   		write << "NUMBER OF  ARABIAN PIZZA IS : " << pizza;
			   		write << endl;
			   		
				   	cout << "\n\n\n\tYOU ORDER  AARABIAN PIZZA " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				   	break;
			   	
			   	case 4:
			   		cout << "\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT : ";
			   		cin >> pizza;
			   	
			   		d = 520;
			   		s = s + d * pizza;
			   		write << "YOU ORDER  CRISPY CHICKEN : 520";
			   		write << endl;
			   		write << "NUMBER OF CRISPY CHICKEN IS : " << pizza;
			   		write << endl;
			   		
				   	cout << "\n\n\n\tYOU ORDER CRISPY CHICKEN  " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
			   		break;
			   	
			   	case 5:
			   		cout << "\n\n\tHOW MANY SPAGHETTI YOU WANT : ";
			   		cin >> pizza;
			   	
			   		e = 350;
			   		s = s + e * pizza;
			   		write << "YOU ORDER  SPAGHETTI : 350";
			   		write << endl;
			   		write << "NUMBER OF SPAGHETTI IS : " << pizza;
			   		write << endl;
				   	cout << "\n\n\n\tYOU ORDER  SPAGHETTI " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				   	break;
			   	
			   	case 6:
			   		cout << "\n\n\tHOW MANY PIZZA YOU WANT : ";
			   		cin >> pizza;
			   	
			   		f = 400;
			   		s = s + f * pizza;
			   		write << "YOU ORDER CHICKEN TIKKA : 400 ";
			   		write << endl;
			   		write << "NUMBER OF PIZZA IS : " << pizza;
			   		write << endl;
			   		
				   	cout << "\n\n\n\tYOU ORDER CHICKEN TIKKA PIZZA " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				   	break;
			   	
			   	case 7:
			   		cout << "\n\n\tHOW MANY MALAI BOTI PIZZA YOU WANT : ";
			   		cin >> pizza;
			   	
			   		g = 420;
			   		s = s + g * pizza;
			   		write << "YOU ORDER MALAI BOTI PIZZA : 420 ";
			   		write << endl;
			   		write << "NUMBER OF MALAI BOTI PIZZA IS : " << pizza;
			   		write << endl;
			   		
				   	cout << "\n\n\n\tYOU ORDER  MALAI BOTI PIZZA " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				   	break;
			   	
			   	case 8:
			   		cout << "\n\n\tHOW MANY PIZZA YOU WANT :";
			   		cin >> pizza;
			   	
			   		h = 540;
			   		s = s + h * pizza;
			   		write << "YOU ORDER DOUBLE CHEESE : 540";
			   		write << endl;
			   		write << "NUMBER OF PIZZA IS : " << pizza;
			   		write << endl;
			   		
				   	cout << "\n\n\n\tYOU ORDER   DOUBLE CHEESE " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				   	break;
			   	
				case 9:
					cout << "\n\n\tHOW MANY PASTAS YOU WANT :";
			   		cin >> pizza;
			   	
					i = 548;
					s = s + i * pizza;
					write << "YOU ORDER ALFERADO PASTA : 548";
					write << endl;
					write << "NUMBER OF PASTAS IS : " << pizza;
			   		write << endl;
			   		
				   	cout << "\n\n\n\tYOU ORDER ALFERADO PASTA " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				   	break;
			   	
			   	case 10:
			   		cout << "\n\n\tHOW MANY BURGERS YOU WANT :";
			   		cin >> pizza;
			   	
			   		j = 390;
			   		s = s + j * pizza;
			   		write << "YOU ORDER ZINGER BURGER : 390";
			   		write << endl;
			   		write << "NUMBER OF ZINGER BURGER IS : " << pizza;
			   		write << endl;
			   		
				   	cout << "\n\n\n\tYOU ORDER ZINGER BURGER " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				   	break;
			   	
			   	case 11:
			   		cout << "\n\n\tHOW MANY PIZZA YOU WANT :";
			   		cin >> pizza;
			   	
			   		k = 525;
			   		s = s + k * pizza;
			   		write << "YOU ORDER PAPA CHINOS PIZZA : 525";
			   		write << endl;
			   		write << "NUMBER OF PIZZA IS : " << pizza;
			   		write << endl;
			   		
				   	cout << "\n\n\n\tYOU ORDER PAPA CHINOS PIZZA " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				   	break;
				   	
			   	case 12:
			   		cout << "\n\n\tHOW MANY FRIED FISH YOU WANT :";
			   		cin >> pizza;
			   	
			   		l = 425;
			   		s = s + l * pizza;
			   		write << "YOU ORDER FRIED FISH : 425";
			   		write << endl;
			   		write << "NUMBER OF FRIED FISH PIECE IS : " << pizza;
			   		write << endl;
			   		
				   	cout << "\n\n\n\tYOU ORDER  FRIED FISH PIECE " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				   	break;
			   	
			   	case 13:
			   		cout << "\n\n\tHOW MANY FAJITAS YOU WANT :";
			   		cin >> pizza;
			   	
			   		m = 335;
			   		s = s + m * pizza;
			   		write << "YOU ORDER  FAJITAS  : 335";
			   		write << endl;
			   		write << "NUMBER OF FAJITAS IS : " << pizza;
			   		write << endl;
			   		
				   	cout << "\n\n\n\tYOU ORDER Fajitas " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				   	break;
			   	
			   	case 14:
			   		cout << "\n\n\tHOW MANY MAYO FRIES YOU WANT :";
			   		cin >> pizza;
			   	
			   		n = 324;
			   		s = s + n * pizza;
			   		write << "YOU ORDER MAYO FRIES : 324";
			   		write << endl;
			   		write << "NUMBER OF MAYO FRIES ORDER IS : " << pizza;
			   		write << endl;
			   		
				   	cout << "\n\n\n\tYOU ORDER  MAYO FRIES " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				   	break;
			   	
			   	case 15:
			   		cout << "\n\n\tHOW MANY HOT DOG YOU WANT :";
			   		cin >> pizza;
			   	
			   		o = 360;
			   		s = s + o * pizza; 
			   		write << "YOU ORDER  HOT DOG : 360";
			   		write << endl;
			   		write << "NUMBER OF HOT DOG IS : " << pizza;
			   		write << "\n";
			   		
				   	cout << "\n\n\n\tYOU ORDER  HOT DOG " << endl << "\tYOUR ORDER SUCCESSFULLY SAVED " << endl;
				   	break;
			   	
			   	case 16:
			   		cout << "\n\t\t\t\t\t WELCOME TO RAJU RESTAURANT. HAVE A GOOD DAY !!! ";
			   		exit(0);
			   	break;
			   	
			   		default:
			   		cout << "\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! " << endl;
			   		goto c;
			   		break;
			   	}
			   
			   	cout << "\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
			   	cin >> y;
			   
				if(y == "yes"|| y == "YES")
				{
			   		goto a; //goto statement provides control to some other part of the program
				}
			   
				else
				{
				   	cout << "\n\t\t\t\t\t\t\tTHANK YOU FOR PLACING YOUR ORDER :) " << "\nGENERATING BILL ";
				   	for(int a = 1; a < 5; a++) //  Generating of bill
					{
						Sleep(500);
						cout << "...";
					}
					
			   	cout << "\n\t\t\t\t\t\t\t";
			   	system("PAUSE");
			    } 
		    }
		    
		    // GENERATING BILL
		   
			system("cls");
							cout << "\n\t\t\t\t\t\t\t ============================================================"<<endl;
							cout << "\t\t\t\t\t\t\t |               RAJU RESTAURANT MANAGEMENT SYSTEM           |"<<endl;
							cout << "\t\t\t\t\t\t\t ============================================================="<<endl;
							cout << endl;
							cout << endl;
	
							cout << "\t\t\t\t\t\t\t  Bill No : DSA_Project           Order : 2020146"<<endl;
							cout << endl;
							cout << endl;
							cout << "\t\t\t\t\t\t\t  Cashier :  RAJU LALA"<<endl;
							cout << endl;
	                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
	                        write<<"\t\t\t\t\t\t\t ";
	                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
							cout << "\n\t\t\t\t\t\t\t ==========================================================="<<endl;
	
	   
	write.close();
	}
	
	void show1()
	{
		menu1();
	  	menu2();
	}
	  
};
