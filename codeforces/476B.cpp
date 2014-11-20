#include <bits/stdc++.h>

using namespace std;

double prob(string s,int idx,int pos, int final){
	if(idx == s.size()){
		return (pos == final) ? 1.0 : 0.0;
	} else {
		if(s[idx] == '+'){
			return prob(s,idx+1,pos+1,final);
		} else if(s[idx] == '-'){
			return prob(s,idx+1,pos-1,final);
		} else {
			return (0.5*prob(s,idx+1,pos+1,final)+0.5*prob(s,idx+1,pos-1,final));
		}
	}
}

int main(){
	cout.precision(9);
	string s1;
	cin >> s1;
	int final = 0;
	for(char c : s1){
		final += (c == '+');
		final -= (c == '-');
	}
	string s2;
	cin >> s2;
	cout << prob(s2,0,0,final) << endl;
}