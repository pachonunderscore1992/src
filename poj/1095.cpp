#include <iostream>

using namespace std;

const int MAXD = 19;

int cat[MAXD];
int s[MAXD];

void init(){
	cat[0] = 1;
	s[0] = 0;
	for(int i = 1 ; i < MAXD ; i++){
		for(int l = 0 ; l < i ; l++){
			cat[i] += cat[l]*cat[i-1-l];
		}
		s[i] = s[i-1]+cat[i];
	}
}

int nodes(int n){
	int i = 0;
	while(s[i] < n){
		i++;
	}
	return i;
}

void f(int n,int m){
	int ml = 0;
	int c = 0;
	for(int l = 0 ; l < m ; l++){
		if(c <= n && n < c+cat[l]*cat[m-1-l]){
			ml = l;break;
		}
		c += cat[l]*cat[m-1-l];
	}
	int mr = m-1-ml;
	int d = n-c;
	int nl = d/cat[mr];
	int nr = d%cat[mr];
	if(ml){
		cout << "(";
		f(nl,ml);
		cout << ")";
	}
	cout << "X";
	if(mr){
		cout << "(";
		f(nr,mr);	
		cout << ")";
	}
}

int main(){
	init();
	int n,m;
	while(cin >> n && n){
		m = nodes(n);
		f(n-s[m-1]-1,m);
		cout << endl;
	}
	return 0;
}