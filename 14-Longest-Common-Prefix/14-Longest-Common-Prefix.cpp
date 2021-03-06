// Author: JiaQiang Liu
// Date: 2018/4/24

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string ret;
		int i = 0;
		if (strs.size() == 0)
			return ret;
		while (true) {
			for (int j = 0; j < strs.size(); j++) {
				if (i==strs[j].size()||strs[j][i] != strs[0][i])
					return ret;
			}
			ret += strs[0][i++];
		}
		return ret;
	}
};

int main()
{
    return 0;
}

