#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n, a, b;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin >> a >> b;
    reverse(v.begin()+a, v.begin()+b+1);
    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    return 0;
}