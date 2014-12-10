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

class AlphabetPath {
public:
	string doesItExist(vector <string>);
};

int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
int N , M ;

vector<string> grid;
bool f(int x,int y,char c){
	if(c == 'Z'){
		return true;
	} else if(grid[x][y] == c){
		bool sw = false;
		for(int k = 0 ; k < 4 ; k++){
			int xx = x + dx[k];
			int yy = y + dy[k];
			if(xx >= 0 && xx < N && yy >= 0 && yy <= M && grid[xx][yy] == c+1){
				sw |= f(xx,yy,c+1);
			}
		}
		return sw;
	} else {
		return false;
	}
}

string AlphabetPath::doesItExist(vector <string> letterMaze) {
	grid = letterMaze;
	N = letterMaze.size();
	M = letterMaze[0].size();
	int x , y;
	for(int i = 0 ; i < N ; i++){
		for(int j = 0 ; j < M ; j++){
			if(letterMaze[i][j] == 'A'){
				x = i ;
				y = j ;
			}
		}
	}
	return f(x,y,'A')?"YES":"NO";
}


double test0() {
	string t0[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	AlphabetPath * obj = new AlphabetPath();
	clock_t start = clock();
	string my_answer = obj->doesItExist(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "YES";
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
	string t0[] = {"ADEHI..Z",
 "BCFGJK.Y",
 ".PONML.X",
 ".QRSTUVW"}
;
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	AlphabetPath * obj = new AlphabetPath();
	clock_t start = clock();
	string my_answer = obj->doesItExist(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "YES";
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
	string t0[] = {"ACBDEFGHIJKLMNOPQRSTUVWXYZ"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	AlphabetPath * obj = new AlphabetPath();
	clock_t start = clock();
	string my_answer = obj->doesItExist(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "NO";
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
	string t0[] = {"ABC.......",
 "...DEFGHIJ",
 "TSRQPONMLK",
 "UVWXYZ...."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	AlphabetPath * obj = new AlphabetPath();
	clock_t start = clock();
	string my_answer = obj->doesItExist(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "NO";
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
	string t0[] = {"..............",
 "..............",
 "..............",
 "...DEFGHIJK...",
 "...C......L...",
 "...B......M...",
 "...A......N...",
 "..........O...",
 "..ZY..TSRQP...",
 "...XWVU.......",
 ".............."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	AlphabetPath * obj = new AlphabetPath();
	clock_t start = clock();
	string my_answer = obj->doesItExist(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p1 = "YES";
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
