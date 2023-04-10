#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt=0;
    pair<int, int> p[n];
    for(int i=0; i<n; i++)
        cin >> p[i].first >> p[i].second;
    cout << 0 << endl;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if (p[i].first == p[j].first && p[i].second == p[j].second) {
                cnt++;
                cout << cnt << endl;
                break;
            } else if (p[i].first == p[j].second && p[i].second == p[j].first) {
                cnt++;
                cout << cnt << endl;
                break;
            }
            else {
                if (cnt == 0) {
                    cout << cnt << endl;
                    break;
                } else if (cnt > 0) {
                    cnt = 0;
                    break;
                }
            }
        }
    }
    cout << 0 << endl;
    return 0;
}