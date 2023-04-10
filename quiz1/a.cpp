#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; ++i)
        cin >> a[i];
    int j=a[0];
    int p=a[0];
    int difference;
    for(int i=0; i<n; ++i){
        if(a[i]<j)
            j=a[i];
        if(a[i]>p)
            p=a[i];
        difference=p-j;
        difference=difference;
        
    }
    cout << difference << endl;
    
   return 0;
}