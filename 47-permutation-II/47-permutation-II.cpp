// Author:Jiaqiang Liu
// Date: 2018/4/25

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	vector<vector<int>> permuteUnique(vector<int>& nums) {
		vector<vector<int>> res;
		res.push_back(nums);
		int pos = 0;
		while (pos < nums.size() - 1) {
			int size = res.size();
			for (int i = 0; i < size; i++) {
				sort(res[i].begin() + pos, res[i].end());
				for (int j = pos + 1; j < res[i].size(); j++) {
					vector<int> v=res[i];
					if (j > 0 && v[j] == v[j - 1])
						continue;

					swap(v[j], v[pos]);
					res.push_back(v);
				}
			}
			pos++;
		}
		return res;
	}
};

int main()
{
    return 0;
}

