#include <bits/stdc++.h>

using namespace std;


int mh,ma,md;

struct state {
	int a,d,h,p;
	state (int _a,int _d, int _h,int _p){
		a = _a; d = _d ; h = _h; p = _p;
	}
	bool operator < (state const &o) const {
		if(p != o.p){
			return p < o.p;
		} else if (a != o.a){
			return a < o.a;
		} else {
			return make_pair(d,h) < make_pair(o.d,o.h);
		}
	}
	bool win(){
		int y_real_dmg = max(0,md-a);
		int m_real_dmg = max(0,d-ma);
		if(y_real_dmg == 0 && m_real_dmg == 0){
			return false;
		} else if(y_real_dmg == 0){
			return false;
		} else if( m_real_dmg == 0){
			return true;
		}
		int tm = (mh+y_real_dmg-1)/y_real_dmg;//cuantos golpes aguanta el monstruo
		int ty = (h-1)/m_real_dmg;//cuantos golpes aguanto antes de morir
		return ty > tm;
	}
};

int main(){
	int yh,ya,yd;
	int ph,pa,pd;
	cin >> mh >> ma >> md;
	cin >> yh >> ya >> yd;
	cin >> ph >> pa >> pd;
	int l_atk_price = max(0,md-ya+1)*pa;//necesario para almenos danarlo
	ya += l_atk_price/pa;
	int price = l_atk_price;
	int m_real_dmg = max(0,yd-ma);//lo que realmente me hace dano
	int y_real_dmg = max(0,md-ya);
	set<state> pq;
	pq.insert(state(ya,yd,yh,price));
	while(true){
		state s = *pq.begin();
		pq.erase(pq.begin());
		if(s.win()){
			cout << s.p << endl;
			break;
		}
		pq.insert(state(ya+1,yd,yh,price+pa));
		pq.insert(state(ya,yd+1,yh,price+pd));
		pq.insert(state(ya,yd,yh+1,price+ph));
	}
	return 0;
}