#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, s = 0;
    cin>>n;
    int i=-1,t=n;
    while(n){
        n = n / 2; 
        i++;
    };
    while(t){
        s += (t % 2) * pow(2,i);
        t = t / 2;
        i--;
    }
    cout<<s;
     
    return 0;
}