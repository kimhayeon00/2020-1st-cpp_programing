#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int n;
		cin >> n;
		int total =1;

		for(int j=0; j<n;j++){
			int a;
			cin >> a;
			a=a%10;
			total=total*a;
			total= total%10;
		
		}
		

		cout << total%10 << endl;

		}
		return 0;
	}

	
