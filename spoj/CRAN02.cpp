#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int t,n,s,x;
	scanf("%d",&t);
	map<int,int> m;
	ll ans;
	while(t--){
		m.clear();
		scanf("%d",&n);
		s = 0;
		ans = 0LL;
		for (int i = 0; i < n; i++){
			scanf("%d",&x);
			s += x;
			if(s == 0) ans++;
			ans += (ll)m[s];
			m[s]++;
		}
		printf("%lld\n",ans);
	}
	return 0;
}