#include <bits/stdc++.h>

using namespace std;

const int MAXN = 50;

int a[MAXN];
int b[MAXN];

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		a[i] = b[i] = n-i;	
	}
	for (int i = 0; i < n-1; i++){
		for (int j = i; j < n-1; j++){
			if(a[j]>a[j+1]) swap(a[j],a[j+1]);
		}
	}
	bool sw = true;
	for (int i = 1; i < n; i++){
		sw &= (a[i-1] <= a[i]); 
	}
	if(sw){
		cout << -1 << endl;
	} else {
		for (int i = 0; i < n; i++){
			cout << b[i] << (i == n-1 ? '\n' : ' ');
		}
	}
	return 0;
}