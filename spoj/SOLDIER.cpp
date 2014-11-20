#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> equip;

int quality(vector<equip> v){
	int mini = -1;
	for (int i = 0; i < v.size(); i++){
		if(mini == -1 || mini < v[i].second){
			mini = v[i].second;
		}
	}
	return mini;
}

int main(){
	int n,m,t,p,q,mini;
	cin >> n >> m;
	vector< vector<equip> > v(6);
	for (int i = 0; i < n; i++){
		cin >> t >> p >> q;
		if(1 <= t && t <= 6){
			v[t-1].push_back(equip(p,q));
		}
	}
	bool can = true;
	int mini = -1;
	vector<equip> used(6);
	for (int i = 0; i < 6; i++){
		if(v[i].size() > 0){
			sort(v[i].begin(), v[i].end());
			can &= v[i][0].first <= m;
			m -= v[i][0].first;
			if(mini == -1 || mini < v[i][0].second) mini = [i][0].second;
			used[i] = equip(v[i][0].first,v[i][0].second);
			while(v[i].size() > 0 && v[i][0].second <= used[i].second){
				v[i].erase(v[i].begin());
			}
		} else {
			can = false;
		}
	}
	if(can){
		while(true){
			int best = -1, price = -1, p = -1;
			for (int i = 0; i < 6; i++){
				vector<equip> pos(used.begin(), used.end());
				int cost = v[i][0].first;
				if(used[i].first-cost >= 0){
					pos[i] = v[i][0];
					int nq = quality(pos);
					int cost = 
					if(best == -1 || best < nq){

					}
				}
			}
			if(best == minq){
				break;
			} else {
				minq = best;
				m = price;
				used = pos;
			}
		}
		cout << mini << endl;
	} else {
		cout << 0 << endl;
	}
	return 0;
}