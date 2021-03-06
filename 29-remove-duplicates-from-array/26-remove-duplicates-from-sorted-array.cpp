// Author:JiaQiang Liu
// Date: 2018/4/24

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0)
			return 0;
		vector<int>::iterator it;
		int pivot = *nums.begin();
		int count = 1;
		for (it = nums.begin(); it != nums.end();) {
			if (it == nums.begin()) {
				it++;
				continue;
			}
			if (*it == pivot) {
				it = nums.erase(it);
			}
			else {
				count++;
				pivot = *it;
				it++;
			}
		}
		return count;
	}
};

int main()
{
    return 0;
}

