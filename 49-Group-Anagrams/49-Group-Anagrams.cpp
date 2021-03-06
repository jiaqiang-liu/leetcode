// Author:JiaQiang Liu
// Date: 2018/4/24

#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		multimap<string, string> m;
		for (int i = 0; i < strs.size(); i++) {
			string s = strs[i];
			sort(s.begin(), s.end());
			m.insert(make_pair(s,strs[i]));
		}
		vector<vector<string>> res;
		multimap<string, string>::iterator it;
		string pivot = m.begin()->first;
		for (it = m.begin(); it != m.end(); ) {
			vector<string> v;
			while (it!=m.end()&&it->first == pivot) {
				v.push_back(it->second);
				it++;
			}
			res.push_back(v);
			if (it == m.end())
				return res;
			pivot = it->first;
		}
		return res;
	}
};

int main()
{
	vector<string> str = { "eat","tea","tan","ate","nat","bat" };
	Solution s;
	s.groupAnagrams(str);
    return 0;
}

