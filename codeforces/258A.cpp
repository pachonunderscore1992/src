#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int n = s.size();
	int p = s.find('0');
	if(p == -1){
		s.erase(s.begin()+n-1);
	} else {
		s.erase(s.begin()+p);
	}
	cout << s << endl;
	return 0;
}