#include <bits/stdc++.h>

using namespace std;

int main(){
	int yako,wako,maxi;
	cin >> yako >> wako;
	maxi = max(yako,wako);
	int n = 6 - maxi + 1;
	int d = 6;
	int g = __gcd(n,d);
	cout << n/g << '/'<< d/g << endl;
}