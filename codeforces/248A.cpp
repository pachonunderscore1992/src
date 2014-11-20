#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a,b,l,r;
	cin >> n;
	l = r = 0;
	for (int i = 0; i < n; i++){
		cin >> a >> b;
		l += a; r += b;
	}
	cout << min(l,n-l) + min(r,n-r) << endl;
	return 0;
}