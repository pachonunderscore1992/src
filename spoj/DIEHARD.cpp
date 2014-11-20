#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2503;

int memo[MAXN][MAXN][3];
int ch[] = { 3,  -5, -20 };
int ca[] = { 2, -10,   5 };

int f(int h,int a,int place){
   int& ans = memo[h][a][place];
   if(ans == -1){
      ans = 0;
      for(int nxt = 0 ; nxt < 3 ; nxt++)if(nxt != place){
         if(h+ch[nxt] > 0 && a+ca[nxt] > 0){
            ans = max(ans,1+f(h+ch[nxt],a+ca[nxt],nxt));
         }
      }
   }
   return ans;
}

int main(){
   memset(memo,-1,sizeof memo);
   int t,h,a;
   scanf("%d",&t);
   while(t--){
      scanf("%d%d",&h,&a);
      int ans = 0;
      for(int place = 0 ; place < 3 ; place++){
         ans = max(ans,f(h,a,place));
      }
      printf("%d\n",ans);
   }
}
