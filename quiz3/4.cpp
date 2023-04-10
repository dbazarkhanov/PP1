#include <iostream>
#include <map>
#include <string>
using namespace std;
char chess(){
    }
int main(){
    int arr[8][8];
    int n;
    cin>>n;
    string arr1[8][8] = {{"A1", }};
    for(int i =0; i<n; i++){
        string k;
        cin>>k;
        for(int j = 0; j<2;j++){
            cout<<k.substr(j, 1)<<endl;
        }
    }
    
}