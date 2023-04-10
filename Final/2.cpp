#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 100; i < 1000; i++){
        int sum;
        sum = i/100 + i/10%10 + i%10;
        if(sum == n){
            cout << i << endl;
        }
    }
    return 0;
}
