#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1011;

int a[MAXN];

int main(){
	int n,l;
	cin >> n >> l;
	for (int i = 0 ; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	double lo = 0, hi = l, m;
	for (int t = 0; t < 100; t++){
		m = (lo+hi)/2.0;
		bool sw = false;
		for(int i = 1 ; i < n ; i++){
			sw |= (double)(a[i]-a[i-1]) > 2.0*m;
		}
		if(sw){
			lo = m;
		} else {
			hi = m;
		}
	}
	double ans = max((double)a[0],max((double)(l-a[n-1]),lo));
	cout.precision(9);
	cout << fixed << ans << endl;
	return 0;
}