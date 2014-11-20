#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100001;

int a[MAXN];

typedef long long ll;

int main(){
	int n;
	while(cin >> n && n){
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		int s = 0;
		ll cost = 0LL;
		for (int i = 0; i < n; i++){
			cost += (ll)abs(s);
			s += a[i];
		}
		cout << cost << endl;
	}
	return 0;
}