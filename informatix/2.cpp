#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    printf("The next number for the number %d is %d.\n", a, a+1);
    printf("The previous number for the number %d is %d.", a, a-1);
    return 0;
}