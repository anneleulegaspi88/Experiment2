#include <iostream>
#include <conio.h>
 
using namespace std;

int main()
{
   int a=0, b=1, c;
   for (int counter=0;counter<20;counter++)
   {
	   if (counter==0)
	   {
		    cout << "Fibonacci numbers: \n";
			cout << a << "," << b << ",";
	   }
	   else 
	   {
			c = a + b;
			a = b;
			b = c;
			cout << c << ",";
	   }
   }
	for (int counter=10946;counter<=10946;counter++)
	  {
		 cout << counter << " ";
	  }
   

    _getch();
	return 0;
}