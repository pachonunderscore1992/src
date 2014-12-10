#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

#define ALL(x) (x).begin(),(x).end()
#define SZ(x) (x).size()
#define PB push_back

const int INF = 1000000000;
const int MOD = INF + 7;

class MysticAndCandiesEasy {
public:
	int minBoxes(int, int, vector <int>);
};

int MysticAndCandiesEasy::minBoxes(int C, int X, vector <int> high) {
	sort(high.rbegin(),high.rend());
	int n = high.size();
	vector<int> a(n,0);
	for(int i = n-1 ; i >= 0 ; i--){
		int aux = min(C,high[i]);
		a[i] = aux;
		C -= aux;
	}
	int ans = 0;
	int used = 0;
	for(int i = 0 ; i < n  && used < X; i++){
		used += a[i];
		ans++;
	}
	return ans;
}


//Powered by [KawigiEdit] 2.0!
