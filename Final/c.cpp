#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int cnt = 1;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = n - 1; i > 1; i--) {
        if(arr[i] <= arr[i - 1]) cnt++;
    }
    cout << cnt;
    return 0;
}