#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m;
    vector<int> v;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] >= 0) sum++;
        }
        v.push_back(sum);
        sum = 0;
    }
    for(int i = 0; i < v.size(); i++){
        for(int j = 1; j < v.size(); j++){
            if(v[i] > v[j]) {
                cout << i + 1;
                return 0;
            }
            else if(v[i] == v[j] && v[i] == v[j + 1]) {
                cout << "Numbers are equal";
                return 0;
            }
        }
    }
}
