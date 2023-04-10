#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    cout << (a%99-a/100)/(a%100-a/100) << endl;
    //cout << (a/100)/(a%100) << endl;
    return 0;
}