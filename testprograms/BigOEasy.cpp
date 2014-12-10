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

class BigOEasy {
public:
	string isBounded(vector <string>);
};

bool visited[50];
bool adjmat[50][50];
int n;

void dfs(int u){
	for(int v = 0 ; v < n ; v++){
		if(adjmat[u][v] && !visited[v]){
			visited[v] = true;
			dfs(v);
		}
	}
}

string BigOEasy::isBounded(vector <string> graph) {
	n = graph.size();
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(graph[i][j] == 'Y'){
				adjmat[i][j] = 1;
			} else {
				adjmat[i][j] = 0;			
			}
		}
	}
	int c = 0;
	for(int u = 0 ; u < n ; u++){
		for(bool &x : visited){ x = false; };
		dfs(u);
		if(visited[u]){
			c++;
		}
	}
	cout << c << endl;
	return "??";
	if(c > 1) {
		return "Unbounded";
	} else {
		return "Bounded";
	}
}


double test0() {
	string t0[] = {"NYY",
 "YNY",
 "YYN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BigOEasy * obj = new BigOEasy();
	clock_t start = clock();
	string my_answer = obj->isBounded(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "Unbounded";
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
	string t0[] = {"NYYN",
 "NNNY",
 "NNNY",
 "NNNN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BigOEasy * obj = new BigOEasy();
	clock_t start = clock();
	string my_answer = obj->isBounded(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "Bounded";
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
	string t0[] = {"NYN",
 "NNY",
 "YNN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BigOEasy * obj = new BigOEasy();
	clock_t start = clock();
	string my_answer = obj->isBounded(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "Bounded";
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
	string t0[] = {"NYYN",
 "YNNN",
 "NNNY",
 "NNYN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BigOEasy * obj = new BigOEasy();
	clock_t start = clock();
	string my_answer = obj->isBounded(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "Bounded";
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
	string t0[] = {"NYY",
 "YNN",
 "YNN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BigOEasy * obj = new BigOEasy();
	clock_t start = clock();
	string my_answer = obj->isBounded(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "Unbounded";
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
double test5() {
	string t0[] = {"NYNYN",
 "NNYNY",
 "YNNNN",
 "NNNNN",
 "YNNNN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BigOEasy * obj = new BigOEasy();
	clock_t start = clock();
	string my_answer = obj->isBounded(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "Unbounded";
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
double test6() {
	string t0[] = {"NYYN",
 "NNYN",
 "NNNY",
 "YNNN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BigOEasy * obj = new BigOEasy();
	clock_t start = clock();
	string my_answer = obj->isBounded(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "Unbounded";
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
double test7() {
	string t0[] = {"NYYNNNNYNNYNYNNNNYYNNYNYNNNNNNNNNNYNNNNNNNYYNYNNNN",
 "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN",
 "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN",
 "YYYNYYNYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYNYYN",
 "YYYNNNNYNNYNYNNNNYYNNNNYNNNNNNNNNNYNNNNNNNYYNYNNNN",
 "YYYNYNNYNNYYYNNNYYYNNYNYNNYNYYYNYYYYYYNYNYYYNYNYNN",
 "YYYYYYNYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYNYYYYYNYYN",
 "NYYNNNNNNNYNYNNNNYNNNNNYNNNNNNNNNNNNNNNNNNYNNYNNNN",
 "YYYNYNNYNNYYYNNNNYYNNYNYNNYNYYYYYYYYYYNYNYYYNYNYNN",
 "YYYNYNNYNNYYYNNNNYYNYYNYNNYNYYYNYYYYYYNYNYYYNYNYNN",
 "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN",
 "NYYNNNNYNNYNYNNNNYYNNNNYNNNNNNNNNNYYNNNNNNYYNYNNNN",
 "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN",
 "YYYNYNNYYNYYYNNNNYYNNYNYNNYNYYYNYYYYYYNYNYYYNYNYNN",
 "YYYNYNNYNNYYYNNNNYYYNYNYNNYNYYYNYYYYYYNYNYYYNYNYNN",
 "YYYNYNNYNNYYYNNNNYYNNYYYNNYNYYYNYYYYYYNYNYYYNYNYNN",
 "YYYNYNNYNYYYYNNNNYYNNYNYNNYNYYYNYYYYYYNYNYYYNYNYNN",
 "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN",
 "NYYNNNNNNNYNYNNNNYNNNNNYNNNNNNNNNNYNNNNNNNNNNYNNNN",
 "YYYNYNNYNNYYYNNNNYYNNYNYNNYNYYYNYYYYYYYYNYYYNYNYNN",
 "YYYNYNNYNNYYYNNNNYYNNYNYYNYNYYYNYYYYYYNYNYYYNYNYNN",
 "NYYNNNNYNNYNYNNNNYYNNNNYNNNNNNYNNNYNNNNNNNYYNYNNNN",
 "YYYNYYNYNNYYYNNNNYYNNYNYNNYNYYYNYYYYYYNYNYYYNYNYNN",
 "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN",
 "YYYNYNNYNNYYYYNNNYYNNYNYNNYNYYYNYYYYYYNYNYYYNYNYNN",
 "YYYNYYNYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYNYYYYYNYYY",
 "NYYNNNNYNNYNYNNNNYYNNNNYNNNNYNNNNNYNNNNNNNYYNYNNNN",
 "YYYNYYNYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYYYYYYNYYN",
 "NYYNNNNYNNYNYNNNNYYNNNNYNNNNNNNNNNYNNNNNNNYYNYNYNN",
 "NYYNNNNYNNYYYNNNNYYNNNNYNNNNNNNNNNYNNNNNNNYYNYNNNN",
 "NYYNNNNYNNYNYNNNNYYNNNNYNNYNNNNNNNYNNNNNNNYYNYNNNN",
 "YYYNYNNYNNYYYNYNNYYNNYNYNNYNYYYNYYYYYYNYNYYYNYNYNN",
 "YYYNYNNYNNYYYNNNNYYNNYNYNNYNYYYNNYYYNYNYNYYYNYNYNN",
 "NYYNNNNYNNYNYNNNNYYNNNNYNNNNNNNNNNYNNNNYNNYYNYNNNN",
 "NYYNNNNYNNYNYNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNN",
 "NYYNNNNYNNYNYNNNNYYNNNNYNNNNNNNNNYYNNNNNNNYYNYNNNN",
 "YYYNYNNYNNYYYNNNNYYNNYNYNNYNYYYNYYYYNNNYNYYYNYNYNN",
 "YYYNYNNYNNYYYNNNNYYNNYNYNNYNYYYNNYYYYNNYNYYYNYNYNN",
 "YYYNYNNYNNYYYNNYNYYNNYNYNNYNYYYNYYYYYYNYNYYYNYNYNN",
 "NYYNNNNYNNYNYNNNNYYNNNNYNNNNNNNNNNYNNNNNNYYYNYNNNN",
 "YYYNYYNYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYNYYYYYYYYN",
 "NYYNYNNYNNYNYNNNNYYNNNNYNNNNNNNNNNYNNNNNNNYYNYNNNN",
 "NYYNNNNNNNYNYNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNYNYNNNN",
 "NYYNNNNNNNYNYNNNNYYNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNN",
 "YYYNYYNYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYNYYYNYNYNN",
 "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN",
 "YYYNYYNYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYNYYN",
 "NYYNNNNYNNYNYNNNNYYNNNNYNNNNNYNNNNYNNNNNNNYYNYNNNN",
 "YYYNYYNYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYNYYYYYNYNN",
 "YYYNYYYYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYNYYYYYNYYN"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	BigOEasy * obj = new BigOEasy();
	clock_t start = clock();
	string my_answer = obj->isBounded(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "Bounded";
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
	
	time = test5();
	if (time < 0)
		errors = true;
	
	time = test6();
	if (time < 0)
		errors = true;
	
	time = test7();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
