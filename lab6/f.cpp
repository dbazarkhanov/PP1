#include <iostream>
using namespace std;
string str(){
    string s[100000];//che to ne to
    string p="YES", q="NO";
    int n, k;
    cin >> s[100000];
    cin >> n;
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])); 
            k++;
    }
    cout << k;
    if(k<=n)
        return p;
    else
        return q;
}
int main(){
    cout << str();
}