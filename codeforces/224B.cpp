#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100001;

int a[MAXN];

int main(){
	ios_base::sync_with_stdio(false);
	int n,k;
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	map<int,int> m;
	int dist = 0, ini = -1, fin = -1;
	for (int i = 0; i < n ; i++){
		if(m[a[i]] == 0){
			dist++;
			if(dist == k){
				fin = i+1;
				break;
			}
		}
		m[a[i]]++;
	}
	if(fin != -1){
		ini = 0;
		while(m[a[ini]] > 1){
			m[a[ini]]--;
			ini++;
		}
		ini++;
	}
	cout << ini << " " << fin << endl;
	return 0;
}