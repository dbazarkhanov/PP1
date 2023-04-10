#include <iostream>
using namespace std;
string even(){
    int n;
    cin >> n;
    int cnt=0;
    string p="Valid", q="Not valid";
    cnt=n%10;
    if(n>9){
        n=n/10;
        if(cnt%2==1 || n%2==1)
            return q;
        else 
            return p;
    }
    if(n<10)
        if(n%2==0)
            return p;
        else
            return q;
}
int main(){
    cout << even();
}