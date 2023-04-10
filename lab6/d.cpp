#include <iostream>
using namespace std;
string sameid(){
    int n, x;
    cin >> n;
    string p="YES", q="NO";
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    cin >> x;
    for(int i=0; i<n; i++){
        if(x==a[i])
            return p;
        else
            return q;
    }
}
int main(){
    cout << sameid();
}