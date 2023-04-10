#include <iostream>
#include <cmath>
using namespace std;
int fact(int n){
    int k;
    for(int i = 2; i<=n; i++){
        if(n % i == 0){
            k = i;
        }
    }
    if(n == 1){
        return 1;
    }
    else{
        return (n, fact(n/k));
    }

}
int main(){
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}