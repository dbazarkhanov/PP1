#include <iostream>

using namespace std;

int main(){
    int n, m, k;
    cin >> n;
    int a[n], b[m], c[k];
    for(int i=1; i<=n; ++i){
        cin >> a[i];
    }
    cin >> m;
    for(int i=1; i<=m; ++i){
            cin >> b[i];
    }
    int p=1, q=1;
    a[n+1]=100000001;
    b[m+1]=100000001;
    for(int i=1; i<=n+m; ++i){
        if (a[p]>=b[q]){
            c[i]=b[q];
            ++q;
        }else{
            c[i]=a[p];
            ++p;
            }
    }
    for(int i=1; i<=n+m; ++i){
        cout << c[i] << " ";
    }
    return 0;
}