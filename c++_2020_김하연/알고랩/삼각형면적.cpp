#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int a,b,x,y,q,w;
		cin >> a>>b>>x>>y>>q>>w;

		int tri=(x-a)*(w-b)-(q-a)*(y-b);
		int result;
		if(tri<0){
			result=-1;
		}
		else if(tri==0){
			result=0;
		}
		else {
			result=1;
		}

		cout << abs(tri) <<" "<<result<<endl;;
	}

}