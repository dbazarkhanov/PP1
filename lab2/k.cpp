#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int a=1; a<n; ++a){    
        if(a*a<=n){
            cout << a*a << endl;
        }
    }
    
    return 0;
}