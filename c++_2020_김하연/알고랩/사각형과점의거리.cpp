#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int a,b,c,d,x,y;
		cin >>a>>b>>c>>d;
		cin >> x>>y;
		int A,B;

		if(x>=a && x<=c && y>=b && y<=d){
			cout << "0 0"<<endl;
		}
		else{
			if(x>=a && x<=c){
				A=x;
			}
			else{
				if(abs(x-a)<=abs(x-c)){
					A=a;
				}
				else{
					A=c;
				}
			}
			if(y>=b && y<=d){
				B=y;
			}
			else{
				if(abs(y-b)<=abs(y-d)){
					B=b;
				}
				else{
					B=d;
				}
			}
				int l=(A-x)*(A-x)+(B-y)*(B-y);
				int r=abs(A-x)+abs(B-y);
				cout<<l<<" "<<r<<endl;
			

		}

	}
	return 0;
	
}