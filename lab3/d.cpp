#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=1; i<=n; ++i){
        cin >> a[i];
        }
    int j=-100000001;
    int k=0;
    for(int i=1; i<=n; ++i){
        if(a[i]>j){
            j=a[i];
            k=i;
        }
    }
    cout << k << endl;
    return 0;
}