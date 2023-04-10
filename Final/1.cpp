#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char arr[n][n];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            arr[i][j] = '41';
    }
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << arr[i][j];
        cout << endl;
    }
    return 0;
}
