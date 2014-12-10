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

const int INF = 1000000000;
const int MOD = INF + 7;

class MinimumSquareEasy {
public:
	long long minArea(vector <int>, vector <int>);
};

long long MinimumSquareEasy::minArea(vector <int> x, vector <int> y) {
	int n = x.size();
	long long mini = 1LL << 62;
	for(int i = 0 ; i < n ; i++){
		for(int j = i+1 ; j < n ; j++){
			int x0 = 1000000000, x1 = -1000000000 ,y0 = 1000000000,y1 = -1000000000;
			for(int k = 0 ; k < n ; k++){
				if(k == i || k == j ){
					continue;
				} else {
					x0 = min(x0,x[k]);
					x1 = max(x1,x[k]);
					y0 = min(y0,y[k]);
					y1 = max(y1,y[k]);
				}
			}
			int dx = x1 - x0;
			int dy = y1 - y0;
			if( dx > dy){
				dx += 2;
			} else if (dx == dy){
				dx += 2;
				dy += 2;
			} else {
				dy += 2;
			}
			int d = max(dx,dy);
			long long area = (long long) d * (long long) d;
			mini = min(mini,area);
		}
	}	
	return mini;
}


double test0() {
	int t0[] = {0, 1, 2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0, 1, 5};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MinimumSquareEasy * obj = new MinimumSquareEasy();
	clock_t start = clock();
	long long my_answer = obj->minArea(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 4LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {-1, -1, 0, 2, 0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {-2, -1, 0, -1, -2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MinimumSquareEasy * obj = new MinimumSquareEasy();
	clock_t start = clock();
	long long my_answer = obj->minArea(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 9LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {1000000000, -1000000000, 1000000000, -1000000000};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1000000000, 1000000000, -1000000000, -1000000000};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MinimumSquareEasy * obj = new MinimumSquareEasy();
	clock_t start = clock();
	long long my_answer = obj->minArea(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 4000000008000000004LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {93, 34, 12, -11, -7, -21, 51, -22, 59, 74, -19, 29, -56, -95, -96, 9, 44, -37, -54, -21};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {64, 12, -43, 20, 55, 74, -20, -54, 24, 20, -18, 77, 86, 22, 47, -24, -33, -57, 5, 7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MinimumSquareEasy * obj = new MinimumSquareEasy();
	clock_t start = clock();
	long long my_answer = obj->minArea(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p2 = 22801LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}

int main() {
	int time;
	bool errors = false;
	
	time = test0();
	if (time < 0)
		errors = true;
	
	time = test1();
	if (time < 0)
		errors = true;
	
	time = test2();
	if (time < 0)
		errors = true;
	
	time = test3();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
