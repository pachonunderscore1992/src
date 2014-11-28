#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000001;
typedef long long ll;

int phi[MAXN];
ll f[MAXN];

int main(){
	for (int i = 0; i < MAXN; i++){
		phi[i] = i;
	}
	for (int i = 2; i < MAXN; i++){
		if(phi[i] == i){
			for (int j = i ; j < MAXN; j += i){
				phi[j] -= phi[j]/i;
			}
		}
	}
	for (int i = 1; i < MAXN; i++){
		for (int j = i; j < MAXN; j+=i){
			f[j] += (ll)i*(ll)phi[i];
		}
	}
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%lld\n", (ll)n*(1LL+f[n])/2LL);
	}
	return 0;
}