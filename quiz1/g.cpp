#include <iostream>

using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    if(a<b or n==a){
        cout << n/a <<endl;
    } else if(a==b){
        cout << "NO" << endl;
    } else if(a-1==b){
        cout << n-b << endl;
    } else{
        cout << n/(a-b) << endl;
    }
    return 0;
}