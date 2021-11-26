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
