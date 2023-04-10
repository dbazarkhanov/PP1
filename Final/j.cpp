#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    string s[n];
    string h;
    map<string, string> mp;
    int cnt = 0;
    for(int i = 0; i < n; i++) cin >> s[i];
    cin >> m;
    for(int i = 0; i < m; i++) {
        string p, in;
        cin >> p >> in;
        mp[p] += in;
    }
    cin >> h;
    map<string, string> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        if(h == it->first || h== it->second) cnt++;
    }
    cout << cnt << endl;
    if(h == it->first) cout << it->second;
    if(h == it->second) cout << it->first;
    return 0;
}