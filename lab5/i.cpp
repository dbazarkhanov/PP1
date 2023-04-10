#include <iostream>
using namespace std;
string s, t;
int cnt[1000], cnt1[1000];
int main(){
    cin >> s >> t;
    for(int i=0; i<s.size(); i++){
        cnt[s[i]-'a']++;
    }
    for(int i=0; i<t.size(); i++){
        cnt1[t[i]-'a']++;
    }
    for(char i='a'; i<='z'; i++){
        if(cnt[i-'a'] != cnt1[i-'a']){
            cout << "NO" << endl;
            exit(0);
        }
    }
    cout << "YES" << endl;
    return 0;
}