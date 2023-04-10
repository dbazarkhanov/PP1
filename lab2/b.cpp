#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n%2 !=0){
        cout << "Super" << endl;
    } else if(n%2 ==0 and 2<n and n<5){
        cout << "Not Super" << endl;
    } else if(n%2 ==0 and 6<n and n<20){
        cout << "Super" << endl;
    } else if(n%2 == 0 and n>20){
        cout << "Not Super" << endl;
    }
    return 0;
}