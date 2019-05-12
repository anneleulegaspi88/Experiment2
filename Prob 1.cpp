#include <iostream>
#include <conio.h>


using namespace std;

int main() 
{
	char package;
	int time1, time2;
	
	cout << "Enter your chosen package: ";
	cin >> package;

		if (package=='A'|| package=='a') 
		{
			cout << "Enter your number of hours: ";
			cin >> time1;

			if (time1<=10)
				cout << "Your total amount for the month is 995 pesos";
			else 
				cout << "Your total amount is: " << 995+((time1-10)*20) << " pesos";
		}
		
		else if (package=='B'|| package=='b')
		{
			cout << "Enter your number of hours: ";
			cin >> time2;

			if (time2<=20)
				cout << "Your total amount for the month is 1495 pesos";
			else 
				cout << "Your total amount is: " << 1495+((time2-20)*10) << " pesos";
		}
		
		else if (package=='C'|| package=='c')
			cout << "Your total amount for the month is 1995 pesos.";
		
		else
			cout << "You have enetered an invalid choice!";
	
	_getch();
	return 0;

}
