#include <iostream>
#include <cmath>
using namespace std;
void fact(int n){
    while(n%2 == 0){
        cout << 2 << " ";
        n=n/2;
    }
    for(int i=2; i<sqrt(n); i++){
        while(n%i== 0){
            cout << i << " ";
            n=n/i;
        }
    }
    if(n==1 or n==0)
    cout << n;
}
int main(){
    int n;
    cin >> n;
    fact(n);
    return 0;
}