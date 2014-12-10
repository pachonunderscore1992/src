#include <bits/stdc++.h>

using namespace std;

const int MAXN = 20;

int a[MAXN];

int main(){
	int t,n,k,x,ans;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&k);
		for (int i = 0; i < n; i++){
			scanf("%d",&a[i]);
		}
		ans = 0;
		for (int mask = 0; mask < (1<<n); mask++){
			x = k;
			for (int i = 0; i < n; i++){
				if(mask&(1<<i)){
					x ^= a[i];
				}
			}
			ans = max(ans,x);
		}
		printf("%d\n", ans);
	}
	return 0;
}