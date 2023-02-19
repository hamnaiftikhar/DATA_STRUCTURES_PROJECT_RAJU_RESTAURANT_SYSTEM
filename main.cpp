#include<iostream>
#include<string.h>
#include<conio.h>
#include "customer.cpp"
#include "delievery.cpp"

using namespace std;

int main()
{   
	Customer E;
	E.total();
	E.disp();
	tree* t = new tree();
	
	int ch;
				
			cout << " SELECT THE PLACE YOU WANT YOUR FOOD TO BE DELIEVERED, ALSO THE DELIVERY CHARGES ARE DIFFERENT FOR DIFFERNT LOCATIONS! : " << endl;
			cout << " 1) RAJU RESTAURANT TO GIRLS HOSTEL, DELIVERY CHARGES (Rs.40): " << endl;
			cout << " 2) RAJU RESTAURANT TO C-TYPE HOSTEL, DELIVERY CHARGES (Rs.45): " << endl;
			cout << " 3) RAJU RESTAURANT TO FACULTY AREA, DELIVERY CHARGES (Rs.55): " << endl;
			cout << " 4) RAJU RESTAURANT TO BOYS HOSTEL HOSTEL, DELIVERY CHARGES (Rs.60) :" << endl;
			
			cout << " 5) EXIT : " << endl;
			do 
			{
			      cout << " ENTER YOUR CHOICE : " << endl;
			      cin >> ch;
			      system("cls");
			      switch (ch)
			    {
			        case 1: t->insert_node(9, "--> RAJU-->", "GIRLS HOSTEL") ;
			        	cout << "DISTANCE" << "->" << "SOURCE" << "->" << "DESTINATION"<< endl;
						cout << "\n-------------------------------------------------------------\n" << endl;
			        	t->pre_order(t->root);
			        	cout << "Thanks for Your order..." << endl;
			        	break;
		
			        case 2: t->insert_node(18, "--> RAJU-->" , "RESIDENTIAL AREA");
			        	cout << "DISTANCE" << "->" << "SOURCE" << "->" << "DESTINATION"<< endl;
						cout << "\n-------------------------------------------------------------\n" << endl;
			        	t->pre_order(t->root);
			        	cout << "Thanks for Your order..." << endl;
			        	break;
			        
			        case 3: t->insert_node(12, "--> RAJU-->", "BOYS HOSTEL");
			        	cout << "DISTANCE" << "->" << "SOURCE" << "->" << "DESTINATION"<< endl;
						cout << "\n-------------------------------------------------------------\n" << endl;
			        	t->pre_order(t->root);
			        	cout << "Thanks for Your order..." << endl;
			        	break;
			        
			        case 4: t->insert_node(12, "--> RAJU-->", "FACULTY AREA");
			        	cout << "DISTANCE" << "->" << "SOURCE" << "->" << "DESTINATION"<< endl;
						cout << "\n-------------------------------------------------------------\n" << endl;
			        	t->pre_order(t->root);
			        	cout << "Thanks for Your order..." << endl;
			        	break;
			        
			        case 5: cout << " EXIT : " << endl;
			        	break;
			        exit(0);
			        default: cout << " INVALID CHOICE : " << endl;
			    }
		
			} while(ch!=5);
	
	
	return 0;
}


