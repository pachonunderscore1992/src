#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100100;
const int MAXM = 500;

bool sieve[MAXN];
int a[MAXM][MAXM];
int row[MAXM];
int col[MAXM];
vector<int> primes;

int f(int x){
	int p = lower_bound(primes.begin(), primes.end(), x) - primes.begin();
	return primes[p]-x;
}

int main(){
	memset(sieve,1,sizeof sieve);
	for (int i = 2; i < MAXN; i++){
		if(sieve[i]){
			primes.push_back(i);
			for (int j = i+i; j < MAXN; j+=i){
				sieve[j] = 0;
			}
		}
	}
	int n,m;
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
			a[i][j] = f(a[i][j]);
			row[i] += a[i][j];
			col[j] += a[i][j];
		}
	}
	int ans = *min_element(row,row+n);
	ans = min(ans,*min_element(col,col+m));
	cout << ans << endl;
	return 0;
}