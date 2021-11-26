#include <iostream>
using namespace std;
int main(){
	//loop for total 
	for (int i=0;i<10;i++){
		if (i==0 || i==9){
			//conditional statments 
			for(int z=0;z<10;z++){
				cout<<"#";
			}
			cout<<endl;//new line 
		}
	
		else{//not true part
		int inner=0;
		while (inner<10){
			if (inner==0 || inner==9){
				cout<<"#";
			}
			else{
				cout<<" ";//spaces to print
			}
			inner++;
		}
		cout<<endl;
	}
	}
	return 0;
}
