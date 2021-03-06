// Author:JiaQiang Liu
// Date:2018/4/27

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	bool canJump(vector<int>& nums) {
		int max = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (max >= nums.size() - 1)
				return true;
			if (max < i)
				break;

			if (nums[i] + i > max)
				max = nums[i] + i;
		}
		return false;
	}
};

int main()
{
    return 0;
}

