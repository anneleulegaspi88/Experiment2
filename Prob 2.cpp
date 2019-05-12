#include <iostream>
#include <conio.h>


using namespace std;

int main() 
{
	int gallons;
	float past, total;

	cout << "YOUR CURRENT WATER BILL:\n\n";

	cout << "Enter the amount unpaid from the last month: ";
	cin >> past;
	cout << "Enter the amount the total gallons of water used this month: ";
	cin >> gallons;

		if (past<=0 && gallons<=0)
		{
			cout << "You have entered an invalid information!";
		}
	
		else if (past>0)
		{
			cout << "Your total bill is: " << past+35+(gallons*1.10)+20 << " pesos";
		}

		else
		{
			cout << "Your total bill is: " << 35+(gallons*1.10) << " pesos";
		}
	_getch();
	return 0;
}
