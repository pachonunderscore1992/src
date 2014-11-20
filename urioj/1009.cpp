#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	double sal,bon;
	cin >> s >> sal >> bon;
	cout.precision(2);
	cout << fixed << "TOTAL = R$ "<< sal+(bon*0.15) << endl;
	return 0;
}