#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;

int a[MAXN];
int b[MAXN];

int main(){
	int n,m;
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		cin >> a[i];
		b[a[i]]++;
	}
	sort(a,a+m);
	int mini = 0,idx = 0, p = 0;
	while(p < n){
		if(a[idx] > 0){
			mini += a[idx];
			a[idx]--;
			p++;
		} else {
			idx++;
		}
	}
	int maxi = 0;
	p = 0, idx = 1000;
	while(p < n){
		if(b[idx] > 0){
			maxi += idx;
			b[idx]--;
			b[idx-1]++;
			p++;
		} else {
			idx--;
		}
	}
	cout << maxi << " " << mini << endl;
	return 0;
}