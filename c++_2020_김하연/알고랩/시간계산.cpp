#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i =0;i<t;i++){
		int n ;
		int TH,TM,TS,D, start,end,total;
		start=0;
		end=0;
		total=0;
		TH=0;
		TM=0;
		TS=0;
		D=0;
		cin >> n;
		for(int j =0; j<n;j++){
			int H,M,S,h,m,s;
			cin >> H >> M >> S >> h >> m >> s;
			start=H*60*60+M*60+S;
			end=h*60*60+m*60+s;
			total=total+end-start;


		}
		if(total>=60){
			TM=total/60;
			TS=total-total/60*60;
		}
		if(TM>=60){
			TH=TH+TM/60;
			TM=TM-TM/60*60;


		}
		if (TH>=24){
			D=TH/24;
			TH=TH-TH/24*24; 
		}

		cout << D <<" "<<TH<<" "<<TM<<" "<<TS<<endl;;

	}
}