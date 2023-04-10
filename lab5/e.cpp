#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int sumodd, sumeven=0;
    for(int i=0; i<s.size(); i++){
        if(i%2 == 0)
            sumeven += s[i]-48;
        else
            sumodd += s[i]-48;
    }
    if(sumodd == sumeven)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    return 0;
}