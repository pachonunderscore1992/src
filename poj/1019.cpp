#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int f(int n){
	int c = 0;
	while(n){
		c++;
		n /= 10;
	}
	return c;
}

int main(){
	// int t,n;
	// cin >> t;
	// while(t--){
	// 	cin >> n;
		int s = 0;
		int m = 15;
		vector<int> v(m);
		for (int i = 1; i < m; i++){
			v[i] = v[i-1] + f(i);
			s += v[i];
			cout << s << endl;
		}
	// }
	return 0;
}