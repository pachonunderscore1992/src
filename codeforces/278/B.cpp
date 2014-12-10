#include <bits/stdc++.h>

using namespace std;

int v[4];

int main(){
	int n,a,b,c,d;
	while( cin >> n ){
		for (int i = 0; i < n; i++){
			cin >> v[i];
		}
		sort(v,v+n)	;
		if(n == 0){
			cout << "YES" << endl;
			cout << "1 1 3 3" << endl;
		} else if( n == 1) {
			a = v[0];

		} else if( n == 2) {
			a = v[0];
			b = v[1];

		} else if( n == 3) {
			a = v[0];
			b = v[1];
			c = v[2];
		} else {
			a = v[0];
			b = v[1];
			c = v[2];
			d = v[3];
			if( == )
		}
	}
	return 0;
}