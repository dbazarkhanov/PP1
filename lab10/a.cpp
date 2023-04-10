#include <iostream>
#include <algorithm>
using namespace std;
bool comp(string s1, string s2){
    for(int i=0; i<s1.size(); i++){
        if(i==s2.size() or s1[i]>s2[i]) return 0;
        if(s1[i]<s2[i]) return 1;
    }
}
int main(){
    int n;
    cin >> n;
    string name[n];
    int mark[n];
    for(int i=0; i<n; i++){
        cin >> name[i];
        cin >> mark[i];
    }
    sort(name, name+n, comp);
    sort(mark, mark+n);
    for(int i=0; i<n; i++){
        cout << name[i] << " " << mark[i] << endl;
    }
    
    return 0;
}