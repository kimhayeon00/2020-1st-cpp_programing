#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    for(int i=0;i<t;i++){
        int h,l;
        int s=0;
        cin >>h >>l;
        
        for(int j=h;j<l+1;j++){
           
            s+=j;
        }
        cout << s << endl;
        
    }
    
    

return 0;
}