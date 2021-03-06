// Author:JiaQiang Liu
// Date:2018/4/24

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int lo = 0, hi = nums.size() ;
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
		return lo;
	}
};

int main()
{
    return 0;
}

