#include <bits/stdc++.h>

using namespace std;

const int MAXN = 50;

typedef pair<int,int> team;

int main(){
	int n,k,p,t;
	cin >> n >> k;
	vector<team> v;
	for (int i = 0; i < n; i++){
		cin >> p >> t;
		v.push_back(team(-p,t));
	}
	sort(v.begin(), v.end());
	vector<int> a;
	for (int i = 0; i < n; i++){
		int c = 1;
		while(i < n && v[i+1] == v[i]){
			c++;
			i++;
		}
		a.push_back(c);
		if(a.size() > 1) a[a.size()-1] +=  a[a.size()-2];
	}
	int l = 0, r = a.size(), mid;
	while(l < r){
		mid = (l+r) >> 1;
		if(a[mid] < k){
			l = mid+1;
		} else {
			r = mid;
		}
	}
	cout << a[l]-(l == 0 ? 0 : a[l-1]) << endl;
	return 0;
}