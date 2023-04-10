#include <iostream>

using namespace std;

int main(){
    int a;
    //int n=45; 
    //int i=0; 
    cin >> a;
    if(a%2 ==0 and a !=10){
        cout << 9+(45*a+a*10)/60 << " " << (45*a+a*10)%60-15;
    } else if(a%2 !=0 and a !=1){
        cout << 9+(45*a+a*10)/60 << " " << (45*a+a*10)%60-10;
    } else if(a ==1){
        cout << 9+(45*a+a*5)/60 << " " << (45*a+a*5)%60-5;
    } else if(a ==10){
        cout << 9+(45*a+85)/60 << " " << (45*a+85)%60;
    }
    return 0;
}