#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200010;

int a[MAXN];
int b[MAXN];

int main(){
	int n,m;
	cin >> n;
	for (int i = 1 ; i <= n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	cin >> m;
	for (int i = 1 ; i <= m; i++){
		cin >> b[i];
	}
	sort(b,b+m);
	int x = 2*n ,y = 2*m;
	int diff = x-y;
	int i = n , j = m;
	while(i >= 1 && j >= 0){
		int e = a[i];
		while(i > 1 && a[i-1] == e){
			i--;
		}
		while(j > 0 && b[j] >= e){
			j--;
		}
		int sa = (n-i+1)*3+2*(i-1);
		int sb = (m-j)*3+2*(j);
		int d = sa - sb;
		if(d > diff || (d == diff && sa > x)){
			diff = d;
			x = sa;
			y = sb;
		}
		i--;
	}
	cout << x << ":" << y << endl;
	return 0;
}