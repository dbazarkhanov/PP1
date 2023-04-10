#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int row[n], column[m];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin >> arr[i][j];
    for(int i=1; i<=n; i++){
        row[i]=0;
        for(int j=1; j<=m; j++){
            row[i] += arr[i][j];
        }
    }
    for(int j=1; j<=m; j++){
        column[j]=0;
        for(int i=1; i<=n; i++){
            column[j] += arr[i][j];
        }
    }
    for(int i=1; i<=n; i++)
        cout << "The sum of row number " << i << " is " << row[i] << endl;
    for(int j=1; j<=m; j++)
        cout << "The sum of column number " << j << " is " << column[j] << endl;
    return 0;
}