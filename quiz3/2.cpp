#include <iostream>
using namespace std;
char rec(string* s[], char c){
    for(int i='A'; i<='Z'; i++){
    if(s[i]==c[i+32])
        return c;
    else
        rec(s[i+1], c)
}}
int main(){
    string s;
    getline(cin, s);
    char c;
    for(int i=0; i<s.size(); i++){
    rec(s[i], c);
    cout << rec(s[i], c);
    }
}