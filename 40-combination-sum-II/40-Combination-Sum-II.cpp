// Author:JiaQiang Liu
// Date: 2018/4/27

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		vector<vector<int>> res;
		vector<int> flag(candidates.size(), 0);
		sort(candidates.begin(), candidates.end());
		generator(res, candidates, flag, target, 0);
		return res;
	}

	void generator(vector<vector<int>>& res, vector<int> nums, vector<int>& flag, int target, int start) {
		//cout << "start:  " << nums[start] << "   target:  " << target << endl;
		if (target < 0 )
			return;

		if (target == 0) {
			vector<int> v;
			for(int i = 0; i < flag.size(); i++) {
				if (flag[i]) {
					v.push_back(nums[i]);
				}
			}
			res.push_back(v);
			return;
		}

		for (int i = start; i < nums.size(); i++) {
			//skip duplicate i>start not i>0
			if (i > start && nums[i] == nums[i - 1])
				continue;
			if (nums[i] <= target) {
				flag[i] = 1;
				generator(res, nums, flag, target - nums[i], i + 1);
				flag[i] = 0;
			}
		}
	}
};


int main()
{
	vector<int> v = { 1,1,2,5,6,10 };
	int target = 8;
	Solution s;
	vector<vector<int>> vv = s.combinationSum2(v, target);
	for (int i = 0; i < vv.size(); i++) {
		for (int j = 0; j < vv[i].size(); j++) {
			cout << vv[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}

