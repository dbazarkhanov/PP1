#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<string> v;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string x;
        cin >> x;
        v.push_back(x);
    } 
    cout<<"-----------------";
    vector<string> res;
    res.push_back(v[0]);
    for(int i=1; i<v.size(); i++){
        for(int j = 0; j <res.size(); j++){
            if(res[j]==v[i]){
                cout<<res[j]<<" ";   
                cout<<v[i]<<endl;
            }
            else{
                res.push_back(v[i]);
            }
        }
    }
    return 0;
}