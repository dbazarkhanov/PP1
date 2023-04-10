#include <iostream>
using namespace std;
int main(){
    string s, t, chip;
    cin >> s >> t;
    for(int i = 0; ; i++){
        if(t.size() == i) i = 0;
        if(s.size() == t.size()) break;
        t.push_back(t[i]);
    }
    for(int i = 0; i < s.size(); i++){
        char c = (s[i] + t[i] - 194) % 26;
        c += 'a';
        chip.push_back(c);
    }
    cout << chip;
    return 0;
}