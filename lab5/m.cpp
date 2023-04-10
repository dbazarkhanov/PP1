#include <iostream>
using namespace std;
int main(){
    string s;
    char x;
    int n, cnt=0;
    cin >> s >> x >> n;
    for(int i=0; i<s.sizq(); i++){
        if(s[i] == x)
            cnt++;
    }
    if(cnt == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}