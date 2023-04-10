#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n=26;
    char c[n];
    for(int i='a'; i<'z'; i++){
        s=c['z'-n+i];
    }
    cout << s;
    return 0;
}