#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,a,b;
	cin >> n >> m >> a >> b;
	int f = n/m;
	int r = n%m;
	int c = n/m + (r > 0 ? 1 : 0);
	cout << min(a*n,min(a*r+f*b,c*b)) << endl;
	return 0;
}