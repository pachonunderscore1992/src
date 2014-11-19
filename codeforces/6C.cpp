#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100010;

int a[MAXN];

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int sum = accumulate(a,a+n,0);
	int alice = 0, t = 0;
	for (int i = 0; i < n; i++){
		if(t <= sum-t-a[i]){
			alice++;
			t += a[i];
		} else {
			break;
		}
	}
	cout << alice << " " << n-alice << endl;
	return 0;
}