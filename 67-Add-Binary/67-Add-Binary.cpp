// Author:JiaQiang Liu
// Date:2018/5/2

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
	string addBinary(string a, string b) {
		int lenA = a.length();
		int lenB = b.length();
		int carry=0;
		string ret = "";
		int len = max(lenA, lenB);
		for (int i = 1;; i++) {
			if (i > len)
				break;
			int pa1 = i > lenA ? 0 : a[lenA - i] - '0';
			int pa2 = i > lenB ? 0 : b[lenB - i] - '0';
			int result = (pa1 + pa2 + carry) % 2;
			carry = (pa1 + pa2 + carry) / 2;
			ret =   result?'1'+ret:'0'+ret;
		}
		if (carry != 0)
			ret = '1' + ret;
		return ret;
	}
};

int main()
{
    return 0;
}

