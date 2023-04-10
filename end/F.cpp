#include <iostream>
using namespace std;
int main() {
    string s, ls;
    int n = 0;
    while (cin >> s) {
        // ( s == "0") break;
        if (n < s.size()) {
            n = s.size();
            ls = s;
        }
    }
    cout << ls;
    return 0;
}