#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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


class P8XMatrixTransformation {
public:
	string solve(vector <string> original, vector <string> target) {
		int x=0, y=0;
        for (int i=0; i<original.size(); i++) {
            for (int j=0; j<original[0].length(); j++)
            {
                if (target[i][j]=='1')
                    y++;
                if (original[i][j]=='1')
                    x++;
            }
        }
        
        if (x==y)
            return "YES";
        return "NO";
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.4 (beta) modified by pivanof
bool KawigiEdit_RunTest(int testNum, vector <string> p0, vector <string> p1, bool hasAnswer, string p2) {
	cout << "Test " << testNum << ": [" << "{";
	for (int i = 0; int(p0.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p0[i] << "\"";
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p1.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << "\"" << p1[i] << "\"";
	}
	cout << "}";
	cout << "]" << endl;
	P8XMatrixTransformation *obj;
	string answer;
	obj = new P8XMatrixTransformation();
	clock_t startTime = clock();
	answer = obj->solve(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p2 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
	if (hasAnswer) {
		res = answer == p2;
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	all_right = true;
	
	vector <string> p0;
	vector <string> p1;
	string p2;
	
	{
        // ----- test 0 -----
        string t0[] = {"01","11"};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
        string t1[] = {"11","10"};
        p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
        p2 = "YES";
        all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
        // ------------------
	}
	
	{
        // ----- test 1 -----
        string t0[] = {"0111","0011"};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
        string t1[] = {"1011","1100"};
        p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
        p2 = "YES";
        all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
        // ------------------
	}
	
	{
        // ----- test 2 -----
        string t0[] = {"0"};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
        string t1[] = {"1"};
        p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
        p2 = "NO";
        all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
        // ------------------
	}
	
	{
        // ----- test 3 -----
        string t0[] = {"1111","1111","0000","0000"};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
        string t1[] = {"1111","1111","0000","0000"};
        p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
        p2 = "YES";
        all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
        // ------------------
	}
	
	{
        // ----- test 4 -----
        string t0[] = {"0110","1001","0110"};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
        string t1[] = {"1111","0110","0000"};
        p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
        p2 = "YES";
        all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
        // ------------------
	}
	
	{
        // ----- test 5 -----
        string t0[] = {"0000","1111","0000"};
        p0.assign(t0, t0 + sizeof(t0) / sizeof(t0[0]));
        string t1[] = {"1111","0000","1111"};
        p1.assign(t1, t1 + sizeof(t1) / sizeof(t1[0]));
        p2 = "NO";
        all_right = KawigiEdit_RunTest(5, p0, p1, true, p2) && all_right;
        // ------------------
	}
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// END KAWIGIEDIT TESTING