#include <bits/stdc++.h>

using namespace std;

int main(){
	// freopen("B-small-practice.in","r",stdin);
	// freopen("B-small-practice.out","w",stdout);
	freopen("B-large-practice.in","r",stdin);
	freopen("B-large-practice.out","w",stdout);
	cout.precision(7);
	int casos;
	double C,F,X,r,ans,t,nans;
	bool sw;
	cin >> casos;
	for (int caso = 1 ; caso <= casos ; caso++){
		cin >> C >> F >> X;
		t = 0.0;
		r = 2.0;
		ans = X/r;
		do {
			t += C/r;
			r += F;
			nans = t + X/r;
			sw = false;
			if(nans < ans){
				sw = true;
				ans = nans;
			}
		} while(sw);
		cout << "Case #" << caso << ": " << fixed << ans << endl;
	}
	return 0;
}