#include <bits/stdc++.h>

using namespace std;

int main(){
	int p1,p2,c1,c2;
	double price1,price2;
	cin >> p1 >> c1 >> price1;
	cin >> p2 >> c2 >> price2;
	cout.precision(2);
	cout << "VALOR A PAGAR: R$ " << fixed << c1*price1+c2*price2 << endl;
	return 0;
}