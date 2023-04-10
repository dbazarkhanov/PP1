#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double hypotenuse(){
    int a, b;
    double c=0;
    cin >> a >> b;
    c=sqrt(a*a+b*b);
    return c;
}
int main(){
    cout << setprecision(4) << hypotenuse();
}