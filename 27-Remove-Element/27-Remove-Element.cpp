// Author:JiaQiang Liu
// Date:2018/4/24

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		vector<int>::iterator it;
		for (it = nums.begin(); it != nums.end();) {
			if (*it == val) {
				it = nums.erase(it);
			}
			else {
				it++;
			}
		}
		return nums.size();
	}
};

int main()
{
    return 0;
}

