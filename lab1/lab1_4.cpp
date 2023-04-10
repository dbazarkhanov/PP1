#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a;
    cin >> a;
    cout << sqrt(a) << endl; // чтобы знать до скольких цифр после точки было printf(%.цифраf, sqrt(a));
    printf(%.10f, sqrt(a));
    return 0;
}