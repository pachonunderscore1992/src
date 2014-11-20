#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string s;
	cin >> n >> s;
	string l(s.begin(), s.begin()+n);
	string r(s.begin()+n, s.end());
	sort(l.begin(), l.end());
	sort(r.begin(), r.end());
	bool lesser = true, greater = true;
	for (int i = 0; i < n; i++){
		lesser &= (l[i] < r[i]);
		greater &= (l[i] > r[i]);
	}
	cout << (lesser|greater ? "YES" : "NO") << endl;
	return 0;
}