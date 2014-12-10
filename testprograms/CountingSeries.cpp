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

class CountingSeries {
public:
	long long countThem(long long, long long, long long, long long, long long);
};

long long CountingSeries::countThem(long long a, long long b, long long c, long long d, long long upperBound) {
	set<long long> s;
	for(int k = 0 ; ; k++){
		if(a + b*k <= upperBound){
			s.insert(a + b*k);
		} else {
			break;
		}
	}
	long long last = 0;
	for(long long k = 1 ; ; k *= d){
		if(c * k <= upperBound && c*k != last){
			s.insert(c*k);
			last = c*k;
		} else {
			break;
		}
	}
	return s.size();
}


double test0() {
	long long p0 = 1LL;
	long long p1 = 1LL;
	long long p2 = 1LL;
	long long p3 = 2LL;
	long long p4 = 1000LL;
	CountingSeries * obj = new CountingSeries();
	clock_t start = clock();
	long long my_answer = obj->countThem(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p5 = 1000LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	long long p0 = 3LL;
	long long p1 = 3LL;
	long long p2 = 1LL;
	long long p3 = 2LL;
	long long p4 = 1000LL;
	CountingSeries * obj = new CountingSeries();
	clock_t start = clock();
	long long my_answer = obj->countThem(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p5 = 343LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	long long p0 = 40LL;
	long long p1 = 77LL;
	long long p2 = 40LL;
	long long p3 = 100000LL;
	long long p4 = 40LL;
	CountingSeries * obj = new CountingSeries();
	clock_t start = clock();
	long long my_answer = obj->countThem(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p5 = 1LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	long long p0 = 452LL;
	long long p1 = 24LL;
	long long p2 = 4LL;
	long long p3 = 5LL;
	long long p4 = 600LL;
	CountingSeries * obj = new CountingSeries();
	clock_t start = clock();
	long long my_answer = obj->countThem(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p5 = 10LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	long long p0 = 234LL;
	long long p1 = 24LL;
	long long p2 = 377LL;
	long long p3 = 1LL;
	long long p4 = 10000LL;
	CountingSeries * obj = new CountingSeries();
	clock_t start = clock();
	long long my_answer = obj->countThem(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	long long p5 = 408LL;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
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
