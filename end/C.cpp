#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    cout << "The anagram variants for string ";
    cout << s << " are:" << endl;
    sort(s.begin(), s.end());
    cout << s << endl;
    while (next_permutation(s.begin(), s.end())) {
        cout << s << endl;
    }
    return 0;
}