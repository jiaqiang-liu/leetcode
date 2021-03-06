// Author:JiaQiang Liu
// Date:2018/5/2

#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	int lengthOfLastWord(string s) {
		int index = s.length() - 1;
		while (s[index] == ' ') {
			index--;
		}
		for (int i = index; i >= 0; i--) {
			if (s[i] == ' ') {
				return index - i;
			}
			if (i == 0) {
				return index + 1;
			}
		}
		return 0;
	}
};

int main()
{
    return 0;
}

