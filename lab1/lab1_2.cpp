#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    cout << n+(m % 10 + m / 100) << endl;
    return 0;
}