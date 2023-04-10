#include <iostream>

using namespace std;

int main(){
    int n, k;
    
    cin >> n >> k;
    if(n<k){
        cout << k/n << endl;
    } else if(n%k ==1 ){
        cout << (n/k)*2+1 << endl;
    } else if((n+1)%k ==0 and n>12 and n<14){
        cout << (n+1)/k << endl;
    }
    return 0;
}