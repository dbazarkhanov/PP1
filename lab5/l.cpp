#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    char cur=s[0];
    for(int i=0; i<s.size(); i++){
            if(s[i] == cur)
                continue;
            if(s[i] > cur){
                cur=s[i];
            } else{
                cout << "NO" << endl;
                exit(0);
            }
        }
    cout << "YES" << endl;
    return 0;
}