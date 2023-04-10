#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> m;
    int arr[n][m];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin >> arr[i][j];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++){
            k=sqrt(arr[i][j]);
            if(k*k == arr[i][j]){
                arr[i][j]=k;
            }
        }
     for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
     }
    return 0;
}