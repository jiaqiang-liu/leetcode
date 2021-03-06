// Author: JiaQiang Liu
// Date: 2018/4/23

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> nums_map;
		for (size_t i = 0; i < nums.size(); i++) {
			nums_map[nums[i]] = i;
		}
		vector<int> res;
		for (size_t i = 0; i < nums.size(); i++) {
			int num = nums[i];
			int other = target - num;
			auto find = nums_map.find(other);
			if (find != nums_map.end() && find->second != i) {
				res.push_back(i);
				res.push_back(find->second);
				return res;
			}
		}
		return res;
	}
};

int main()
{
	vector<int> nums = { {3,2,4} };
	Solution s;
	auto res = s.twoSum(nums, 6);
	cout << res[0] << " " << res[1] << endl;
    return 0;
}

