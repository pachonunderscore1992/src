#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100001;

int a[MAXN];

int main(){
	int n,t;
	cin >> n >> t;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int l = 0, sum = 0, cur = 0, ans = 0;
	for (int r = 0; r < n; r++){
		while(sum + a[r] > t && l <= r){
			sum -= a[l];
			l++;
		}
		if(sum + a[r] <= t){
			sum += a[r];
			ans = max(ans,r-l+1);
		}
	}
	cout << ans << endl;
	return 0;
}