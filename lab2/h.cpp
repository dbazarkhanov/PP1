#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int a=0;
    int b=0;
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    } for(int i=0; i<n; ++i){
        if(arr[i]%2==0){
            ++a;
            a=a;
        } else if(arr[i]%2!=0){
            ++b;
            b=b;
        }
    } 
    cout << a << " " << b << endl;
    return 0;
}