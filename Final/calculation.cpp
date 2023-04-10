#include <iostream>
using namespace std;
int main(){
    double x = 364.45;
    int n, a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        cout << a - x << endl;
    }
    return 0;
}