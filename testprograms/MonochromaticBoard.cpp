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
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;

class MonochromaticBoard {
public:
	int theMin(vector <string>);
};

int MonochromaticBoard::theMin(vector <string> board) {
	int h = board.size(), w = board[0].size();
	int rows[h],cols[w];
	int c =  0;
	while(true){
		memset(rows,0,sizeof rows);
		memset(cols,0,sizeof cols);
		for(int i = 0 ; i < h ; i++){
			for(int j = 0 ; j < w ; j++){
				rows[i] += (board[i][j] == 'B');
				cols[j] += (board[i][j] == 'B');
			}
		}
		int pr = max_element(rows,rows+h)-rows;
		int maxir = rows[pr];
		int pc = max_element(cols,cols+w)-cols;
		int maxic = cols[pc];
		if(maxir + maxic == 0){
			break;
		}
		if(maxir > maxic){
			for(int i = 0 ; i < w ; i++){
				board[pr][i] = 'X';
			}
		} else {
			for(int i = 0 ; i < h ; i++){
				board[i][pc] = 'X';
			}
		}
		c++;
	}
	return c;
}


double test0() {
	string t0[] = {"WBWBW",
 "BBBBB",
 "WBWBW",
 "WBWBW"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MonochromaticBoard * obj = new MonochromaticBoard();
	clock_t start = clock();
	int my_answer = obj->theMin(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	string t0[] = {"BBBB",
 "BBBB",
 "BBBB"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MonochromaticBoard * obj = new MonochromaticBoard();
	clock_t start = clock();
	int my_answer = obj->theMin(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	string t0[] = {"BBBBB",
 "BBBBB",
 "BBBBB",
 "BBBBB",
 "BBBBB",
 "BBBBB",
 "BBBBB",
 "BBBBB"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MonochromaticBoard * obj = new MonochromaticBoard();
	clock_t start = clock();
	int my_answer = obj->theMin(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 5;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	string t0[] = {"WW",
 "WW"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MonochromaticBoard * obj = new MonochromaticBoard();
	clock_t start = clock();
	int my_answer = obj->theMin(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	string t0[] = {"BBBBBBBB",
 "BBBBBBBB",
 "BBBBBBBB",
 "WBWBBBWB",
 "BBBBBBBB"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	MonochromaticBoard * obj = new MonochromaticBoard();
	clock_t start = clock();
	int my_answer = obj->theMin(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 9;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
