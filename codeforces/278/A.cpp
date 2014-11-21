#include <bits/stdc++.h>

using namespace std;

bool has(int n){
	n = abs(n);
	bool sw = false;
	while(n!=0){
		int d = n%10;
		sw |= (d == 8);
		n /= 10;
	}
	return sw;
}

int main(){
	int n;
	while(cin >> n){
		int c = 1;
		while(!has(n+c)){
			c++;
		}
		cout << c << endl;
	}
	return 0;
}