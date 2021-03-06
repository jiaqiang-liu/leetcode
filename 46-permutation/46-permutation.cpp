// Author:JiaQiang Liu
// Date: 2018/4/25

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> res;
		generator(res, nums, 0, nums.size() - 1);
		return res;

	}

	void generator(vector<vector<int>>& res, vector<int> num, int lo, int hi) {
		if (lo == hi) {
			res.push_back(num);
			return;
		}
		for (int i = lo; i <= hi; i++) {
			swap(num[i], num[lo]);
			generator(res, num, lo + 1, hi);
			swap(num[i], num[lo]);
		}
	}
};




int main()
{
	vector<int> num = { 1,2,3 };
	test(num, 0, 2);
    return 0;
}

