#include <iostream>
using namespace std;
int main(){
    int n, m, min, x, y, sum=0;
    cin >> n >> m;
    int arr[n][m];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin >> arr[i][j];
    cout << "coordinates of min elements:" << endl; 
    for(int j=1; j<=m; j++){
        min=arr[1][j];
        x=1;
        y=j;
        for(int i=1; i<=n; i++){
            if(arr[i][j]<min){
                min=arr[i][j];
                x=i;
                y=j;
            }
        }
        sum += min;
        cout << x << ";" << y << endl;
    }
    cout << "Their sum:" << endl;
    cout << sum << endl;
    return 0;
}