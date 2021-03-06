// Author:JiaQiang Liu
// Date: 2018/4/23

#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		unordered_map<char, int> char_set;
		int max_len = 0;
		for (int i = 0, j = 0; j < s.length(); j++) {
			if (char_set.find(s[j]) != char_set.end()) {
				i = max(i, char_set[s[j]] + 1);
			}
			char_set[s[j]] = j;
			max_len = max(max_len, j - i + 1);
		}
		return max_len;
	}
};

int main()
{
    return 0;
}

