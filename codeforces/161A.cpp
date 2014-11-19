#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;

const int MAXN = 100010;

int a[MAXN];
int b[MAXN];

int main(){
	int n,m,x,y;
	cin >> n >> m >> x >> y;
	for (int i = 1 ; i <= n; i++){
		cin >> a[i];
	}
	for (int i = 1 ; i <= m; i++){
		cin >> b[i];
	}
	vector<ii> v;

	int i = 1, j = 1;
	while(i <= n && j <= m){
		if(a[i] - x <= b[j] && b[j] <= a[i] + y){
			v.push_back(ii(i,j));
			i++;j++;
		} else if(a[i]-x > b[j]){
			j++;
		} else if(b[j] > a[i]+y){
			i++;
		}
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++){
		cout << v[i].first << " " << v[i].second << endl;
	}
	return 0;
}