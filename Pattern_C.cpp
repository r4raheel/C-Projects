#include <iostream>
using namespace std;
int main(){
	int spaces=0;
	int spaces1=7;
	for(int i=0;i<10;i++){
		if (i==0 || i==9){
			int z=0;
			while (z<10){
				cout<<"#";
				z++;
			}
			cout<<endl;
		}
		else{
			cout<<"#";
			for (int yeezy=0;yeezy<spaces;yeezy++){
				cout<<" ";
			}
			cout<<"#";
			for  (int yayeezy=spaces1;yayeezy>0;yayeezy--){
				cout<<" ";
			}
			spaces1--;
			cout<<"#";
			
		
			spaces++;
			cout<<endl;
		}
	}
	return 0;
}
