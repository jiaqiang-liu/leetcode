// Author:JiaQiang Liu
// Date:2018/4/27


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		int lo = 0, hi = nums.size();
		vector<int> res;
		if (hi == 0) {
			res.push_back(-1);
			res.push_back(-1);
			return res;
		}
		int mid;
		while (lo < hi) {
			mid = (lo + hi) / 2;
			if (nums[mid] < target) {
				lo = mid + 1;
			}
			else {
				hi = mid;
			}
		}
		//this is trick
		if (lo==nums.size()||nums[lo] != target) {
			res.push_back(-1);
			res.push_back(-1);
			return res;
		}
		else {
			res.push_back(lo);
			int hi = lo;
			while (hi < nums.size() && nums[hi] == target) {
				hi++;
			}
			res.push_back(hi-1);
			return res;
		}
	}
};

int main()
{
	Solution s;
	vector<int> v = { -1 };
	vector<int> res = s.searchRange(v, 0);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << " ";
	}
    return 0;
}

