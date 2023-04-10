#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int a=0;
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    } for(int i=0; i<n; ++i){
        if(arr[i]%10==7){
            ++a;
            a=a;
        }
    } 
    cout << a << endl;
    return 0;
}