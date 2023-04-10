#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s, t;
    int moves = 0;
    cin >> s >> t;
    bool flag = true;
    int i = 0;
    while (flag){
        if(s == t.substr(i, t.size() - i) + t.substr(0, i)){
            flag = false;
        }
        if(s == t){
            flag = false;
        }
        if(moves >= s.size()){
            cout<< "Understandable have a nice day";
            break;
        }
        i++;
        moves += 1;
    }
    if(flag  == false) cout << moves - 1;
    return 0;
}