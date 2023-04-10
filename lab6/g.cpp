#include <iostream>
using namespace std;
string vwl(){
    string s;
    getline(cin, s);
    char vowel[]="aeiou";
    for(int i=0; i<s.size(); i++){
        for(int k=0; k<sizeof(vowel); k++){
            if(s[i]==vowel[k])
                s.erase(s.begin()+i);
        }
    }
    return s;
}
int main(){
    cout << vwl();
}