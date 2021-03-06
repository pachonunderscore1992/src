#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
#include <typeinfo>
#include <fstream>

using namespace std;

typedef pair<int,int> edge;

struct UF {
    vector<int> p;
    int comp;
    UF(int n){
        comp = n;
        p.clear();
        for (int i = 0; i < n; i++){
            p.push_back(i);
        }
    }
    int ds(){
        return comp;
    }
    int find(int x){
        return (p[x]==x?x:p[x]=find(p[x]));
    }
    bool sameComponent(int x, int y){ return find(x)==find(y);}
    void Union( int x , int y ){
        comp--;
        int px = find( x );
        int py = find( y );
        p[ px ] = py;
    }
};

class ChristmasTreeDecoration {
    public:
    int solve(vector<int> col, vector<int> x, vector<int> y) {
        int n = col.size();
        int E = x.size();
        UF uf(n);
        for(int i = 0 ; i < E ; i++){
            int u = x[i]-1;
            int v = y[i]-1;            
            if(col[u]!=col[v] && !uf.sameComponent(u,v)){
                uf.Union(u,v);
            }
        }
        return uf.ds()-1;
    }
};

// CUT begin
ifstream data("ChristmasTreeDecoration.sample");

string next_line() {
    string s;
    getline(data, s);
    return s;
}

template <typename T> void from_stream(T &t) {
    stringstream ss(next_line());
    ss >> t;
}

void from_stream(string &s) {
    s = next_line();
}

template <typename T> void from_stream(vector<T> &ts) {
    int len;
    from_stream(len);
    ts.clear();
    for (int i = 0; i < len; ++i) {
        T t;
        from_stream(t);
        ts.push_back(t);
    }
}

template <typename T>
string to_string(T t) {
    stringstream s;
    s << t;
    return s.str();
}

string to_string(string t) {
    return "\"" + t + "\"";
}

bool do_test(vector<int> col, vector<int> x, vector<int> y, int __expected) {
    time_t startClock = clock();
    ChristmasTreeDecoration *instance = new ChristmasTreeDecoration();
    int __result = instance->solve(col, x, y);
    double elapsed = (double)(clock() - startClock) / CLOCKS_PER_SEC;
    delete instance;

    if (__result == __expected) {
        cout << "PASSED!" << " (" << elapsed << " seconds)" << endl;
        return true;
    }
    else {
        cout << "FAILED!" << " (" << elapsed << " seconds)" << endl;
        cout << "           Expected: " << to_string(__expected) << endl;
        cout << "           Received: " << to_string(__result) << endl;
        return false;
    }
}

int run_test(bool mainProcess, const set<int> &case_set, const string command) {
    int cases = 0, passed = 0;
    while (true) {
        if (next_line().find("--") != 0)
            break;
        vector<int> col;
        from_stream(col);
        vector<int> x;
        from_stream(x);
        vector<int> y;
        from_stream(y);
        next_line();
        int __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(col, x, y, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1418148002;
        double PT = T / 60.0, TT = 75.0;
        cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
        cout << "Score  : " << 250 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    set<int> cases;
    bool mainProcess = true;
    for (int i = 1; i < argc; ++i) {
        if ( string(argv[i]) == "-") {
            mainProcess = false;
        } else {
            cases.insert(atoi(argv[i]));
        }
    }
    if (mainProcess) {
        cout << "ChristmasTreeDecoration (250 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
