#include <iostream>
#include <cmath>
using namespace std;
int Fib(long int i, long int k){
    if(i < 1) return 0;
    if(i == 1) return 1;
    return Fib(i-2, k) + k*Fib(i - 1, k);
}

int main(){
    long int n, k;
    cin>>k>>n;
    cout << abs(Fib(n-1, k)) % 10 << endl;
    return 0;
}   