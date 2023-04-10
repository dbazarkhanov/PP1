#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    if(a/1000==a%1000){
    cout << "YES" << endl;
    } else{
    cout << "NO" << endl;
    }return 0;
}