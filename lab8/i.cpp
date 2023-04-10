#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int a;
    cin >> a;
    if(find(v.begin(), v.end(), a) !=v.end())
        cout << "Yes";
    else 
        cout << "No";
    return 0;
}