#include <iostream>
#include <conio.h>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	int x,y,V;
	const double z=2.5;

	cout << "Enter values for x and y: \n";
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	switch (x)
	{
		case 1:
		{
			if (y>1 && y<5)
			cout << fixed << setprecision(2) << "V = " << setw(10) << z*x*y;
			else
			cout << fixed << setprecision(2) << "V = " << setw(10) << (x+y)/z;
		}
		break;

		case 2:
		{
			if (y<=5)
			cout << fixed << setprecision(2) << "V = " << setw(10) << abs((x+y)/z);
			else
			cout << fixed << setprecision(2) << "V = " << setw(10) << x-sqrt(y+z);
		}
		break;
		
		default:
		cout << fixed << setprecision(2) << "V = " << setw(10) << x+y+z;
		break;

	}

	_getch();
	return 0;
}