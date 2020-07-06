#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a, b, c;
        cin >> a >> b >> c;
        int A[a][b];
        int B[b][c];
        int C[a][c];

        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                cin >> A[i][j];
            }
        }

        for(int i=0; i<b; i++){
            for(int j=0; j<c; j++){
                cin >> B[i][j];
            }
        }

        for(int i=0; i<c; i++){
            for(int j=0; j<a; j++){
                int sum = 0;
                for(int k=0; k<b; k++){
                    sum = sum+ A[j][k]*B[k][i];
                }
                C[j][i] = sum;

            }
        }
        for(int i=0; i<a; i++){
            for(int j=0; j<c; j++){
                
                cout << C[i][j] << " ";

            }
            cout << endl;
        }

    }
}