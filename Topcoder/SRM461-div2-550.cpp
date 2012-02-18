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

class ColoringRectangle {
public:
    vector<double> dred, dblue;
    vector<double> preCalc(const vector<int>& v, double h)
    {
        vector<double> ret;
        for(int i=0; i<v.size(); i++)
            if (h<=v[i])
                ret.push_back(sqrt(double(v[i]*v[i])-h*h));
        sort(ret.begin(), ret.end());
        return ret;
    }
    int solve(const vector<double>& red, const vector<double>& blue, double width)
    {
        bool flag = true; int ret = 0;
        int i = red.size() - 1, j = blue.size() - 1;
        while(width>=0)
        {
            if (flag){
                if (i<0) {return -1;}
                width -= red[i--];
            }else {
                if (j<0) {return -1;}
                width -= blue[j--];
            }
            ret++;
            flag = !flag;
        }
        return ret;
    }
	int chooseDisks(int width, int height, vector <int> red, vector <int> blue) {
	    dred = preCalc(red, height);
	    dblue = preCalc(blue, height);
	    int ret1, ret2, ret;
        ret1 = solve(dred, dblue, width);
        ret2 = solve(dblue, dred, width);
        if (ret1==-1&&ret2==-1)
            ret=-1;
        else if(ret1 == -1)
            ret = ret2;
        else if(ret2 == -1)
            ret = ret1;
        else
            ret = min(ret1, ret2);
        return ret;
	}
};

// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.4 (beta) modified by pivanof
bool KawigiEdit_RunTest(int testNum, int p0, int p1, vector <int> p2, vector <int> p3, bool hasAnswer, int p4) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1 << "," << "{";
	for (int i = 0; int(p2.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p2[i];
	}
	cout << "}" << "," << "{";
	for (int i = 0; int(p3.size()) > i; ++i) {
		if (i > 0) {
			cout << ",";
		}
		cout << p3[i];
	}
	cout << "}";
	cout << "]" << endl;
	ColoringRectangle *obj;
	int answer;
	obj = new ColoringRectangle();
	clock_t startTime = clock();
	answer = obj->chooseDisks(p0, p1, p2, p3);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p4 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p4;
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

	int p0;
	int p1;
	vector <int> p2;
	vector <int> p3;
	int p4;

	{
	// ----- test 0 -----
	p0 = 11;
	p1 = 3;
	int t2[] = {5,5};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {2,5};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	p4 = 3;
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}

	{
	// ----- test 1 -----
	p0 = 30;
	p1 = 5;
	int t2[] = {4,10,7,8,10};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {5,6,11,7,5};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	p4 = 4;
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}

	{
	// ----- test 2 -----
	p0 = 16;
	p1 = 4;
	int t2[] = {6,5,7};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {5};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	p4 = -1;
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}

	{
	// ----- test 3 -----
	p0 = 4;
	p1 = 4;
	int t2[] = {5};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {6};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	p4 = 1;
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, p3, true, p4) && all_right;
	// ------------------
	}

	{
	// ----- test 4 -----
	p0 = 6;
	p1 = 2;
	int t2[] = {6,6};
			p2.assign(t2, t2 + sizeof(t2) / sizeof(t2[0]));
	int t3[] = {2};
			p3.assign(t3, t3 + sizeof(t3) / sizeof(t3[0]));
	p4 = 3;
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, p3, true, p4) && all_right;
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