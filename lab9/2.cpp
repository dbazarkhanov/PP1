#include <iostream>
#include <algorithm>
using namespace std;
bool comp(int a, int b){
    if(a%2==0 && b%2==1) return true;
    if(a%2==1 && b%2==0) return false;
    if(a%2==0 && b%2==0) return a>b;
    if(a%2==1 && b%2==1) return a<b;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n, comp);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}