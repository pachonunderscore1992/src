#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,c=0,x,f;
    cin >> n ;
    for (int i = 0; i < n; ++i){
        f = 0;
        for (int j = 0; j < 3; ++j){
            cin >> x;
            f+=x;
        }
        c += (f >= 2);
    }
    cout << c << endl;
    return 0;
}   