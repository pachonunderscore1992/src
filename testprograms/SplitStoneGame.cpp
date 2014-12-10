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

const string win = "WIN", lose = "LOSE";

class SplitStoneGame {
public:
   string winOrLose(vector <int>);
};


int n;
vector<int> v;
bool f(int i){
   if(i >= n-2) return true;
   bool sw = true;
   if(v[i] > 1 && i < n-2){
         v[i] = 0;
         int j = i+1, k = i+2;
         for(int xx = 1 ; xx <= v[i]/2 ; xx++){
         int l = xx; int r = v[i] - xx;;
            v[j] += l;
          v[k] += r;
          sw &= f(i+1);
          v[j] -= l;
          v[k] -= r;
          v[i] = l+r;   
         }
   }
   return !sw;
}

string SplitStoneGame::winOrLose(vector <int> number) {
   v = number;
   n = number.size();
   if( n < 2 ) { return lose; }
   sort(ALL(number),[](int x,int y){return x > y;});
   bool sw = f(0);
   return sw ? win : lose;
}


double test0() {
	int t0[] = {1, 1, 1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	SplitStoneGame * obj = new SplitStoneGame();
	clock_t start = clock();
	string my_answer = obj->winOrLose(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "LOSE";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {2, 2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	SplitStoneGame * obj = new SplitStoneGame();
	clock_t start = clock();
	string my_answer = obj->winOrLose(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "LOSE";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {1, 1, 2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	SplitStoneGame * obj = new SplitStoneGame();
	clock_t start = clock();
	string my_answer = obj->winOrLose(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "WIN";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {1, 2, 3, 4, 3, 2, 2, 4, 3, 1, 4, 4, 1, 2, 4, 4, 1, 4, 3, 1, 4, 2, 1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	SplitStoneGame * obj = new SplitStoneGame();
	clock_t start = clock();
	string my_answer = obj->winOrLose(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "WIN";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 3, 1, 9, 1, 3, 1, 1, 1, 1, 1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	SplitStoneGame * obj = new SplitStoneGame();
	clock_t start = clock();
	string my_answer = obj->winOrLose(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "LOSE";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p1 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p1 != my_answer) {
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
