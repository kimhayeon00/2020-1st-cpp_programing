#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int q,w,e,r,x,y;
		cin >> q>>w>>e>>r>>x>>y;
		int a=(q-e)*(q-e)+(w-r)*(w-r);
		int b=(e-x)*(e-x)+(r-y)*(r-y);
		int c=(q-x)*(q-x)+(w-y)*(w-y);
		int arr[3]={a,b,c};
		sort(arr,arr+3);
		a=arr[0];
		b=arr[1];
		c=arr[2];
		int result;

		if(sqrt(a)+sqrt(b)<=sqrt(c)){
			result=0;
		}
		else if(a+b==c){
			result=1;
		}
		else if(a+b<c){
			result=2;
		}
		else {
			result=3;
		}
		
		
		cout << result <<endl;
	}
	return 0;
}