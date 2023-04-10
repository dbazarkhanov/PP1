#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    vector<pair<string, string>> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        pair<basic_string<char>, basic_string<char>> s;
        v.push_back(s);
    }
    vector<pair<string, string>> :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        if(it->second == it->first) it->second = it->first;
        cout << it->first << it->second;
    }
}