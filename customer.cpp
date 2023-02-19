#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<windows.h>

#include "manager.cpp"

using namespace std;



class Customer :  public Manager
{
	public:
		string queue[100];
		int n = 100;
		int rear = -1;
		int front = -1;

	public:

		// ENQUEUE THE QUEUE
		void enqueue()
		{
		   string c;
		   if (rear == n - 1)
		   cout << " Alot of Person in waiting Area : " << endl;
		   else {
			  if (front == - 1)
			  front = 0;
			  cout << " NAME OF PERSON SENT FOR WAITING : " << endl;
			  cin >> c;
			  rear++ ;
			  queue[rear] = c;
		   }
		}

		//DEQUEUE THE QUEUE
		void dequeue()
		{
		   if (front == - 1 || front > rear)
		   {
			  cout << " No Person is in waiting area :  " << endl;
			  return ;
		   }
		   else
		   {
			  cout << " NAME OF THE PERSON WHO'S TO GIVEN FOOD FIRST  : " << queue[front] << endl;
			  front++;
		   }
		}
		//DISPLAYING ELEMENTS
		void Display()
		{
		   if (front == - 1)
		   {
			   cout << " QUEUE IS EMPTY" << endl;

		   }
		   else
		   {
				cout << " WAITING PERSON REMAINING : " << endl;
				for (int i = front; i <= rear; i++)
				cout << queue[i] << "\n";
				cout << endl;
		   }
		   
		}
		
		void disp()
		{
			int ch;
			cout << " 1) NAME OF PERSON SENT FOR WAITING : " << endl;
			cout << " 2) NAME OF THE PERSON WHO'S TO GIVEN FOOD FIRST :" << endl;
			cout << " 3) WAITING PERSON REMAINING  : " << endl;
			cout << " 4) EXIT : " << endl;
			do 
			{
			      cout << " ENTER YOUR CHOICE : " << endl;
			      cin >> ch;
			      system("cls");
			      switch (ch)
			    {
			        case 1: enqueue();
			        	break;
		
			        case 2: dequeue();
			        	break;
			        
			        case 3: Display();
			        	break;
			        
			        case 4: cout << " EXIT : " << endl;
			        	break;
			        exit(0);
			        default: cout << " INVALID CHOICE : " << endl;
			    }
		
			} while(ch!=4);
		
			getch();
		}
		
};




