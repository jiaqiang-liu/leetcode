// Author:JiaQiang Liu
// Date:2018/4/27

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Interval {
	int start;
	int end;
	Interval():start(0),end(0){}
	Interval(int s,int e):start(s),end(e){}
};

bool cmp(const Interval v1, const Interval v2) {
	return v1.start < v2.start;
}
class Solution {
public:

	vector<Interval> merge(vector<Interval>& intervals) {
		vector<Interval> res;
		if (intervals.size() == 0)
			return res;

		if (intervals.size() == 1)
			return intervals;

		sort(intervals.begin(), intervals.end(), cmp);
		int lo = intervals[0].start;
		int hi = intervals[0].end;
		for (int i = 1; i < intervals.size(); i++) {
			if (intervals[i].start > hi) {
				Interval v(lo, hi);
				res.push_back(v);
				lo = intervals[i].start;
				hi = intervals[i].end;
			}
			else {
				hi = max(hi, intervals[i].end);
			}

			if (i == intervals.size() - 1) {
				Interval v(lo, hi);
				res.push_back(v);
				return res;
			}
		}
		return res;
	}
};

int main()
{
	Solution s;
	Interval v1(1, 3);
	Interval v2(2, 6);
	Interval v3(8, 10);
	Interval v4(15, 18);
	vector<Interval> v;
	v.push_back(v1);
	v.push_back(v3);
	v.push_back(v4);
	v.push_back(v2);
	s.merge(v);
    return 0;
}

