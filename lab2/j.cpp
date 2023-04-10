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
        if(arr[i]>9 and arr[i]/10%10==0 or arr[i]%10==0){
            if(arr[i]%100==0){
                ++a;
                a=a;
            }
            if(arr[i]%1000==0 or arr[i]/10000!=0){
                ++a;
                a=a;
            }
            ++a;
            a=a;
        }
    } 
    cout << a << endl;
    return 0;
}