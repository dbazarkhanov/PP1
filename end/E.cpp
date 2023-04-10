#include <iostream>
using namespace std;
int n;
int main() {
    cin >> n;
    n++;
    while (n < 10000) {
        int n1 = n / 1000;
        int n2 = n / 100 % 10;
        int n3 = n / 10 % 10;
        int n4 = n % 10;
        if (n1 != n2 && n1 != n3 && n1 != n4 && n2 != n3 && n2 != n4 && n3 != n4) {
            cout << n;
            break;
        }
        n++;
    }
    return 0;
}