#include <iostream>
#include <algorithm>
#include <vector>
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
    vector<int> k;
    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        int y;
        cin >> y;
        
    }
    for(int i=0; i<m; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            if(k[i]==v[j])
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}   