#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            arr[i][j] = '.';
    }
    int cnt = 49;
    for(int i = 0; i < n; i++){
        arr[i][n - 1 - i] = cnt;
        cnt++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << arr[i][j];
        cout << endl;
    }
    return 0;
}
