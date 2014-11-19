#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100010;

int a[MAXN];

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int mini = n;
	for (int i = 0; i < n; i++){
		int rem = i+(n-(lower_bound(a+i,a+n,2*a[i]+1)-a));
		mini = min(mini,rem);
	}
	cout << mini << endl;
	return 0;
}