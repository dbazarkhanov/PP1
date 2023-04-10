#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int prime(int n){
    int k=0;
    while(n!=0){
        int c=0;
        k += 1;
        for(int i=1; i<k; i++){
            if(k%i == 0 and i!=1){
                c++;
            }
        }
        if(c==0 and k!=1){
            n--;
        }
    }
    return k;
}
int main(){
    int n;
    cin >> n;
    cout << prime(n);
    return 0;
}