// Author:JiaQiang Liu
// Date: 2018/4/24

#include<iostream>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		if (s.length() == 0)
			return true;
		stack<char> stack;
		for (int i = 0; i < s.length(); i++) {
			if (stack.size() == 0) {
				stack.push(s[i]);
				continue;
			}
			if ((s[i] == ')'&&stack.top() == '(')
				|| (s[i] == ']'&&stack.top() == '[')
				|| (s[i] == '}'&&stack.top() == '{')) {
				stack.pop();
			}
			else {
				stack.push(s[i]);
			}
		}
		return stack.empty();
	}
};

int main()
{
	Solution s;
	cout << s.isValid("()");
    return 0;
}

