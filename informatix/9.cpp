#include <iostream>

using namespace std;

int main(){
    int a, b, n; //a rubly, b kopeiky, n bulky
    cin >> a >> b >> n;
    cout << a*n+(b*n/100) << " " << b*n%100 << endl;
    return 0;
}