#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<n*2-1; i++){
        for(int j=i; j>=0; j--){
            if(i-j<n && n-1-j<n && i-j>-1 && n-1-j>-1){
            cout<<arr[i-j][n-1-j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}