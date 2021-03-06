// Author: JiaQiang Liu
// Date: 2018/4/24

#include<iostream>
using namespace std;

class Solution {
	bool isPalindrome(int x) {
		if (x < 0)
			return false;
		int temp = x;
		int num = 0;
		while (temp) {
			num = num * 10 + temp % 10;
			temp /= 10;
		}
		return num == x;
	}
};

int main()
{
    return 0;
}

