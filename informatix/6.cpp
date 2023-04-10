#include <iostream>

using namespace std;

int main(){
    int n; //proverit`!! zadanie L.
    cin >> n;
    n = n%(24*3600);
    cout << n/3600 << ":" << (n%3600)/60/10 << (n%3600)/60%10 << ":" << n%60/10 << n%60%10 << endl;
    return 0;
}
