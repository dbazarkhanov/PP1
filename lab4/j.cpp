#include <iostream>
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> m;
    int arr[n][m];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin >> arr[i][j];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            k=i+j;
            if(k%2==0){
                arr[i][j]=arr[i][j]+1;
            } else{
                arr[i][j]=arr[i][j]-1;
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}