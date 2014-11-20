#include <bits/stdc++.h>

using namespace std;

int main() {
    cout.precision(10);
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << ((a*d)/(a*d+b*c-a*c+0.0)) << endl;
    return 0;
}