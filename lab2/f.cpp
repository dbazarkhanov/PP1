#include <iostream>

using namespace std;

int main(){
    int n;
    //n>0;
    int sum=0;
    cin >> n;
    for(int i=1; i<n+1; i++){
        sum=sum+i;
        //cout << sum << endl;
    }
    cout << sum << endl;
    return 0;
}