#include <iostream>
using namespace std;
int reverse (int k){
    int rev = 0;
    int t;
    while (k) {
        t = k % 10;
        k /= 10;
        rev *= 10;
        rev += t;
    }
    return rev;
}

int main (){
    int n, sum;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        long int a, b;
        cin >> a >> b;
        a = reverse(a);
        b = reverse(b);
        sum = reverse(a + b);
        arr[i] = sum;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}