#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size()/2; i++){
        if(s[i] != s[s.size()-i-1]){
            cout << "NO" << endl;
            exit(0);
            }
        }
    cout << "YES" << endl;
    return 0;
}