#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100010;

int a[MAXN];

int main(){
	int n,m,x;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if(i) a[i] += a[i-1];
	}
	cin >> m;
	while(m--){
		cin >> x;
		int l = 0, r = n-1, mid;
		while(l < r){
			mid = (l+r) >> 1;
			if(a[mid] < x){
				l = mid + 1;
			} else {
				r = mid;
			}
		}
		cout << l+1 << endl;
	}
	return 0;
}