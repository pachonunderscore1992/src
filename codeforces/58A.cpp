#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	string t = "hello";
	cin >> s;
	int n = s.size(), m = t.size();
	int i = 0, j = 0;
	while(i < n && j < m){
		if(s[i] == t[j]){
			j++;
		}
		i++;
	}
	cout << (j == m ? "YES" : "NO") << endl;
	return 0;
}