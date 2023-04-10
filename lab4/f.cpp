#include <iostream>
using namespace std;
int main(){
    int n, row, col, max = -100001;
    cin >> n;
    int arr[n][n];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin >> arr[i][j];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(arr[i][j]>max){
                max = arr[i][j];
                row = i;
                col = j;
            }
    cout << row << " " << col;
    return 0;
}