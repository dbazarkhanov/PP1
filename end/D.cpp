#include <iostream>
#include <algorithm>
using namespace std;
string s;
string t;
int main() {
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++) {
        if (s.substr(i, t.size()) == t) {
            cout << i << ' ';
        }
    }
    return 0;
}