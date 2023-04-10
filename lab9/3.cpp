#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    int cnt=0;
    cin >> n;
    map<int, int> m;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        m[x]++;
    }
    map<int, int> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++)
       if(it->second>1) cnt++;
    cout << cnt;
    return 0;
}