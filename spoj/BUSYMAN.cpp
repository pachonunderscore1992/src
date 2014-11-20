#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> act;

const int MAXN = 100010;

act v[MAXN];

int main(){
	int t,n,a,b,ans,last;
	cin >> t;
	while(t--){
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> a >> b;
			v[i] = act(b,a);
		}
		sort(v,v+n);
		ans = 0;
		last = 0;
		for (int i = 0; i < n; i++){
			if(v[i].second >= last){
				ans++;
				last = v[i].first;
			}
		}
		cout << ans << endl;
	}
	return 0;
}