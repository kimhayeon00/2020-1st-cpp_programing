#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int a,b,c;
		cin >> a>>b>>c;
		if(a+b<=c){
			cout <<"0"<<endl;
		}
		else if(a==b && a==c){
			cout <<"1" <<endl;
		}
		else if(a*a+b*b==c*c){
			cout <<"2"<<endl;
		}
		else if(a==b ||a==c ||b==c){
			cout <<"3"<<endl;
		}
		else{
			cout <<"4"<<endl;
		}
	}
	
}