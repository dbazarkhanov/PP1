#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int capital, small=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z')
            small++;
        else
            capital++;
    }
    cout << small << " " << capital << endl;
    return 0;
}