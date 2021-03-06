// Author:JiaQiang Liu
// Date:2018/5/2

#include<iostream>
#include<vector>
using namespace std;

class Solution {
	vector<int> plusOne(vector<int>& digits) {
		int carry = 1;
		int temp;
		for (int i = digits.size() - 1; i >= 0; i--) {
			temp = digits[i];
			digits[i] = (temp + carry) % 10;
			carry = (temp + carry) / 10;
			if (carry == 0)
				return digits;
		}
		if (carry != 0) {
			vector<int> v;
			v.push_back(carry);
			for (int i = 0; i < digits.size(); i++) {
				v.push_back(digits[i]);
			}
			return v;
		}
	}
};

int main()
{
    return 0;
}

