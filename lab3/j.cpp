#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    int k;
    for(int i=1; i<=n; i++){
        if(a[i]<=m){
            k=i;
        }
    } 
    cout << k << endl;
    return 0;
}