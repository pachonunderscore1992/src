#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int bitcount(int n){
	int c = 0;
	while(n!=0){
		if(n&1)c++;
		n/=2;
	}
	return c;
}

int main(){
	int n,x;
	map<int,int> m;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		m[bitcount(x)]++;
	}
	ll ans = 0LL;
	for (auto p : m){
		ll a = (ll)p.second;
		ans += a*(a-1LL)/2LL;
	}
	cout << ans << endl;
	return 0;
}