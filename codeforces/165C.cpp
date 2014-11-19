#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	string s;
	int k, ini = 0, c = 0;
	ll ans = 0LL, tz, z = 0LL;
	cin >> k >> s;
	for (int i = 0; i < s.size() ; i++){
		if(s[i] == '1'){
			c++;
			if(c == k){//arrives the (k+1)-th one :fearful:
				tz = 0LL;
				while(s[i+1] == '0' && i+1 < s.size()){
					tz++;i++;
				}
				ans += (tz + 1LL);
				while(s[ini] == '0'){
					ans += (tz+1LL);
					ini++;
				}
				c--;
				ini++;
			}
			if(k == 0){
				ans += z*(z+1LL)/2LL;
				z = 0LL;
			}
		} else {
			z++;
		}
	}
	if(k == 0) ans += z*(z+1LL)/2LL;
	cout << ans << endl;
	return 0;
}