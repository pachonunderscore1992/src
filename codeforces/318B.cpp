#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string h = "heavy";
string m = "metal";

int main(){
	string s;
	cin >> s;
	ll ans = 0LL,heavies = 0LL;
	bool heavy,metal;
	for (int i = 0; i < s.size(); i++){
		heavy = metal = 1;
		for(int j = 0 ; j < 5 ; j++){
			heavy &= h[j] == s[i+j];
			metal &= m[j] == s[i+j];
		}
		if(heavy|metal){
			i += 4;
			if(heavy){
				heavies++;
			} else if(metal){
				ans += heavies;
			}
		}
	}
	cout << ans << endl;
	return 0;
}