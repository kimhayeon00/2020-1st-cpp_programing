#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int row, col;
        cin >> row >> col;

        int matrixA[row][col];
        int matrixB[row][col];
        int matrixC[row][col];


        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cin >> matrixA[i][j];
            }
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cin >> matrixB[i][j];
            }
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                matrixC[i][j]= matrixA[i][j]+ matrixB[i][j];
            }
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cout << matrixC[i][j]<< " ";
            }
            cout <<endl;
        }



    }

}