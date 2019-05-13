#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

	int n, m, sum = 0;

	cout << "Enter a number: ";
	cin >> n;

	while (n > 0)
	{
			for (int i = 1; i <= n; i++)
			{
				sum = (n*(n + 1)) / 2;
			}
		cout << "The sum of all whole numbers from 1 to " << n << " is " << sum << endl;
		cout << "Enter a number: ";
		cin >> n;
	}
	
	cout << "Thank you!";

	_getch();
	return 0;
}