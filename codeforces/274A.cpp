#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100010;

int a[MAXN];
bool vis[MAXN];
typedef long long ll;

int main(){
	int n,k;
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	map<int,int> m;
	for (int i = 0; i < n; i++){
		m[a[i]] = i;
	}
	int c = 0;
	for (int i = 0; i < n; i++)if(!vis[i]){
		int t = 0;
		int x = a[i];
		while(m.count(x) && !vis[m[x]]){
			vis[m[x]] = 1;
			t++;
			ll r = (ll)x*(ll)k;
			if(r > a[n-1]) break;
			x *= k;
		}
		c += (t+1)/2;
	}
	cout << c << endl;
	return 0;
}