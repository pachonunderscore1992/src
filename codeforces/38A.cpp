#include <bits/stdc++.h>

using namespace std;

const int MAXN = 101;

int v[MAXN];

int main(){
	int n,a,b;
	cin >> n;
	for (int i = 2; i <= n; i++){
		cin >> v[i];
		v[i] += v[i-1];
	}
	cin >> a >> b;
	cout << v[b]-v[a] << endl;
	return 0;
}