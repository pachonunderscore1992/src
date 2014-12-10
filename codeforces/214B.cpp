#include <bits/stdc++.h>

using namespace std;

void f(map<int,int>& m, int s,int& n){
	for(int i = s ; i < 9 ; i += 3){
		if(m[i]){
			n--;
			m[i]--;
			return;
		}
	}
	s = 3 - s;
	for (int i = s ; i < 9; i+= 3){
		if(m[i]){
			m[i]--;
			n--;
			for (int j = i ; j < 9; j+= 3){
				if(m[j]){
					m[j]--;
					n--;
					return;
				}
			}
			n++;
			m[i]++;
		}
	}
	m.clear();
	cout << -1 << endl;
}

int main(){
	int n,d,sum = 0;
	cin >> n;
	map<int,int> m;
	for (int i = 0; i < n; i++){
		cin >> d;
		m[d]++;
		sum += d;
	}
	if(!m[0]){
		cout << -1 << endl;
	} else {
		sum %= 3;
		if(sum){
			f(m,sum,n);
		}
		if(n == m[0]){
			cout << 0 << endl;
		} else {
			string s = "";
			for (int i = 9; i >=  0; i--){
				s += string(m[i],'0'+i);
			}
			if(s.size() != 0){
				cout << s << endl;
			}
		}
	}
	return 0;
}