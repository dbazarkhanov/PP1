#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    set<int> s;
    vector <int> v;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        s.insert(x);
        v.push_back(x);
    }
    if(s.size() == v.size()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}