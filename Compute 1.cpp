#include <iostream>
using namespace std;
int main(){
	//integration required for integrals
	//lower limit is zero and upper limit is 1
	 int lower_limit=0;
	 int upper_limit=1;
	//variable used in integral is x
	//3x^2.dx is the integral
	//so integration is 3(x^3)/3 + C
	//remaing x^3
	
	int x_upper=upper_limit*upper_limit*upper_limit;///puuting values of upper;
	int x_lower=lower_limit*lower_limit*lower_limit;
	int integration=x_upper-x_lower;
	cout<<"The answer after calculating integration is:"<<integration<<" + C "<<endl;
	return 0;
}
