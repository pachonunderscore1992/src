#include <bits/stdc++.h>

using namespace std;

const int MAXN = 101;

int dp[MAXN][MAXN][2];

int main(){
	cin >> t;
	dp[0][0][0] = 1;
	for (int i = 1; i < MAXN; i++){//bit position
		for (int j = 0 ; j < MAXN; j++){ //
			for (int last = 0; last < 2; last++){
				dp[i][j][last];
			}
		}
	}
	int n,k,t,caso;
	while(t--){
		cin >> caso >> n >> k;
		cout << dp[n][k][0]+dp[n][k][1] << endl;
	}
	return 0;
}