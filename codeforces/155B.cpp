#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> card;

const int MAXN = 1000;

card v[MAXN];

int main(){
	int n,a,b;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a >> b;
		v[i] = card(b,a);
	}
	sort(v,v+n,greater<card>());
	int sum = 0;
	int rem = 1;
	for (int i = 0; i < n && rem > 0; i++){
		sum += v[i].second;
		rem += v[i].first-1;
	}
	cout << sum << endl;
	return 0;
}