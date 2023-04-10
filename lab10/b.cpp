#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int x=0;
long long power(){//toch v toch skopiroval uzhe no sait ne prinimaet
    int y=pow(x, x);
    ++x;
    return y;
}
int main(){
    int n;
    cin >> n;
    vector<long long> v(n+1);
    generate(v.begin(), v.end(), power);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}