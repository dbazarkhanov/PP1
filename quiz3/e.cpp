#include <iostream>
#include <cmath>
using namespace std;
int fact(int n){
    if(n == 1) return 1;
    
    int cnt = 0;
    for(int i=1; i<n; i++){
        if(n%i == 0){
            cnt++;
        }
    }
    for(int i=2; i<=n; i++){
        if(n%i == 0){
            n = n / i;
            break;
        }
    }
    return cnt + fact(n);  
}
int main(){
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}