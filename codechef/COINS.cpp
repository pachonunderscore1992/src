#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

map<int,ll> dp;

ll f(int n){
	if(n == 0) return 0LL;
	if(dp.count(n)) return dp[n];
	if(n/2+n/3+n/4 < n) return dp[n] = n;
	return dp[n] = max((ll)n,f(n/2)+f(n/3)+f(n/4));
}

int main(){
	int n;
	while(cin >> n){
		cout << f(n) << endl;
	}
	return 0;
}