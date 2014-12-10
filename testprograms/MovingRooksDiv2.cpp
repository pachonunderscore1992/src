#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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

class MovingRooksDiv2 {
public:
	string move(vector <int>, vector <int>);
};
string yes = "Possible" , no = "Impossible";
int mask = (1 << 3)-1;
int n;
void printmask(int x){
	for(int i = 0 ; i < 3*n ; i++){
		cout << (x & (1 << i) ? 1 : 0);
	}
	cout << endl;
}
string MovingRooksDiv2::move(vector <int> v, vector <int> y) {
	if(v == y) return yes;
	n = v.size();
	int s = 0;
	for(int i = 0 ; i < n ; i++){
		s |= v[i] << 3*i;
	}
	printmask(s);
	int f = 0;
	for(int i = 0 ; i < n ; i++){
		f |= y[i] << 3*i;
	}
	printmask(f);
	set<int> q;
	q.insert(s);
	while(q.size() > 0){
		int x = *q.begin();q.erase(q.begin());
		if(x == f){return yes;}
		for(int i = 0 ; i < n ; i++){
			int auxi = (x & (mask << 3*i)) >> 3*i;
			for(int j = i+1 ; j < n ; j++){
				int auxj = (x & (mask << 3*j)) >> 3*j;
				if(auxi > auxj){
					int xx = x;
					xx -= auxi << 3*i;
					xx += auxj << 3*i;
					xx -= auxj << 3*j;
					xx += auxi << 3*j;
					q.insert(xx);
				}
			}
		}
	}
	return no;
}


double test0() {
	int t0[] = {0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MovingRooksDiv2 * obj = new MovingRooksDiv2();
	clock_t start = clock();
	string my_answer = obj->move(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Possible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int t0[] = {1,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MovingRooksDiv2 * obj = new MovingRooksDiv2();
	clock_t start = clock();
	string my_answer = obj->move(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Possible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int t0[] = {0,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1,0};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MovingRooksDiv2 * obj = new MovingRooksDiv2();
	clock_t start = clock();
	string my_answer = obj->move(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Impossible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	int t0[] = {3,1,2,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {0,2,1,3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MovingRooksDiv2 * obj = new MovingRooksDiv2();
	clock_t start = clock();
	string my_answer = obj->move(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Possible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {3,1,2,0};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3,2,0,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	MovingRooksDiv2 * obj = new MovingRooksDiv2();
	clock_t start = clock();
	string my_answer = obj->move(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "Impossible";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
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
	
	time = test4();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
