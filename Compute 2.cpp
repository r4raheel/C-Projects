#include <iostream>
#include <cmath>//math library for calculations;
using namespace std;
int main(){
	//integral 2 under root x
	//lower and upper limits are 0 and 1respectively;
	float lower=0;
	float upper=1;
	float x_upper=upper;
	float x_lower=lower;
	float cal=0;
	cal=pow(x_upper,3/2)-pow(x_lower,3/2);// calculation of integration using power function

	float division=4.0/3.0;

	float integral=division*cal;
	cout<<"The integration of the integral is:"<<integral<<" + C";
	cout<<"\n4/3 + C";//in nemrator and denominator foam;
	return 0;
}
