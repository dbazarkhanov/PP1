#include <iostream>
#include <cmath>
using namespace std;
int arrayd(int d[], int n){
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    for(int i=0; i<n; i++){
        d[i]=abs(a[i]-b[i]);
    }
    
}
int main(){
    int n;
    cin >> n;
    int d[n];
    arrayd(d, n);
    for(int i=0; i<n; i++){
        cout<<d[i]<<" ";
    }
    return 0;
}