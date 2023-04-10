#include <iostream>
using namespace std;
int rec(int n){
    if(n==0)
        return 0;
    rec(n/2);
    cout << n%2;
}
int main(){
    int n;
    cin >> n;
    rec(n);
}