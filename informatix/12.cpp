#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k; 
    cout << (n-k%n)%n << endl;
    return 0;
}