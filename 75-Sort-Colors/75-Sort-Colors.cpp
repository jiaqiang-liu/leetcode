// Author:JiaQiang Liu
// Date:2018/4/28

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
	void sortColors(vector<int>& nums) {
		int zero = -1, two = nums.size();
		for (int i = 0; i < two; ) {
			if (nums[i] == 2) {
				swap(nums[i], nums[two-1]);
				two--;
			}
			else if (nums[i] == 0) {
				swap(nums[i], nums[zero+1]);
				zero++;
				i++;
			}
			else {
				i++;
			}
		}
	}
};

int main()
{
	Solution s;
	vector<int> v = { 1,2,0 };
	s.sortColors(v);
	cout << endl << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
    return 0;
}

