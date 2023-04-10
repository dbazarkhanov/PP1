#include <iostream>
using namespace std;
int main(){
    int n, s=0, s1 = 0;
    cin >> n;
    for(int i = n; i > 0; i--){
        if(n - i != 1) {
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    s = 0;
                    break;
                } else{
                     s = 1;
                    }
                }
            }
        if(s == 1) {
            for (int k = 2; k < n - i; k++) {
                if ((n - i) % k == 0) {

                    s1 = 0;
                    break;
                } else s1 = 1;
            }
        }
        if(s1 == 1){
            cout << n - i << " " << i;
            break;
        }
    }
}