#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int cnt[10];
    string s;
    for(int i=0; i<10; i++){
        cnt[i] = 0;
    }
    cin >> s;
    for(int i=0; i<s.size(); i++){
        cnt[s[i]-'0']++;
    }
    int a=0, b=1000000;
    for(int i=0; i<9; i++){
        if(cnt[i] == 0)
            continue;
        if(cnt[i] > a)
            a = cnt[i];
        if(cnt[i] < b)
            b = cnt[i];
    }
    if(a == b) 
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}