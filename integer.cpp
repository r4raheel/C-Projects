// Write a program that reads an integer from the command line and checks if it is greater than or
equal to 0 and smaller than or equal to 100. 


#include <iostream>
using namespace std;
int main()
{
	int integer; //integer input
	cout << "Enter integer between 0 and 100:";
	cin >> integer;
	if (integer >= 0 && integer <= 100)
	{ //checking input condions for in range or not
		cout << "The integer is between the range:(0-100):";
	}
	else
	{
		cout << "The integer is not between the range(0-100):";
	}
	return 0;
}
