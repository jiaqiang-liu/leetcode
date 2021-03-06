// Author: JiaQiang Liu
// Date: 2018/4/24

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
	int romanToInt(string s) {
		vector<int> v(s.length());
		for (int i = 0; i < s.length(); i++) {
			switch (s[i]) {
			case 'I':
				v[i] = 1;
				break;
			case 'V':
				v[i] = 5;
				break;
			case 'X':
				v[i] = 10;
				break;
			case 'L':
				v[i] = 50;
				break;
			case 'C':
				v[i] = 100;
				break;
			case 'D':
				v[i] = 500;
				break;
			case 'M':
				v[i] = 1000;
				break;
			}
		}
		int ret = 0;
		for (int i = 0; i < s.length() - 1; i++) {
			if (v[i] < v[i + 1])
				ret -= v[i];
			else
				ret += v[i];
		}
		return ret + v[s.length() - 1];
	}
};

int main()
{
    return 0;
}

