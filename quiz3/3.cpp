#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    vector<string> v;
    for(int i=0; i<n; i++){
        string x; 
        cin >> x;
        v.push_back(x);
    }
    cin >> m;
    vector<string> k;
    vector<string> r;
    for(int i=0; i<m; i++){
        string y; 
        cin >> y;
        int cnt = 0;
        k.push_back(y);
        for(int j = 0; j<v.size();j++){
            if(y==v[j]){cnt++;}
        }
        if(cnt == 0){r.push_back(y);}
    }
    cout<<"Missed students:"<<endl;
    for(int i =0; i<v.size();i++){
        int cnt = 0;
        for(int j =0; j<k.size();j++){
            if(v[i]==k[j])cnt++;
        }
        if(cnt==0){
            cout<<"- "<<v[i]<<endl;
        }
    }
    cout<<"Not in the group:"<<endl;
    for(int i =0; i<r.size();i++){
        cout<<"- "<<r[i]<<endl;
    }
    
}