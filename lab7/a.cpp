#include <iostream>
using namespace std;
int rec(int n, int cnt){
    if(n==0)
        return cnt;
    cnt *= 2;
    rec(n-1, cnt);
}
int main(){
    int n;
    cin >> n;
    int cnt=1;
    cout << rec(n, cnt);
}