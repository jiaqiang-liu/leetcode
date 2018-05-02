// Author:JiaQiang Liu
// Date:2018/5/2

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int ret = 0;
		vector<int> dp(nums.size());
		dp[0] = nums[0];
		for (int i = 1; i < nums.size(); i++) {
			dp[i] = dp[i-1] < 0 ? nums[i] : dp[i - 1] + nums[i];
		}
		return *max_element(dp.begin(),dp.end());
	}
};

int main()
{
    return 0;
}

