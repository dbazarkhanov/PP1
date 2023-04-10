#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int c = 0, d = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            c += a;
        }
        else {
            d += a;
        }
    }
    cout << min(c, d);
    return 0;
}