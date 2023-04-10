#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n>=36000){
        cout << n/3600 << ":" << (n%3600)/60/10 << (n%3600)/60%10 << ":" << n%60/10 << n%60%10 << endl;
    } else{
        cout << "0" << n/3600 << ":" << (n%3600)/60/10 << (n%3600)/60%10 << ":" << n%60/10 << n%60%10 << endl;
    }
    return 0;

}
