#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;

	for(int i = 0; i <t;i++){
		int num;
		cin >> num;
		int mid = num/2;
		char arr[num][num];
		
		for(int j = 0; j<num; j++){
			if (j==mid){
				for(int n=0;n<num;n++){
					if (n==mid)
						arr[j][n]='O';
					else {arr[j][n]='+';}
				}
			}
			else {
				for(int i=0;i<num;i++){
					if(i==mid){
						arr[j][i]='I';
					}
					
					else{
						if(i== j+num-1-2*j){
							arr[j][i]='*';
						}
						else{
							arr[j][i]='.';
						}
					}
				}
			}
		}for(int m=0;m<num;m++){
				for(int u=0;u<num;u++){
					cout << arr[m][u];
				}
				cout << "\n";
			}
	}
}