#include <iostream>
using namespace std;
int main(){
	//nested loops
	int total=0;
	for (int i=1;i<=10;i++){
		int inner_total=0;
		for (int j=1;j<=10;j++){
			inner_total+=j;//j calculations on every i
		}
		total+=inner_total;
		//adding to total;after j summation
		
	}
	cout<<"Total summation of i and j is:"<<total<<endl;//total summation
	return 0;
}
