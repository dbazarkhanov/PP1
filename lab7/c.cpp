#include <iostream>
using namespace std;
string rec(int l, int r, int a[], int x){
    string p="Yes", q="No";
    if(l<=r){
        int m=(l+r)/2;
        if(a[m]==x)
            return p;
        if(a[m]<x)
            return rec(m+1, r, a, x);
        return rec(l, m-1, a, x);
        }
    return q;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int x;
    cin >> x;
    cout << rec(0, n-1, a, x);
}