#include<iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    if(n<=k){
        cout << 2 << endl;
    }else if((2*n)%k ==0){
        cout << (2*n)/k << endl;
        } else{
            cout << (((2*n)/k)+1) << endl;
            }
    return 0;
    }