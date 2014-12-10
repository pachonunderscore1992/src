#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100001;

int a[MAXN];

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int l = 0;
	int restore = 0;
	int last = -1;
	int ans = 1;
	for (int r = 1; r < n; r++){
		if(a[r-1] < a[r]){
			ans = max(ans,r-l+1);
		} else {
			if()
		}
	}
	cout << ans << endl;
	return 0;
}